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
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_24120011_top ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+191,"dnpc", false,-1, 31,0);
    tracep->declBus(c+199,"rs1", false,-1, 4,0);
    tracep->declBus(c+200,"rs2", false,-1, 4,0);
    tracep->declBus(c+201,"rd", false,-1, 4,0);
    tracep->declBus(c+202,"func3", false,-1, 2,0);
    tracep->declBus(c+203,"func7", false,-1, 6,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->declBus(c+192,"wdata", false,-1, 31,0);
    tracep->declBus(c+271,"rdata", false,-1, 31,0);
    tracep->declBus(c+24,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+205,"src1", false,-1, 31,0);
    tracep->declBus(c+206,"src2", false,-1, 31,0);
    tracep->declBus(c+207,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+208,"ALUB", false,-1, 31,0);
    tracep->declBus(c+209,"alu_result", false,-1, 31,0);
    tracep->declBus(c+210,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+211,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+212,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+193,"w_en", false,-1);
    tracep->declBit(c+213,"w_mem_en", false,-1);
    tracep->declBit(c+214,"r_mem_en", false,-1);
    tracep->declBit(c+215,"sign_extension", false,-1);
    tracep->declBit(c+216,"b_type_enter_if", false,-1);
    tracep->declBus(c+217,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+218,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+219,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+220,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+26,"a0", false,-1, 31,0);
    tracep->declBus(c+221,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+222,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+223,"w_csr_en", false,-1);
    tracep->declBit(c+224,"r_csr_en", false,-1);
    tracep->declBit(c+225,"w_csr_ecall", false,-1);
    tracep->declBus(c+226,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+227,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+228,"inst", false,-1, 31,0);
    tracep->declBit(c+28,"IFU_valid", false,-1);
    tracep->declBit(c+29,"LSU_valid", false,-1);
    tracep->declBit(c+30,"LSU_ready", false,-1);
    tracep->declBus(c+31,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+27,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+32,"M0_arvalid", false,-1);
    tracep->declBit(c+194,"M0_arready", false,-1);
    tracep->declBus(c+229,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"M0_rvalid", false,-1);
    tracep->declBit(c+28,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+33,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+34,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+35,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBus(c+195,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+36,"M1_arvalid", false,-1);
    tracep->declBit(c+196,"M1_arready", false,-1);
    tracep->declBus(c+231,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"M1_rvalid", false,-1);
    tracep->declBit(c+37,"M1_rready", false,-1);
    tracep->declBus(c+197,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+38,"M1_awvalid", false,-1);
    tracep->declBit(c+39,"M1_awready", false,-1);
    tracep->declBus(c+198,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+233,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"M1_wvalid", false,-1);
    tracep->declBit(c+41,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_bvalid", false,-1);
    tracep->declBit(c+43,"M1_bready", false,-1);
    tracep->declBus(c+234,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+44,"S0_arvalid", false,-1);
    tracep->declBit(c+235,"S0_arready", false,-1);
    tracep->declBus(c+236,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"S0_rvalid", false,-1);
    tracep->declBit(c+45,"S0_rready", false,-1);
    tracep->declBus(c+238,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+46,"S0_awvalid", false,-1);
    tracep->declBit(c+47,"S0_awready", false,-1);
    tracep->declBus(c+239,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+240,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"S0_wvalid", false,-1);
    tracep->declBit(c+49,"S0_wready", false,-1);
    tracep->declBus(c+272,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+50,"S0_bvalid", false,-1);
    tracep->declBit(c+51,"S0_bready", false,-1);
    tracep->declBus(c+241,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+52,"sram_arvalid", false,-1);
    tracep->declBit(c+53,"sram_arready", false,-1);
    tracep->declBus(c+54,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"sram_rvalid", false,-1);
    tracep->declBit(c+56,"sram_rready", false,-1);
    tracep->declBus(c+242,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+57,"sram_awvalid", false,-1);
    tracep->declBit(c+58,"sram_awready", false,-1);
    tracep->declBus(c+243,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+244,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"sram_wvalid", false,-1);
    tracep->declBit(c+60,"sram_wready", false,-1);
    tracep->declBus(c+272,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"sram_bvalid", false,-1);
    tracep->declBit(c+62,"sram_bready", false,-1);
    tracep->declBus(c+245,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"uart_arvalid", false,-1);
    tracep->declBit(c+64,"uart_arready", false,-1);
    tracep->declBus(c+65,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"uart_rvalid", false,-1);
    tracep->declBit(c+67,"uart_rready", false,-1);
    tracep->declBus(c+246,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+68,"uart_awvalid", false,-1);
    tracep->declBit(c+69,"uart_awready", false,-1);
    tracep->declBus(c+247,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+248,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+70,"uart_wvalid", false,-1);
    tracep->declBit(c+71,"uart_wready", false,-1);
    tracep->declBus(c+272,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"uart_bvalid", false,-1);
    tracep->declBit(c+73,"uart_bready", false,-1);
    tracep->declBus(c+249,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"clint_arvalid", false,-1);
    tracep->declBit(c+7,"clint_arready", false,-1);
    tracep->declBus(c+8,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"clint_rvalid", false,-1);
    tracep->declBit(c+75,"clint_rready", false,-1);
    tracep->declBus(c+1,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"clint_awvalid", false,-1);
    tracep->declBit(c+10,"clint_awready", false,-1);
    tracep->declBus(c+3,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"clint_wvalid", false,-1);
    tracep->declBit(c+11,"clint_wready", false,-1);
    tracep->declBus(c+272,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"clint_bvalid", false,-1);
    tracep->declBit(c+6,"clint_bready", false,-1);
    tracep->declBit(c+277,"clint_clk", false,-1);
    tracep->declBit(c+278,"clint_rst", false,-1);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+205,"A", false,-1, 31,0);
    tracep->declBus(c+208,"B", false,-1, 31,0);
    tracep->declBus(c+219,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+209,"ALUout", false,-1, 31,0);
    tracep->declBus(c+250,"B_in", false,-1, 31,0);
    tracep->declBus(c+251,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+252,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+253,"carry", false,-1);
    tracep->declBit(c+254,"overflow", false,-1);
    tracep->declBit(c+255,"uless", false,-1);
    tracep->declBit(c+256,"sless", false,-1);
    tracep->declBit(c+257,"a_is_b", false,-1);
    tracep->declBit(c+258,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+205,"x", false,-1, 31,0);
    tracep->declBus(c+250,"y", false,-1, 31,0);
    tracep->declBus(c+252,"s", false,-1, 31,0);
    tracep->declBit(c+253,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+212,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+206,"src2", false,-1, 31,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->declBus(c+227,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+208,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+221,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+222,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+223,"w_csr_en", false,-1);
    tracep->declBit(c+224,"r_csr_en", false,-1);
    tracep->declBit(c+225,"w_csr_ecall", false,-1);
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+226,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+227,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+76,"mepc", false,-1, 31,0);
    tracep->declBus(c+77,"mstatus", false,-1, 31,0);
    tracep->declBus(c+78,"mcause", false,-1, 31,0);
    tracep->declBus(c+79,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+209,"alu_result", false,-1, 31,0);
    tracep->declBus(c+205,"src1", false,-1, 31,0);
    tracep->declBus(c+220,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+226,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+228,"inst", false,-1, 31,0);
    tracep->declBit(c+28,"IFU_valid", false,-1);
    tracep->declBit(c+30,"LSU_ready", false,-1);
    tracep->declBus(c+27,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+32,"M0_arvalid", false,-1);
    tracep->declBit(c+194,"M0_arready", false,-1);
    tracep->declBus(c+229,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"M0_rvalid", false,-1);
    tracep->declBit(c+28,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+33,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+34,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+35,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBit(c+194,"arready", false,-1);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+33,"awready", false,-1);
    tracep->declBit(c+34,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+35,"bvalid", false,-1);
    tracep->declBit(c+230,"rvalid", false,-1);
    tracep->declBit(c+28,"rready", false,-1);
    tracep->declBit(c+80,"rvalid_prev", false,-1);
    tracep->declBit(c+32,"arvalid", false,-1);
    tracep->declBus(c+81,"state", false,-1, 2,0);
    tracep->declBus(c+259,"next_state", false,-1, 2,0);
    tracep->declBit(c+279,"start_read_delay", false,-1);
    tracep->declBus(c+82,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+83,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+84,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+85,"random_delay", false,-1, 7,0);
    tracep->declBus(c+280,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBus(c+84,"in", false,-1, 7,0);
    tracep->declBus(c+85,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBit(c+28,"IFU_valid", false,-1);
    tracep->declBus(c+209,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+209,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+217,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+218,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+213,"w_mem_en", false,-1);
    tracep->declBit(c+214,"r_mem_en", false,-1);
    tracep->declBit(c+215,"sign_extension", false,-1);
    tracep->declBus(c+206,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+24,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+29,"LSU_valid", false,-1);
    tracep->declBit(c+30,"LSU_ready", false,-1);
    tracep->declBus(c+195,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+36,"M1_arvalid", false,-1);
    tracep->declBit(c+196,"M1_arready", false,-1);
    tracep->declBus(c+231,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"M1_rvalid", false,-1);
    tracep->declBit(c+37,"M1_rready", false,-1);
    tracep->declBus(c+197,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+38,"M1_awvalid", false,-1);
    tracep->declBit(c+39,"M1_awready", false,-1);
    tracep->declBus(c+198,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+233,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"M1_wvalid", false,-1);
    tracep->declBit(c+41,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_bvalid", false,-1);
    tracep->declBit(c+43,"M1_bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+284,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+285,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+86,"state", false,-1, 2,0);
    tracep->declBus(c+260,"next_state", false,-1, 2,0);
    tracep->declBit(c+87,"start_read_delay", false,-1);
    tracep->declBit(c+88,"start_write_delay", false,-1);
    tracep->declBus(c+195,"araddr", false,-1, 31,0);
    tracep->declBit(c+36,"arvalid", false,-1);
    tracep->declBit(c+196,"arready", false,-1);
    tracep->declBit(c+37,"rready", false,-1);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+232,"rvalid", false,-1);
    tracep->declBit(c+38,"awvalid", false,-1);
    tracep->declBit(c+39,"awready", false,-1);
    tracep->declBus(c+197,"awaddr", false,-1, 31,0);
    tracep->declBit(c+40,"wvalid", false,-1);
    tracep->declBit(c+41,"wready", false,-1);
    tracep->declBus(c+198,"wdata", false,-1, 31,0);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBus(c+233,"wstrb", false,-1, 3,0);
    tracep->declBit(c+43,"bready", false,-1);
    tracep->declBus(c+231,"rdata", false,-1, 31,0);
    tracep->declBit(c+42,"bvalid", false,-1);
    tracep->declBit(c+89,"LSU_working", false,-1);
    tracep->declBus(c+90,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+91,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+92,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+93,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+94,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+95,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+96,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBus(c+95,"in", false,-1, 7,0);
    tracep->declBus(c+96,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+27,"pc", false,-1, 31,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->declBus(c+209,"alu_result", false,-1, 31,0);
    tracep->declBus(c+227,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+210,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+216,"b_type_enter_if", false,-1);
    tracep->declBus(c+207,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+191,"dnpc", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+207,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBit(c+193,"w_en", false,-1);
    tracep->declBus(c+192,"wdata", false,-1, 31,0);
    tracep->declBus(c+201,"rd", false,-1, 4,0);
    tracep->declBus(c+199,"rs1", false,-1, 4,0);
    tracep->declBus(c+200,"rs2", false,-1, 4,0);
    tracep->declBus(c+205,"src1", false,-1, 31,0);
    tracep->declBus(c+206,"src2", false,-1, 31,0);
    tracep->declBus(c+26,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+97+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+129+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+207,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+25,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+209,"alu_result", false,-1, 31,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->declBus(c+24,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+227,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+211,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+29,"LSU_valid", false,-1);
    tracep->declBit(c+193,"w_en", false,-1);
    tracep->declBus(c+192,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+286,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+287,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+191,"din", false,-1, 31,0);
    tracep->declBus(c+27,"dout", false,-1, 31,0);
    tracep->declBit(c+29,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+27,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+32,"M0_arvalid", false,-1);
    tracep->declBit(c+194,"M0_arready", false,-1);
    tracep->declBus(c+229,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+230,"M0_rvalid", false,-1);
    tracep->declBit(c+28,"M0_rready", false,-1);
    tracep->declBus(c+273,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+274,"M0_awvalid", false,-1);
    tracep->declBit(c+33,"M0_awready", false,-1);
    tracep->declBus(c+273,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+275,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+274,"M0_wvalid", false,-1);
    tracep->declBit(c+34,"M0_wready", false,-1);
    tracep->declBus(c+272,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+35,"M0_bvalid", false,-1);
    tracep->declBit(c+276,"M0_bready", false,-1);
    tracep->declBus(c+195,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+36,"M1_arvalid", false,-1);
    tracep->declBit(c+196,"M1_arready", false,-1);
    tracep->declBus(c+231,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+232,"M1_rvalid", false,-1);
    tracep->declBit(c+37,"M1_rready", false,-1);
    tracep->declBus(c+197,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+38,"M1_awvalid", false,-1);
    tracep->declBit(c+39,"M1_awready", false,-1);
    tracep->declBus(c+198,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+233,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+40,"M1_wvalid", false,-1);
    tracep->declBit(c+41,"M1_wready", false,-1);
    tracep->declBus(c+272,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+42,"M1_bvalid", false,-1);
    tracep->declBit(c+43,"M1_bready", false,-1);
    tracep->declBus(c+234,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+44,"S0_arvalid", false,-1);
    tracep->declBit(c+235,"S0_arready", false,-1);
    tracep->declBus(c+236,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"S0_rvalid", false,-1);
    tracep->declBit(c+45,"S0_rready", false,-1);
    tracep->declBus(c+238,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+46,"S0_awvalid", false,-1);
    tracep->declBit(c+47,"S0_awready", false,-1);
    tracep->declBus(c+239,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+240,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"S0_wvalid", false,-1);
    tracep->declBit(c+49,"S0_wready", false,-1);
    tracep->declBus(c+272,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+50,"S0_bvalid", false,-1);
    tracep->declBit(c+51,"S0_bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+161,"read_state", false,-1, 2,0);
    tracep->declBus(c+261,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+162,"write_state", false,-1, 2,0);
    tracep->declBus(c+163,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+164,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+165,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+262,"read_done", false,-1);
    tracep->declBit(c+166,"write_done", false,-1);
    tracep->declBus(c+288,"read_choose", false,-1, 2,0);
    tracep->declBus(c+289,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBit(c+278,"rst", false,-1);
    tracep->declBus(c+249,"araddr", false,-1, 31,0);
    tracep->declBit(c+74,"arvalid", false,-1);
    tracep->declBit(c+7,"arready", false,-1);
    tracep->declBus(c+8,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+9,"rvalid", false,-1);
    tracep->declBit(c+75,"rready", false,-1);
    tracep->declBus(c+1,"awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"awvalid", false,-1);
    tracep->declBit(c+10,"awready", false,-1);
    tracep->declBus(c+3,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"wvalid", false,-1);
    tracep->declBit(c+11,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+12,"bvalid", false,-1);
    tracep->declBit(c+6,"bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+284,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+285,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+13,"state", false,-1, 2,0);
    tracep->declBus(c+263,"next_state", false,-1, 2,0);
    tracep->declBus(c+14,"addr", false,-1, 31,0);
    tracep->declBus(c+15,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+16,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+17,"pmem_readed", false,-1);
    tracep->declBit(c+18,"pmem_writed", false,-1);
    tracep->declBus(c+19,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+20,"random_delay", false,-1, 7,0);
    tracep->declBus(c+8,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+9,"rvalid_reg", false,-1);
    tracep->declBit(c+11,"wready_reg", false,-1);
    tracep->declQuad(c+21,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+277,"clk", false,-1);
    tracep->declBus(c+19,"in", false,-1, 7,0);
    tracep->declBus(c+20,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+228,"inst", false,-1, 31,0);
    tracep->declBit(c+28,"IFU_valid", false,-1);
    tracep->declBit(c+29,"LSU_valid", false,-1);
    tracep->declBus(c+201,"rd", false,-1, 4,0);
    tracep->declBus(c+199,"rs1", false,-1, 4,0);
    tracep->declBus(c+200,"rs2", false,-1, 4,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->declBus(c+202,"func3", false,-1, 2,0);
    tracep->declBus(c+203,"func7", false,-1, 6,0);
    tracep->declBus(c+210,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+211,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+212,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+213,"w_mem_en", false,-1);
    tracep->declBus(c+217,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+214,"r_mem_en", false,-1);
    tracep->declBit(c+215,"sign_extension", false,-1);
    tracep->declBus(c+219,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+218,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+221,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+223,"w_csr_en", false,-1);
    tracep->declBus(c+220,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+225,"w_csr_ecall", false,-1);
    tracep->declBus(c+222,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+224,"r_csr_en", false,-1);
    tracep->declBus(c+264,"opcode", false,-1, 6,0);
    tracep->declBus(c+265,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+228,"inst", false,-1, 31,0);
    tracep->declBus(c+265,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+204,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+264,"opcode", false,-1, 6,0);
    tracep->declBus(c+265,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_SRAM ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+241,"araddr", false,-1, 31,0);
    tracep->declBit(c+52,"arvalid", false,-1);
    tracep->declBit(c+53,"arready", false,-1);
    tracep->declBus(c+54,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+55,"rvalid", false,-1);
    tracep->declBit(c+56,"rready", false,-1);
    tracep->declBus(c+242,"awaddr", false,-1, 31,0);
    tracep->declBit(c+57,"awvalid", false,-1);
    tracep->declBit(c+58,"awready", false,-1);
    tracep->declBus(c+243,"wdata", false,-1, 31,0);
    tracep->declBus(c+244,"wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"wvalid", false,-1);
    tracep->declBit(c+60,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+61,"bvalid", false,-1);
    tracep->declBit(c+62,"bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+284,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+285,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+167,"state", false,-1, 2,0);
    tracep->declBus(c+168,"next_state", false,-1, 2,0);
    tracep->declBus(c+169,"addr", false,-1, 31,0);
    tracep->declBus(c+170,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+171,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+172,"pmem_readed", false,-1);
    tracep->declBit(c+173,"pmem_writed", false,-1);
    tracep->declBus(c+174,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+175,"random_delay", false,-1, 7,0);
    tracep->declBus(c+54,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+55,"rvalid_reg", false,-1);
    tracep->declBit(c+60,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBus(c+174,"in", false,-1, 7,0);
    tracep->declBus(c+175,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Uart ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+245,"araddr", false,-1, 31,0);
    tracep->declBit(c+63,"arvalid", false,-1);
    tracep->declBit(c+64,"arready", false,-1);
    tracep->declBus(c+65,"rdata", false,-1, 31,0);
    tracep->declBus(c+272,"rresp", false,-1, 1,0);
    tracep->declBit(c+66,"rvalid", false,-1);
    tracep->declBit(c+67,"rready", false,-1);
    tracep->declBus(c+246,"awaddr", false,-1, 31,0);
    tracep->declBit(c+68,"awvalid", false,-1);
    tracep->declBit(c+69,"awready", false,-1);
    tracep->declBus(c+247,"wdata", false,-1, 31,0);
    tracep->declBus(c+248,"wstrb", false,-1, 3,0);
    tracep->declBit(c+70,"wvalid", false,-1);
    tracep->declBit(c+71,"wready", false,-1);
    tracep->declBus(c+272,"bresp", false,-1, 1,0);
    tracep->declBit(c+72,"bvalid", false,-1);
    tracep->declBit(c+73,"bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+284,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+285,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+272,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+176,"state", false,-1, 2,0);
    tracep->declBus(c+177,"next_state", false,-1, 2,0);
    tracep->declBus(c+178,"addr", false,-1, 31,0);
    tracep->declBus(c+179,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+180,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+181,"pmem_readed", false,-1);
    tracep->declBit(c+182,"pmem_writed", false,-1);
    tracep->declBus(c+183,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+184,"random_delay", false,-1, 7,0);
    tracep->declBus(c+65,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+66,"rvalid_reg", false,-1);
    tracep->declBit(c+71,"wready_reg", false,-1);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBus(c+183,"in", false,-1, 7,0);
    tracep->declBus(c+184,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+266,"clk", false,-1);
    tracep->declBit(c+267,"rst", false,-1);
    tracep->declBus(c+234,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+44,"Xbar_arvalid", false,-1);
    tracep->declBit(c+235,"Xbar_arready", false,-1);
    tracep->declBus(c+236,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"Xbar_rvalid", false,-1);
    tracep->declBit(c+45,"Xbar_rready", false,-1);
    tracep->declBus(c+238,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+46,"Xbar_awvalid", false,-1);
    tracep->declBit(c+47,"Xbar_awready", false,-1);
    tracep->declBus(c+239,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+240,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+48,"Xbar_wvalid", false,-1);
    tracep->declBit(c+49,"Xbar_wready", false,-1);
    tracep->declBus(c+272,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+50,"Xbar_bvalid", false,-1);
    tracep->declBit(c+51,"Xbar_bready", false,-1);
    tracep->declBus(c+241,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+52,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+53,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+54,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+55,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+56,"Xbar_S0_rready", false,-1);
    tracep->declBus(c+242,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+57,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+58,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+243,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+244,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+60,"Xbar_S0_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+61,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+62,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+245,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+64,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+65,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+66,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+67,"Xbar_S1_rready", false,-1);
    tracep->declBus(c+246,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+68,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+69,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+247,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+248,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+70,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+71,"Xbar_S1_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+72,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+73,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+249,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+7,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+8,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+9,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+75,"Xbar_S2_rready", false,-1);
    tracep->declBus(c+1,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+10,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+3,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+11,"Xbar_S2_wready", false,-1);
    tracep->declBus(c+272,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+6,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+280,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+281,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+282,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+283,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+185,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+268,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+186,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+269,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+236,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+272,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+237,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+47,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+49,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+272,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+50,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+235,"reg_Xbar_arready", false,-1);
    tracep->declBus(c+241,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+52,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+56,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+242,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+57,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+243,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+244,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+59,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+62,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+245,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+63,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+67,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+246,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+68,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+247,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+248,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+70,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+73,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+249,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+74,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+75,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+1,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+2,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+3,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+4,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+5,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+6,"reg_Xbar_S2_bready", false,-1);
    tracep->declBit(c+187,"read_S0_done", false,-1);
    tracep->declBit(c+188,"write_S0_done", false,-1);
    tracep->declBit(c+189,"read_S1_done", false,-1);
    tracep->declBit(c+190,"write_S1_done", false,-1);
    tracep->declBit(c+270,"read_S2_done", false,-1);
    tracep->declBit(c+23,"write_S2_done", false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullIData(oldp+3,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullBit(oldp+7,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+8,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+9,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+10,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+12,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+17,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+19,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+21,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullBit(oldp+23,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_24120011_top__DOT__r_mem_data),32);
    bufp->fullIData(oldp+25,(((IData)(4U) + vlSelf->ysyx_24120011_top__DOT__pc)),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs
                             [0xaU]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_24120011_top__DOT__pc),32);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_24120011_top__DOT__LSU_valid));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_24120011_top__DOT__LSU_ready));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_24120011_top__DOT__LSU_valid),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+33,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
    bufp->fullBit(oldp+34,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg)))))));
    bufp->fullBit(oldp+35,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+39,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                            & ((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                               & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                   ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                   : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                      & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))))))));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_24120011_top__DOT__M1_wready));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_24120011_top__DOT__M1_bvalid));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_24120011_top__DOT__S0_arvalid));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_24120011_top__DOT__S0_rready));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_24120011_top__DOT__S0_awvalid));
    bufp->fullBit(oldp+47,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))
                                : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   & (3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)))))));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_24120011_top__DOT__S0_wvalid));
    bufp->fullBit(oldp+49,(((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                            & ((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg)
                                : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state)) 
                                   & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg))))));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_24120011_top__DOT__S0_bready));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+53,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullIData(oldp+54,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rdata_reg),32);
    bufp->fullBit(oldp+55,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+58,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__wready_reg));
    bufp->fullBit(oldp+61,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state))));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+64,((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rdata_reg),32);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+69,((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__wready_reg));
    bufp->fullBit(oldp+72,((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state))));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullIData(oldp+76,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_24120011_top__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+81,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+84,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+85,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+86,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+89,((0U != (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+90,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+91,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+92,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+94,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+95,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+96,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_24120011_top__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullBit(oldp+166,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+167,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state),3);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__next_state),3);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__addr),32);
    bufp->fullCData(oldp+170,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+171,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+172,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_readed));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__pmem_writed));
    bufp->fullCData(oldp+174,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__LSFR_in),8);
    bufp->fullCData(oldp+175,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__random_delay),8);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state),3);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__next_state),3);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__addr),32);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+180,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+181,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_readed));
    bufp->fullBit(oldp+182,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__pmem_writed));
    bufp->fullCData(oldp+183,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__LSFR_in),8);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__random_delay),8);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+187,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+188,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_SRAM__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+189,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+190,(((5U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Uart__DOT__state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullIData(oldp+191,(((2U & (IData)(vlSelf->ysyx_24120011_top__DOT__pc_ctrl))
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
    bufp->fullIData(oldp+192,(((8U & (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl))
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
    bufp->fullBit(oldp+193,(((IData)(vlSelf->ysyx_24120011_top__DOT__LSU_valid) 
                             & (4U != (IData)(vlSelf->ysyx_24120011_top__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+194,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+195,(((1U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                : 0U)),32);
    bufp->fullBit(oldp+196,(((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullIData(oldp+197,(((3U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                ? vlSelf->ysyx_24120011_top__DOT__alu_result
                                : 0U)),32);
    bufp->fullIData(oldp+198,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__state))
                                ? vlSelf->ysyx_24120011_top__DOT__src2
                                : 0U)),32);
    bufp->fullCData(oldp+199,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+200,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+201,((0x1fU & (vlSelf->ysyx_24120011_top__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+202,((7U & (vlSelf->ysyx_24120011_top__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+203,((vlSelf->ysyx_24120011_top__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_24120011_top__DOT__imme),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_24120011_top__DOT__src1),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_24120011_top__DOT__src2),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_24120011_top__DOT__pc_add_imme_out),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_24120011_top__DOT__ALUB),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_24120011_top__DOT__alu_result),32);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_24120011_top__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+211,(vlSelf->ysyx_24120011_top__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+212,(vlSelf->ysyx_24120011_top__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+213,(vlSelf->ysyx_24120011_top__DOT__w_mem_en));
    bufp->fullBit(oldp+214,(vlSelf->ysyx_24120011_top__DOT__r_mem_en));
    bufp->fullBit(oldp+215,(vlSelf->ysyx_24120011_top__DOT__sign_extension));
    bufp->fullBit(oldp+216,(((0x63U == (0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)) 
                             & vlSelf->ysyx_24120011_top__DOT__alu_result)));
    bufp->fullCData(oldp+217,(vlSelf->ysyx_24120011_top__DOT__w_mem_len),8);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_24120011_top__DOT__r_mem_len),8);
    bufp->fullCData(oldp+219,(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+220,(vlSelf->ysyx_24120011_top__DOT__w_csr_data_ctrl),4);
    bufp->fullSData(oldp+221,(vlSelf->ysyx_24120011_top__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+222,(vlSelf->ysyx_24120011_top__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_24120011_top__DOT__w_csr_en));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_24120011_top__DOT__r_csr_en));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_24120011_top__DOT__w_csr_ecall));
    bufp->fullIData(oldp+226,(vlSelf->ysyx_24120011_top__DOT__w_csr_data),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_24120011_top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_24120011_top__DOT__inst),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_24120011_top__DOT__M0_rdata),32);
    bufp->fullBit(oldp+230,(vlSelf->ysyx_24120011_top__DOT__M0_rvalid));
    bufp->fullIData(oldp+231,(vlSelf->ysyx_24120011_top__DOT__M1_rdata),32);
    bufp->fullBit(oldp+232,(vlSelf->ysyx_24120011_top__DOT__M1_rvalid));
    bufp->fullCData(oldp+233,(((4U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                ? 0xfU : ((2U == (IData)(vlSelf->ysyx_24120011_top__DOT__w_mem_len))
                                           ? 3U : 1U))),4);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_24120011_top__DOT__S0_araddr),32);
    bufp->fullBit(oldp+235,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullIData(oldp+236,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+237,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullIData(oldp+238,(vlSelf->ysyx_24120011_top__DOT__S0_awaddr),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_24120011_top__DOT__S0_wdata),32);
    bufp->fullCData(oldp+240,(vlSelf->ysyx_24120011_top__DOT__S0_wstrb),4);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+244,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+248,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+251,(((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyx_24120011_top__DOT__ALUB)),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+253,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+254,((((vlSelf->ysyx_24120011_top__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyx_24120011_top__DOT__ALU_ctrl))
                                               ? vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyx_24120011_top__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyx_24120011_top__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_24120011_top__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+257,((vlSelf->ysyx_24120011_top__DOT__src1 
                             == vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullBit(oldp+258,((vlSelf->ysyx_24120011_top__DOT__src1 
                             != vlSelf->ysyx_24120011_top__DOT__ALUB)));
    bufp->fullCData(oldp+259,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+260,(vlSelf->ysyx_24120011_top__DOT__i_LSU__DOT__next_state),3);
    bufp->fullCData(oldp+261,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullBit(oldp+262,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullCData(oldp+263,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullCData(oldp+264,((0x7fU & vlSelf->ysyx_24120011_top__DOT__inst)),7);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullBit(oldp+266,(vlSelf->clk));
    bufp->fullBit(oldp+267,(vlSelf->rst));
    bufp->fullCData(oldp+268,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
                                                 ? 
                                                (((0xa0000048U 
                                                   == vlSelf->ysyx_24120011_top__DOT__S0_araddr) 
                                                  | (0xa000004cU 
                                                     == vlSelf->ysyx_24120011_top__DOT__S0_araddr))
                                                  ? 3U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullCData(oldp+269,(((4U & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
                                                 ? 
                                                ((0xa00003f8U 
                                                  == vlSelf->ysyx_24120011_top__DOT__S0_awaddr)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullBit(oldp+270,(((IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullIData(oldp+271,(vlSelf->ysyx_24120011_top__DOT__rdata),32);
    bufp->fullCData(oldp+272,(0U),2);
    bufp->fullIData(oldp+273,(0U),32);
    bufp->fullBit(oldp+274,(0U));
    bufp->fullCData(oldp+275,(0xfU),4);
    bufp->fullBit(oldp+276,(1U));
    bufp->fullBit(oldp+277,(vlSelf->ysyx_24120011_top__DOT__clint_clk));
    bufp->fullBit(oldp+278,(vlSelf->ysyx_24120011_top__DOT__clint_rst));
    bufp->fullBit(oldp+279,(vlSelf->ysyx_24120011_top__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+280,(0U),3);
    bufp->fullCData(oldp+281,(1U),3);
    bufp->fullCData(oldp+282,(2U),3);
    bufp->fullCData(oldp+283,(3U),3);
    bufp->fullCData(oldp+284,(4U),3);
    bufp->fullCData(oldp+285,(5U),3);
    bufp->fullIData(oldp+286,(0x20U),32);
    bufp->fullIData(oldp+287,(0x80000000U),32);
    bufp->fullCData(oldp+288,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+289,(vlSelf->ysyx_24120011_top__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
}
