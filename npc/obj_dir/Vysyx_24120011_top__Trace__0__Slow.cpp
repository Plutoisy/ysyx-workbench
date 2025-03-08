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
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+14,"dnpc", false,-1, 31,0);
    tracep->declBus(c+15,"rs1", false,-1, 4,0);
    tracep->declBus(c+16,"rs2", false,-1, 4,0);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBus(c+18,"func3", false,-1, 2,0);
    tracep->declBus(c+19,"func7", false,-1, 6,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->declBus(c+252,"rdata", false,-1, 31,0);
    tracep->declBus(c+22,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+26,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+27,"ALUB", false,-1, 31,0);
    tracep->declBus(c+28,"alu_result", false,-1, 31,0);
    tracep->declBus(c+29,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+30,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+31,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+32,"w_en", false,-1);
    tracep->declBit(c+33,"w_mem_en", false,-1);
    tracep->declBit(c+34,"r_mem_en", false,-1);
    tracep->declBit(c+35,"sign_extension", false,-1);
    tracep->declBit(c+36,"b_type_enter_if", false,-1);
    tracep->declBus(c+37,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+38,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+39,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+40,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    tracep->declBus(c+42,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+43,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+44,"w_csr_en", false,-1);
    tracep->declBit(c+45,"r_csr_en", false,-1);
    tracep->declBit(c+46,"w_csr_ecall", false,-1);
    tracep->declBus(c+47,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+48,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+50,"inst", false,-1, 31,0);
    tracep->declBit(c+51,"IFU_valid", false,-1);
    tracep->declBit(c+52,"LSU_valid", false,-1);
    tracep->declBit(c+53,"LSU_ready", false,-1);
    tracep->declBus(c+54,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+49,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"M0_arvalid", false,-1);
    tracep->declBit(c+56,"M0_arready", false,-1);
    tracep->declBus(c+57,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+58,"M0_rvalid", false,-1);
    tracep->declBit(c+51,"M0_rready", false,-1);
    tracep->declBus(c+254,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+255,"M0_awvalid", false,-1);
    tracep->declBit(c+59,"M0_awready", false,-1);
    tracep->declBus(c+254,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+256,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+255,"M0_wvalid", false,-1);
    tracep->declBit(c+60,"M0_wready", false,-1);
    tracep->declBus(c+253,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"M0_bvalid", false,-1);
    tracep->declBit(c+257,"M0_bready", false,-1);
    tracep->declBus(c+62,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"M1_arvalid", false,-1);
    tracep->declBit(c+64,"M1_arready", false,-1);
    tracep->declBus(c+65,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"M1_rvalid", false,-1);
    tracep->declBit(c+67,"M1_rready", false,-1);
    tracep->declBus(c+68,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+69,"M1_awvalid", false,-1);
    tracep->declBit(c+70,"M1_awready", false,-1);
    tracep->declBus(c+71,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+73,"M1_wvalid", false,-1);
    tracep->declBit(c+74,"M1_wready", false,-1);
    tracep->declBus(c+253,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"M1_bvalid", false,-1);
    tracep->declBit(c+76,"M1_bready", false,-1);
    tracep->declBus(c+77,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"S0_arvalid", false,-1);
    tracep->declBit(c+79,"S0_arready", false,-1);
    tracep->declBus(c+80,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+81,"S0_rvalid", false,-1);
    tracep->declBit(c+82,"S0_rready", false,-1);
    tracep->declBus(c+83,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"S0_awvalid", false,-1);
    tracep->declBit(c+85,"S0_awready", false,-1);
    tracep->declBus(c+86,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+88,"S0_wvalid", false,-1);
    tracep->declBit(c+89,"S0_wready", false,-1);
    tracep->declBus(c+253,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+90,"S0_bvalid", false,-1);
    tracep->declBit(c+91,"S0_bready", false,-1);
    tracep->declBus(c+92,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"sram_arvalid", false,-1);
    tracep->declBit(c+94,"sram_arready", false,-1);
    tracep->declBus(c+95,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+96,"sram_rvalid", false,-1);
    tracep->declBit(c+97,"sram_rready", false,-1);
    tracep->declBus(c+98,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+99,"sram_awvalid", false,-1);
    tracep->declBit(c+100,"sram_awready", false,-1);
    tracep->declBus(c+101,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+102,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+103,"sram_wvalid", false,-1);
    tracep->declBit(c+104,"sram_wready", false,-1);
    tracep->declBus(c+253,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"sram_bvalid", false,-1);
    tracep->declBit(c+106,"sram_bready", false,-1);
    tracep->declBus(c+1,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"uart_arvalid", false,-1);
    tracep->declBit(c+107,"uart_arready", false,-1);
    tracep->declBus(c+108,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+109,"uart_rvalid", false,-1);
    tracep->declBit(c+3,"uart_rready", false,-1);
    tracep->declBus(c+4,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"uart_awvalid", false,-1);
    tracep->declBit(c+110,"uart_awready", false,-1);
    tracep->declBus(c+6,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"uart_wvalid", false,-1);
    tracep->declBit(c+111,"uart_wready", false,-1);
    tracep->declBus(c+253,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"uart_bvalid", false,-1);
    tracep->declBit(c+9,"uart_bready", false,-1);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+23,"A", false,-1, 31,0);
    tracep->declBus(c+27,"B", false,-1, 31,0);
    tracep->declBus(c+39,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+28,"ALUout", false,-1, 31,0);
    tracep->declBus(c+113,"B_in", false,-1, 31,0);
    tracep->declBus(c+114,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+115,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+116,"carry", false,-1);
    tracep->declBit(c+117,"overflow", false,-1);
    tracep->declBit(c+118,"uless", false,-1);
    tracep->declBit(c+119,"sless", false,-1);
    tracep->declBit(c+120,"a_is_b", false,-1);
    tracep->declBit(c+121,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+23,"x", false,-1, 31,0);
    tracep->declBus(c+113,"y", false,-1, 31,0);
    tracep->declBus(c+115,"s", false,-1, 31,0);
    tracep->declBit(c+116,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+31,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->declBus(c+48,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+27,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+42,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+43,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+44,"w_csr_en", false,-1);
    tracep->declBit(c+45,"r_csr_en", false,-1);
    tracep->declBit(c+46,"w_csr_ecall", false,-1);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+47,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+48,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+122,"mepc", false,-1, 31,0);
    tracep->declBus(c+123,"mstatus", false,-1, 31,0);
    tracep->declBus(c+124,"mcause", false,-1, 31,0);
    tracep->declBus(c+125,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+28,"alu_result", false,-1, 31,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+40,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+47,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+50,"inst", false,-1, 31,0);
    tracep->declBit(c+51,"IFU_valid", false,-1);
    tracep->declBit(c+53,"LSU_ready", false,-1);
    tracep->declBus(c+49,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"M0_arvalid", false,-1);
    tracep->declBit(c+56,"M0_arready", false,-1);
    tracep->declBus(c+57,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+58,"M0_rvalid", false,-1);
    tracep->declBit(c+51,"M0_rready", false,-1);
    tracep->declBus(c+254,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+255,"M0_awvalid", false,-1);
    tracep->declBit(c+59,"M0_awready", false,-1);
    tracep->declBus(c+254,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+256,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+255,"M0_wvalid", false,-1);
    tracep->declBit(c+60,"M0_wready", false,-1);
    tracep->declBus(c+253,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"M0_bvalid", false,-1);
    tracep->declBit(c+257,"M0_bready", false,-1);
    tracep->declBit(c+56,"arready", false,-1);
    tracep->declBus(c+253,"rresp", false,-1, 1,0);
    tracep->declBit(c+59,"awready", false,-1);
    tracep->declBit(c+60,"wready", false,-1);
    tracep->declBus(c+253,"bresp", false,-1, 1,0);
    tracep->declBit(c+61,"bvalid", false,-1);
    tracep->declBit(c+58,"rvalid", false,-1);
    tracep->declBit(c+51,"rready", false,-1);
    tracep->declBit(c+126,"rvalid_prev", false,-1);
    tracep->declBit(c+55,"arvalid", false,-1);
    tracep->declBus(c+127,"state", false,-1, 2,0);
    tracep->declBus(c+128,"next_state", false,-1, 2,0);
    tracep->declBit(c+258,"start_read_delay", false,-1);
    tracep->declBus(c+129,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+130,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+131,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+132,"random_delay", false,-1, 7,0);
    tracep->declBus(c+259,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBus(c+131,"in", false,-1, 7,0);
    tracep->declBus(c+132,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBit(c+51,"IFU_valid", false,-1);
    tracep->declBus(c+28,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+37,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+38,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+33,"w_mem_en", false,-1);
    tracep->declBit(c+34,"r_mem_en", false,-1);
    tracep->declBit(c+35,"sign_extension", false,-1);
    tracep->declBus(c+24,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+22,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+52,"LSU_valid", false,-1);
    tracep->declBit(c+53,"LSU_ready", false,-1);
    tracep->declBus(c+62,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"M1_arvalid", false,-1);
    tracep->declBit(c+64,"M1_arready", false,-1);
    tracep->declBus(c+65,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"M1_rvalid", false,-1);
    tracep->declBit(c+67,"M1_rready", false,-1);
    tracep->declBus(c+68,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+69,"M1_awvalid", false,-1);
    tracep->declBit(c+70,"M1_awready", false,-1);
    tracep->declBus(c+71,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+73,"M1_wvalid", false,-1);
    tracep->declBit(c+74,"M1_wready", false,-1);
    tracep->declBus(c+253,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"M1_bvalid", false,-1);
    tracep->declBit(c+76,"M1_bready", false,-1);
    tracep->declBus(c+259,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+262,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+263,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+264,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+133,"state", false,-1, 2,0);
    tracep->declBus(c+134,"next_state", false,-1, 2,0);
    tracep->declBit(c+135,"start_read_delay", false,-1);
    tracep->declBit(c+136,"start_write_delay", false,-1);
    tracep->declBus(c+62,"araddr", false,-1, 31,0);
    tracep->declBit(c+63,"arvalid", false,-1);
    tracep->declBit(c+64,"arready", false,-1);
    tracep->declBit(c+67,"rready", false,-1);
    tracep->declBus(c+253,"rresp", false,-1, 1,0);
    tracep->declBit(c+66,"rvalid", false,-1);
    tracep->declBit(c+69,"awvalid", false,-1);
    tracep->declBit(c+70,"awready", false,-1);
    tracep->declBus(c+68,"awaddr", false,-1, 31,0);
    tracep->declBit(c+73,"wvalid", false,-1);
    tracep->declBit(c+74,"wready", false,-1);
    tracep->declBus(c+71,"wdata", false,-1, 31,0);
    tracep->declBus(c+253,"bresp", false,-1, 1,0);
    tracep->declBus(c+72,"wstrb", false,-1, 3,0);
    tracep->declBit(c+76,"bready", false,-1);
    tracep->declBus(c+65,"rdata", false,-1, 31,0);
    tracep->declBit(c+75,"bvalid", false,-1);
    tracep->declBit(c+137,"LSU_working", false,-1);
    tracep->declBus(c+138,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+139,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+140,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+141,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+142,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+143,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+144,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBus(c+143,"in", false,-1, 7,0);
    tracep->declBus(c+144,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->declBus(c+28,"alu_result", false,-1, 31,0);
    tracep->declBus(c+48,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+29,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+36,"b_type_enter_if", false,-1);
    tracep->declBus(c+25,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+26,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+14,"dnpc", false,-1, 31,0);
    tracep->declBus(c+26,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBit(c+32,"w_en", false,-1);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBus(c+15,"rs1", false,-1, 4,0);
    tracep->declBus(c+16,"rs2", false,-1, 4,0);
    tracep->declBus(c+23,"src1", false,-1, 31,0);
    tracep->declBus(c+24,"src2", false,-1, 31,0);
    tracep->declBus(c+41,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+145+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+177+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+25,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+26,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+28,"alu_result", false,-1, 31,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->declBus(c+22,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+48,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+30,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+52,"LSU_valid", false,-1);
    tracep->declBit(c+32,"w_en", false,-1);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+265,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+266,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+14,"din", false,-1, 31,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->declBit(c+52,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+49,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"M0_arvalid", false,-1);
    tracep->declBit(c+56,"M0_arready", false,-1);
    tracep->declBus(c+57,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+58,"M0_rvalid", false,-1);
    tracep->declBit(c+51,"M0_rready", false,-1);
    tracep->declBus(c+254,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+255,"M0_awvalid", false,-1);
    tracep->declBit(c+59,"M0_awready", false,-1);
    tracep->declBus(c+254,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+256,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+255,"M0_wvalid", false,-1);
    tracep->declBit(c+60,"M0_wready", false,-1);
    tracep->declBus(c+253,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"M0_bvalid", false,-1);
    tracep->declBit(c+257,"M0_bready", false,-1);
    tracep->declBus(c+62,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"M1_arvalid", false,-1);
    tracep->declBit(c+64,"M1_arready", false,-1);
    tracep->declBus(c+65,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"M1_rvalid", false,-1);
    tracep->declBit(c+67,"M1_rready", false,-1);
    tracep->declBus(c+68,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+69,"M1_awvalid", false,-1);
    tracep->declBit(c+70,"M1_awready", false,-1);
    tracep->declBus(c+71,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+73,"M1_wvalid", false,-1);
    tracep->declBit(c+74,"M1_wready", false,-1);
    tracep->declBus(c+253,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+75,"M1_bvalid", false,-1);
    tracep->declBit(c+76,"M1_bready", false,-1);
    tracep->declBus(c+77,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"S0_arvalid", false,-1);
    tracep->declBit(c+79,"S0_arready", false,-1);
    tracep->declBus(c+80,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+81,"S0_rvalid", false,-1);
    tracep->declBit(c+82,"S0_rready", false,-1);
    tracep->declBus(c+83,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"S0_awvalid", false,-1);
    tracep->declBit(c+85,"S0_awready", false,-1);
    tracep->declBus(c+86,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+88,"S0_wvalid", false,-1);
    tracep->declBit(c+89,"S0_wready", false,-1);
    tracep->declBus(c+253,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+90,"S0_bvalid", false,-1);
    tracep->declBit(c+91,"S0_bready", false,-1);
    tracep->declBus(c+259,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+209,"read_state", false,-1, 2,0);
    tracep->declBus(c+210,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+211,"write_state", false,-1, 2,0);
    tracep->declBus(c+212,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+213,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+214,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+215,"read_done", false,-1);
    tracep->declBit(c+216,"write_done", false,-1);
    tracep->declBus(c+267,"read_choose", false,-1, 2,0);
    tracep->declBus(c+268,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+50,"inst", false,-1, 31,0);
    tracep->declBit(c+51,"IFU_valid", false,-1);
    tracep->declBit(c+52,"LSU_valid", false,-1);
    tracep->declBus(c+17,"rd", false,-1, 4,0);
    tracep->declBus(c+15,"rs1", false,-1, 4,0);
    tracep->declBus(c+16,"rs2", false,-1, 4,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->declBus(c+18,"func3", false,-1, 2,0);
    tracep->declBus(c+19,"func7", false,-1, 6,0);
    tracep->declBus(c+29,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+30,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+31,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+33,"w_mem_en", false,-1);
    tracep->declBus(c+37,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+34,"r_mem_en", false,-1);
    tracep->declBit(c+35,"sign_extension", false,-1);
    tracep->declBus(c+39,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+38,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+42,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+44,"w_csr_en", false,-1);
    tracep->declBus(c+40,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+46,"w_csr_ecall", false,-1);
    tracep->declBus(c+43,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+45,"r_csr_en", false,-1);
    tracep->declBus(c+217,"opcode", false,-1, 6,0);
    tracep->declBus(c+218,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+50,"inst", false,-1, 31,0);
    tracep->declBus(c+218,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+20,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+217,"opcode", false,-1, 6,0);
    tracep->declBus(c+218,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_SRAM ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+92,"araddr", false,-1, 31,0);
    tracep->declBit(c+93,"arvalid", false,-1);
    tracep->declBit(c+94,"arready", false,-1);
    tracep->declBus(c+95,"rdata", false,-1, 31,0);
    tracep->declBus(c+253,"rresp", false,-1, 1,0);
    tracep->declBit(c+96,"rvalid", false,-1);
    tracep->declBit(c+97,"rready", false,-1);
    tracep->declBus(c+98,"awaddr", false,-1, 31,0);
    tracep->declBit(c+99,"awvalid", false,-1);
    tracep->declBit(c+100,"awready", false,-1);
    tracep->declBus(c+101,"wdata", false,-1, 31,0);
    tracep->declBus(c+102,"wstrb", false,-1, 3,0);
    tracep->declBit(c+103,"wvalid", false,-1);
    tracep->declBit(c+104,"wready", false,-1);
    tracep->declBus(c+253,"bresp", false,-1, 1,0);
    tracep->declBit(c+105,"bvalid", false,-1);
    tracep->declBit(c+106,"bready", false,-1);
    tracep->declBus(c+259,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+262,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+263,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+264,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+219,"state", false,-1, 2,0);
    tracep->declBus(c+220,"next_state", false,-1, 2,0);
    tracep->declBus(c+221,"addr", false,-1, 31,0);
    tracep->declBus(c+222,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+223,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+224,"pmem_readed", false,-1);
    tracep->declBit(c+225,"pmem_writed", false,-1);
    tracep->declBus(c+226,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+227,"random_delay", false,-1, 7,0);
    tracep->declBus(c+95,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+96,"rvalid_reg", false,-1);
    tracep->declBit(c+104,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBus(c+226,"in", false,-1, 7,0);
    tracep->declBus(c+227,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Uart ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+1,"araddr", false,-1, 31,0);
    tracep->declBit(c+2,"arvalid", false,-1);
    tracep->declBit(c+107,"arready", false,-1);
    tracep->declBus(c+108,"rdata", false,-1, 31,0);
    tracep->declBus(c+253,"rresp", false,-1, 1,0);
    tracep->declBit(c+109,"rvalid", false,-1);
    tracep->declBit(c+3,"rready", false,-1);
    tracep->declBus(c+4,"awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"awvalid", false,-1);
    tracep->declBit(c+110,"awready", false,-1);
    tracep->declBus(c+6,"wdata", false,-1, 31,0);
    tracep->declBus(c+7,"wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"wvalid", false,-1);
    tracep->declBit(c+111,"wready", false,-1);
    tracep->declBus(c+253,"bresp", false,-1, 1,0);
    tracep->declBit(c+112,"bvalid", false,-1);
    tracep->declBit(c+9,"bready", false,-1);
    tracep->declBus(c+259,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+262,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+263,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+264,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+253,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+228,"state", false,-1, 2,0);
    tracep->declBus(c+229,"next_state", false,-1, 2,0);
    tracep->declBus(c+230,"addr", false,-1, 31,0);
    tracep->declBus(c+231,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+232,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+233,"pmem_readed", false,-1);
    tracep->declBit(c+234,"pmem_writed", false,-1);
    tracep->declBus(c+235,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+236,"random_delay", false,-1, 7,0);
    tracep->declBus(c+108,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+109,"rvalid_reg", false,-1);
    tracep->declBit(c+111,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBus(c+235,"in", false,-1, 7,0);
    tracep->declBus(c+236,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"rst", false,-1);
    tracep->declBus(c+77,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"Xbar_arvalid", false,-1);
    tracep->declBit(c+79,"Xbar_arready", false,-1);
    tracep->declBus(c+80,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+81,"Xbar_rvalid", false,-1);
    tracep->declBit(c+82,"Xbar_rready", false,-1);
    tracep->declBus(c+83,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"Xbar_awvalid", false,-1);
    tracep->declBit(c+85,"Xbar_awready", false,-1);
    tracep->declBus(c+86,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+87,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+88,"Xbar_wvalid", false,-1);
    tracep->declBit(c+89,"Xbar_wready", false,-1);
    tracep->declBus(c+253,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+90,"Xbar_bvalid", false,-1);
    tracep->declBit(c+91,"Xbar_bready", false,-1);
    tracep->declBus(c+92,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+94,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+95,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+96,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+97,"Xbar_S0_rready", false,-1);
    tracep->declBus(c+98,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+99,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+100,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+101,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+102,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+103,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+104,"Xbar_S0_wready", false,-1);
    tracep->declBus(c+253,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+105,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+106,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+1,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+2,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+107,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+108,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+253,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+109,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+3,"Xbar_S1_rready", false,-1);
    tracep->declBus(c+4,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+5,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+110,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+6,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+111,"Xbar_S1_wready", false,-1);
    tracep->declBus(c+253,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+9,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+259,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+260,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+261,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+262,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBit(c+237,"r_Xbar_state", false,-1);
    tracep->declBit(c+238,"r_Xbar_next_state", false,-1);
    tracep->declBit(c+239,"w_Xbar_state", false,-1);
    tracep->declBit(c+240,"w_Xbar_next_state", false,-1);
    tracep->declBit(c+241,"reg_Xbar_S0_araddr", false,-1);
    tracep->declBit(c+93,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+79,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+242,"reg_Xbar_rdata", false,-1);
    tracep->declBit(c+255,"reg_Xbar_rresp", false,-1);
    tracep->declBit(c+81,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+97,"reg_Xbar_S0_rready", false,-1);
    tracep->declBit(c+10,"reg_Xbar_S1_araddr", false,-1);
    tracep->declBit(c+2,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+3,"reg_Xbar_S1_rready", false,-1);
    tracep->declBit(c+243,"reg_Xbar_S0_awaddr", false,-1);
    tracep->declBit(c+99,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+85,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+244,"reg_Xbar_S0_wdata", false,-1);
    tracep->declBit(c+245,"reg_Xbar_S0_wstrb", false,-1);
    tracep->declBit(c+103,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+89,"reg_Xbar_wready", false,-1);
    tracep->declBit(c+255,"reg_Xbar_bresp", false,-1);
    tracep->declBit(c+90,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+106,"reg_Xbar_S0_bready", false,-1);
    tracep->declBit(c+11,"reg_Xbar_S1_awaddr", false,-1);
    tracep->declBit(c+5,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+12,"reg_Xbar_S1_wdata", false,-1);
    tracep->declBit(c+13,"reg_Xbar_S1_wstrb", false,-1);
    tracep->declBit(c+8,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+9,"reg_Xbar_S1_bready", false,-1);
    tracep->declBit(c+246,"read_S0_done", false,-1);
    tracep->declBit(c+247,"write_S0_done", false,-1);
    tracep->declBit(c+248,"read_S1_done", false,-1);
    tracep->declBit(c+249,"write_S1_done", false,-1);
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
    bufp->fullBit(oldp+10,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr));
    bufp->fullBit(oldp+12,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb));
    bufp->fullIData(oldp+14,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
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
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+17,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+18,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+19,((vlSelf->ysyx_24120011_top__DOT__inst 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullIData(oldp+21,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
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
    bufp->fullIData(oldp+22,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+26,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullBit(oldp+36,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                            & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+37,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+56,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+57,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
    bufp->fullBit(oldp+59,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))));
    bufp->fullBit(oldp+60,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)))));
    bufp->fullBit(oldp+61,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullIData(oldp+62,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+64,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
    bufp->fullIData(oldp+68,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                               : 0U)),32);
    bufp->fullBit(oldp+69,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+70,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))))));
    bufp->fullIData(oldp+71,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyx_24120011_top__DOT__src2
                               : 0U)),32);
    bufp->fullCData(oldp+72,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                          ? 3U : 1U))),4);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullIData(oldp+80,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+81,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
    bufp->fullIData(oldp+83,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                        ? ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                            ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                            : 0U) : 0U))),32);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                            & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)))));
    bufp->fullIData(oldp+86,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                        ? ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                            ? vlSelf->ysyx_24120011_top__DOT__src2
                                            : 0U) : 0U))),32);
    bufp->fullCData(oldp+87,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                               ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                          ? ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                              ? 0xfU
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                  ? 3U
                                                  : 1U))
                                          : 0U))),4);
    bufp->fullBit(oldp+88,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                             ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                      ? (1U & (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid))
                                      : 0U))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg))));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
    bufp->fullIData(oldp+92,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+94,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+95,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullIData(oldp+98,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                              & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                  ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                           ? ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                               ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                               : 0U)
                                           : 0U)))),32);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+100,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+101,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                            ? ((4U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                                ? vlSelf->ysyx_24120011_top__DOT__src2
                                                : 0U)
                                            : 0U)))),32);
    bufp->fullCData(oldp+102,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                   ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                              ? ((4U 
                                                  == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                  ? 0xfU
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                   ? 3U
                                                   : 1U))
                                              : 0U)))),4);
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                             & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                 ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                          ? (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid)
                                          : 0U)))));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    bufp->fullBit(oldp+105,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+107,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
    bufp->fullBit(oldp+109,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
    bufp->fullBit(oldp+110,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
    bufp->fullBit(oldp+112,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+114,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+117,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+118,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+120,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+121,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+128,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+131,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+132,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
    bufp->fullCData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
    bufp->fullBit(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+137,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullCData(oldp+213,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+214,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullBit(oldp+215,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+216,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+217,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullCData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
    bufp->fullCData(oldp+220,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
    bufp->fullCData(oldp+222,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+223,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+224,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
    bufp->fullCData(oldp+226,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
    bufp->fullCData(oldp+227,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
    bufp->fullCData(oldp+229,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
    bufp->fullCData(oldp+231,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+232,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+233,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
    bufp->fullCData(oldp+235,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
    bufp->fullCData(oldp+236,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
    bufp->fullBit(oldp+237,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state)
                              ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                 & (~ ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))))
                              : (IData)(vlSelf->ysyx_24120011_top__DOT__S0_arvalid))));
    bufp->fullBit(oldp+239,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state));
    bufp->fullBit(oldp+240,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)
                              ? ((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                 & (~ ((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                                       & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))))
                              : ((IData)(vlSelf->ysyx_24120011_top__DOT__S0_awvalid) 
                                 & (0xa00003f8U != vlSelf->ysyx_24120011_top__DOT__S0_araddr)))));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                             & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                 ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                          ? ((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                              ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                              : 0U)
                                          : 0U)))));
    bufp->fullBit(oldp+244,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                             & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                 ? 0U : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                          ? ((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                              ? vlSelf->ysyx_24120011_top__DOT__src2
                                              : 0U)
                                          : 0U)))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                             & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                 ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                            ? ((4U 
                                                == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                ? 0xfU
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                                    ? 3U
                                                    : 1U))
                                            : 0U)))));
    bufp->fullBit(oldp+246,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+247,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+248,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+249,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+250,(vlSelf->clk));
    bufp->fullBit(oldp+251,(vlSelf->rst));
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullCData(oldp+253,(0U),2);
    bufp->fullIData(oldp+254,(0U),32);
    bufp->fullBit(oldp+255,(0U));
    bufp->fullCData(oldp+256,(0xfU),4);
    bufp->fullBit(oldp+257,(1U));
    bufp->fullBit(oldp+258,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+259,(0U),3);
    bufp->fullCData(oldp+260,(1U),3);
    bufp->fullCData(oldp+261,(2U),3);
    bufp->fullCData(oldp+262,(3U),3);
    bufp->fullCData(oldp+263,(4U),3);
    bufp->fullCData(oldp+264,(5U),3);
    bufp->fullIData(oldp+265,(0x20U),32);
    bufp->fullIData(oldp+266,(0x80000000U),32);
    bufp->fullCData(oldp+267,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+268,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
}
