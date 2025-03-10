// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+1076,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1077,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1078,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1079,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1080,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1081,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1082,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1083,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1084,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1086,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1087,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1088,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1091,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1092,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1093,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1094,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1095,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+1076,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1077,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1078,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1079,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1080,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1081,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1082,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1083,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1084,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1085,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1086,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1087,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1088,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1089,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1090,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1091,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1092,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1093,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1094,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1095,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+829,"spi_sck", false,-1);
    tracep->declBus(c+830,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1096,"spi_mosi", false,-1);
    tracep->declBit(c+1097,"spi_miso", false,-1);
    tracep->declBit(c+1094,"uart_rx", false,-1);
    tracep->declBit(c+1095,"uart_tx", false,-1);
    tracep->declBit(c+1098,"psram_sck", false,-1);
    tracep->declBit(c+1099,"psram_ce_n", false,-1);
    tracep->declBus(c+247,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1100,"sdram_clk", false,-1);
    tracep->declBit(c+831,"sdram_cke", false,-1);
    tracep->declBit(c+832,"sdram_cs", false,-1);
    tracep->declBit(c+833,"sdram_ras", false,-1);
    tracep->declBit(c+834,"sdram_cas", false,-1);
    tracep->declBit(c+835,"sdram_we", false,-1);
    tracep->declBus(c+836,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+837,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+838,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1076,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1077,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1078,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1086,"ps2_clk", false,-1);
    tracep->declBit(c+1087,"ps2_data", false,-1);
    tracep->declBus(c+1088,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1089,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1091,"vga_hsync", false,-1);
    tracep->declBit(c+1092,"vga_vsync", false,-1);
    tracep->declBit(c+1093,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+83,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+84,"in_psel", false,-1);
    tracep->declBit(c+348,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"in_pready", false,-1);
    tracep->declBus(c+1101,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+88,"in_pslverr", false,-1);
    tracep->declBus(c+83,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+84,"out_psel", false,-1);
    tracep->declBit(c+348,"out_penable", false,-1);
    tracep->declBus(c+1125,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"out_pwrite", false,-1);
    tracep->declBus(c+86,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"out_pready", false,-1);
    tracep->declBus(c+1101,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+88,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+84,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+348,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+83,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1125,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+88,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+1101,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+89,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+49,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+83,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1125,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+840,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1126,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+841,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+90,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+50,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+91,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1125,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1128,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1129,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+92,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+51,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+93,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1131,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+1132,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+94,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+52,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+93,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1133,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1134,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+248,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+53,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+83,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1125,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1126,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+349,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1103,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+1104,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+93,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1105,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1126,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1106,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+95,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+96,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+85,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+91,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1125,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+842,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1126,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+843,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+97,"sel_0", false,-1);
    tracep->declBit(c+98,"sel_1", false,-1);
    tracep->declBit(c+99,"sel_2", false,-1);
    tracep->declBit(c+100,"sel_3", false,-1);
    tracep->declBit(c+101,"sel_4", false,-1);
    tracep->declBit(c+102,"sel_5", false,-1);
    tracep->declBit(c+103,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+104,"auto_in_awready", false,-1);
    tracep->declBit(c+105,"auto_in_awvalid", false,-1);
    tracep->declBus(c+350,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+104,"auto_in_wready", false,-1);
    tracep->declBit(c+108,"auto_in_wvalid", false,-1);
    tracep->declBus(c+109,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+285,"auto_in_bready", false,-1);
    tracep->declBit(c+286,"auto_in_bvalid", false,-1);
    tracep->declBus(c+351,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+111,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_in_arready", false,-1);
    tracep->declBit(c+113,"auto_in_arvalid", false,-1);
    tracep->declBus(c+352,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_in_rready", false,-1);
    tracep->declBit(c+287,"auto_in_rvalid", false,-1);
    tracep->declBus(c+353,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+84,"auto_out_psel", false,-1);
    tracep->declBit(c+348,"auto_out_penable", false,-1);
    tracep->declBit(c+85,"auto_out_pwrite", false,-1);
    tracep->declBus(c+83,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+86,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+284,"auto_out_pready", false,-1);
    tracep->declBit(c+88,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1101,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+348,"nodeOut_penable", false,-1);
    tracep->declBus(c+354,"state", false,-1, 1,0);
    tracep->declBit(c+112,"accept_read", false,-1);
    tracep->declBit(c+104,"accept_write", false,-1);
    tracep->declBit(c+355,"is_write_r", false,-1);
    tracep->declBit(c+85,"is_write", false,-1);
    tracep->declBus(c+353,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+351,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+356,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+357,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+358,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+359,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+116,"resp", false,-1, 1,0);
    tracep->declBus(c+360,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+111,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+287,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+361,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+286,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+362,"auto_in_awready", false,-1);
    tracep->declBit(c+363,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1136,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_in_wready", false,-1);
    tracep->declBit(c+365,"auto_in_wvalid", false,-1);
    tracep->declBus(c+119,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+366,"auto_in_wlast", false,-1);
    tracep->declBit(c+367,"auto_in_bready", false,-1);
    tracep->declBit(c+288,"auto_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+258,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+368,"auto_in_arready", false,-1);
    tracep->declBit(c+369,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1136,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+370,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+35,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_in_rlast", false,-1);
    tracep->declBit(c+291,"auto_out_awready", false,-1);
    tracep->declBit(c+371,"auto_out_awvalid", false,-1);
    tracep->declBus(c+350,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+372,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+292,"auto_out_wready", false,-1);
    tracep->declBit(c+373,"auto_out_wvalid", false,-1);
    tracep->declBus(c+109,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+374,"auto_out_wlast", false,-1);
    tracep->declBit(c+293,"auto_out_bready", false,-1);
    tracep->declBit(c+294,"auto_out_bvalid", false,-1);
    tracep->declBus(c+289,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+296,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+123,"auto_out_arready", false,-1);
    tracep->declBit(c+375,"auto_out_arvalid", false,-1);
    tracep->declBus(c+352,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+376,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+370,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+35,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+36,"auto_out_rlast", false,-1);
    tracep->declBit(c+373,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+377,"w_idle", false,-1);
    tracep->declBit(c+297,"in_awready", false,-1);
    tracep->declBit(c+378,"busy", false,-1);
    tracep->declBus(c+379,"r_addr", false,-1, 31,0);
    tracep->declBus(c+380,"r_len", false,-1, 7,0);
    tracep->declBus(c+381,"len", false,-1, 7,0);
    tracep->declBus(c+124,"addr", false,-1, 31,0);
    tracep->declBit(c+382,"busy_1", false,-1);
    tracep->declBus(c+383,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+384,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+385,"len_1", false,-1, 7,0);
    tracep->declBus(c+125,"addr_1", false,-1, 31,0);
    tracep->declBit(c+386,"wbeats_latched", false,-1);
    tracep->declBit(c+371,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+387,"wbeats_valid", false,-1);
    tracep->declBus(c+388,"w_counter", false,-1, 8,0);
    tracep->declBus(c+389,"w_todo", false,-1, 8,0);
    tracep->declBit(c+374,"w_last", false,-1);
    tracep->declBit(c+293,"nodeOut_bready", false,-1);
    tracep->declBus(c+390,"error_0", false,-1, 1,0);
    tracep->declBus(c+391,"error_1", false,-1, 1,0);
    tracep->declBus(c+392,"error_2", false,-1, 1,0);
    tracep->declBus(c+393,"error_3", false,-1, 1,0);
    tracep->declBus(c+394,"error_4", false,-1, 1,0);
    tracep->declBus(c+395,"error_5", false,-1, 1,0);
    tracep->declBus(c+396,"error_6", false,-1, 1,0);
    tracep->declBus(c+397,"error_7", false,-1, 1,0);
    tracep->declBus(c+398,"error_8", false,-1, 1,0);
    tracep->declBus(c+399,"error_9", false,-1, 1,0);
    tracep->declBus(c+400,"error_10", false,-1, 1,0);
    tracep->declBus(c+401,"error_11", false,-1, 1,0);
    tracep->declBus(c+402,"error_12", false,-1, 1,0);
    tracep->declBus(c+403,"error_13", false,-1, 1,0);
    tracep->declBus(c+404,"error_14", false,-1, 1,0);
    tracep->declBus(c+405,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+368,"io_enq_ready", false,-1);
    tracep->declBit(c+369,"io_enq_valid", false,-1);
    tracep->declBus(c+1136,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+121,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1137,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+122,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1138,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+126,"io_deq_ready", false,-1);
    tracep->declBit(c+375,"io_deq_valid", false,-1);
    tracep->declBus(c+352,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+127,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+406,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+115,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+407,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+408,"ram", false,-1, 48,0);
    tracep->declBit(c+410,"full", false,-1);
    tracep->declBit(c+375,"io_deq_valid_0", false,-1);
    tracep->declBit(c+128,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+362,"io_enq_ready", false,-1);
    tracep->declBit(c+363,"io_enq_valid", false,-1);
    tracep->declBus(c+1136,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+117,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1137,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+118,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1138,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+298,"io_deq_ready", false,-1);
    tracep->declBit(c+411,"io_deq_valid", false,-1);
    tracep->declBus(c+350,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+129,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+412,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+107,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+413,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+414,"ram", false,-1, 48,0);
    tracep->declBit(c+416,"full", false,-1);
    tracep->declBit(c+411,"io_deq_valid_0", false,-1);
    tracep->declBit(c+299,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+364,"io_enq_ready", false,-1);
    tracep->declBit(c+365,"io_enq_valid", false,-1);
    tracep->declBus(c+119,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+120,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+366,"io_enq_bits_last", false,-1);
    tracep->declBit(c+300,"io_deq_ready", false,-1);
    tracep->declBit(c+417,"io_deq_valid", false,-1);
    tracep->declBus(c+109,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+110,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+418,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+419,"ram", false,-1, 36,0);
    tracep->declBit(c+421,"full", false,-1);
    tracep->declBit(c+417,"io_deq_valid_0", false,-1);
    tracep->declBit(c+301,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+302,"auto_in_awready", false,-1);
    tracep->declBit(c+130,"auto_in_awvalid", false,-1);
    tracep->declBus(c+350,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1110,"auto_in_wready", false,-1);
    tracep->declBit(c+54,"auto_in_wvalid", false,-1);
    tracep->declBus(c+109,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+303,"auto_in_bready", false,-1);
    tracep->declBit(c+422,"auto_in_bvalid", false,-1);
    tracep->declBus(c+423,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"auto_in_arready", false,-1);
    tracep->declBit(c+55,"auto_in_arvalid", false,-1);
    tracep->declBus(c+352,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+38,"auto_in_rready", false,-1);
    tracep->declBit(c+425,"auto_in_rvalid", false,-1);
    tracep->declBus(c+426,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+427,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+428,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+37,"nodeIn_arready", false,-1);
    tracep->declBit(c+302,"nodeIn_awready", false,-1);
    tracep->declBit(c+133,"w_sel0", false,-1);
    tracep->declBit(c+422,"w_full", false,-1);
    tracep->declBus(c+423,"w_id", false,-1, 3,0);
    tracep->declBit(c+429,"r_sel1", false,-1);
    tracep->declBit(c+430,"w_sel1", false,-1);
    tracep->declBit(c+425,"r_full", false,-1);
    tracep->declBus(c+426,"r_id", false,-1, 3,0);
    tracep->declBit(c+134,"ren", false,-1);
    tracep->declBit(c+431,"rdata_REG", false,-1);
    tracep->declBus(c+432,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+433,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+434,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+435,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+135,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+134,"R0_en", false,-1);
    tracep->declBit(c+1074,"R0_clk", false,-1);
    tracep->declBus(c+436,"R0_data", false,-1, 31,0);
    tracep->declBus(c+136,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+304,"W0_en", false,-1);
    tracep->declBit(c+1074,"W0_clk", false,-1);
    tracep->declBus(c+109,"W0_data", false,-1, 31,0);
    tracep->declBus(c+110,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+362,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+363,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1136,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+365,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+119,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+366,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+367,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+258,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+368,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+369,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1136,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+370,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+362,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+363,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1136,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+365,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+119,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+366,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+367,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+288,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+258,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+368,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+369,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1136,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+370,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+305,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+437,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+350,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+292,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+373,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+109,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+374,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+293,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+294,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+137,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+438,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+352,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+370,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+290,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+35,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+36,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+302,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+130,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+350,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1110,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+109,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+303,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+422,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+423,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+424,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+37,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+55,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+352,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+132,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+38,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+425,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+426,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+427,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+428,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+56,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+57,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+439,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+58,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+352,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+27,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+440,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+441,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+104,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+105,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+350,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+104,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+108,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+109,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+285,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+286,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+351,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+111,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+112,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+113,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+352,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+34,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+287,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+353,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1107,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+111,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+294,"in_0_bvalid", false,-1);
    tracep->declBit(c+290,"in_0_rvalid", false,-1);
    tracep->declBit(c+306,"in_0_wready", false,-1);
    tracep->declBit(c+307,"in_0_awready", false,-1);
    tracep->declBit(c+137,"in_0_arready", false,-1);
    tracep->declBit(c+305,"anonIn_awready", false,-1);
    tracep->declBit(c+139,"requestARIO_0_0", false,-1);
    tracep->declBit(c+140,"requestARIO_0_1", false,-1);
    tracep->declBit(c+141,"requestARIO_0_2", false,-1);
    tracep->declBit(c+142,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+143,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+144,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+443,"arSel", false,-1, 15,0);
    tracep->declBus(c+444,"awSel", false,-1, 15,0);
    tracep->declBus(c+39,"rSel", false,-1, 15,0);
    tracep->declBus(c+308,"bSel", false,-1, 15,0);
    tracep->declBit(c+445,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+446,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+447,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+448,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+449,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+450,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+451,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+452,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+453,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+454,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+455,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+456,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+457,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+458,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+459,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+460,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+461,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+462,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+463,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+464,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+465,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+466,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+467,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+468,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+469,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+470,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+471,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+472,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+473,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+474,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+475,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+476,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+477,"latched", false,-1);
    tracep->declBit(c+478,"in_0_awvalid", false,-1);
    tracep->declBit(c+479,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+480,"in_0_wvalid", false,-1);
    tracep->declBit(c+481,"idle_3", false,-1);
    tracep->declBit(c+309,"anyValid", false,-1);
    tracep->declBus(c+40,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+482,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+41,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+42,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+43,"prefixOR_1", false,-1);
    tracep->declBit(c+44,"winner_3_1", false,-1);
    tracep->declBit(c+45,"winner_3_2", false,-1);
    tracep->declBit(c+483,"state_3_0", false,-1);
    tracep->declBit(c+484,"state_3_1", false,-1);
    tracep->declBit(c+485,"state_3_2", false,-1);
    tracep->declBit(c+46,"muxState_3_0", false,-1);
    tracep->declBit(c+47,"muxState_3_1", false,-1);
    tracep->declBit(c+48,"muxState_3_2", false,-1);
    tracep->declBit(c+486,"idle_4", false,-1);
    tracep->declBit(c+310,"anyValid_1", false,-1);
    tracep->declBus(c+311,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+487,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+312,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+313,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+314,"winner_4_0", false,-1);
    tracep->declBit(c+315,"winner_4_2", false,-1);
    tracep->declBit(c+488,"state_4_0", false,-1);
    tracep->declBit(c+489,"state_4_2", false,-1);
    tracep->declBit(c+316,"muxState_4_0", false,-1);
    tracep->declBit(c+317,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+490,"io_enq_ready", false,-1);
    tracep->declBit(c+479,"io_enq_valid", false,-1);
    tracep->declBus(c+145,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+318,"io_deq_ready", false,-1);
    tracep->declBit(c+491,"io_deq_valid", false,-1);
    tracep->declBus(c+146,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+492,"wrap", false,-1);
    tracep->declBit(c+493,"wrap_1", false,-1);
    tracep->declBit(c+494,"maybe_full", false,-1);
    tracep->declBit(c+495,"ptr_match", false,-1);
    tracep->declBit(c+496,"empty", false,-1);
    tracep->declBit(c+497,"full", false,-1);
    tracep->declBit(c+491,"io_deq_valid_0", false,-1);
    tracep->declBit(c+319,"do_deq", false,-1);
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+493,"R0_addr", false,-1);
    tracep->declBit(c+1139,"R0_en", false,-1);
    tracep->declBit(c+1074,"R0_clk", false,-1);
    tracep->declBus(c+498,"R0_data", false,-1, 2,0);
    tracep->declBit(c+492,"W0_addr", false,-1);
    tracep->declBit(c+320,"W0_en", false,-1);
    tracep->declBit(c+1074,"W0_clk", false,-1);
    tracep->declBus(c+145,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+499+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+291,"auto_in_awready", false,-1);
    tracep->declBit(c+371,"auto_in_awvalid", false,-1);
    tracep->declBus(c+350,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+372,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+292,"auto_in_wready", false,-1);
    tracep->declBit(c+373,"auto_in_wvalid", false,-1);
    tracep->declBus(c+109,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+374,"auto_in_wlast", false,-1);
    tracep->declBit(c+293,"auto_in_bready", false,-1);
    tracep->declBit(c+294,"auto_in_bvalid", false,-1);
    tracep->declBus(c+289,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+296,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+123,"auto_in_arready", false,-1);
    tracep->declBit(c+375,"auto_in_arvalid", false,-1);
    tracep->declBus(c+352,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+376,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+370,"auto_in_rready", false,-1);
    tracep->declBit(c+290,"auto_in_rvalid", false,-1);
    tracep->declBus(c+35,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+26,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+36,"auto_in_rlast", false,-1);
    tracep->declBit(c+305,"auto_out_awready", false,-1);
    tracep->declBit(c+437,"auto_out_awvalid", false,-1);
    tracep->declBus(c+350,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+106,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+107,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+292,"auto_out_wready", false,-1);
    tracep->declBit(c+373,"auto_out_wvalid", false,-1);
    tracep->declBus(c+109,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+374,"auto_out_wlast", false,-1);
    tracep->declBit(c+293,"auto_out_bready", false,-1);
    tracep->declBit(c+294,"auto_out_bvalid", false,-1);
    tracep->declBus(c+289,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+295,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+137,"auto_out_arready", false,-1);
    tracep->declBit(c+438,"auto_out_arvalid", false,-1);
    tracep->declBus(c+352,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+114,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+115,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+370,"auto_out_rready", false,-1);
    tracep->declBit(c+290,"auto_out_rvalid", false,-1);
    tracep->declBus(c+35,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+36,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+501,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+9,"io_deq_ready", false,-1);
    tracep->declBit(c+502,"io_deq_valid", false,-1);
    tracep->declBit(c+503,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+502,"full", false,-1);
    tracep->declBit(c+503,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+504,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+60,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+10,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBit(c+507,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+506,"full", false,-1);
    tracep->declBit(c+507,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+508,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+509,"io_enq_ready", false,-1);
    tracep->declBit(c+61,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+11,"io_deq_ready", false,-1);
    tracep->declBit(c+510,"io_deq_valid", false,-1);
    tracep->declBit(c+511,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+510,"full", false,-1);
    tracep->declBit(c+511,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+512,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+513,"io_enq_ready", false,-1);
    tracep->declBit(c+62,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+12,"io_deq_ready", false,-1);
    tracep->declBit(c+514,"io_deq_valid", false,-1);
    tracep->declBit(c+515,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+514,"full", false,-1);
    tracep->declBit(c+515,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+516,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+517,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+13,"io_deq_ready", false,-1);
    tracep->declBit(c+518,"io_deq_valid", false,-1);
    tracep->declBit(c+519,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+518,"full", false,-1);
    tracep->declBit(c+519,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+520,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+521,"io_enq_ready", false,-1);
    tracep->declBit(c+64,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+14,"io_deq_ready", false,-1);
    tracep->declBit(c+522,"io_deq_valid", false,-1);
    tracep->declBit(c+523,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+522,"full", false,-1);
    tracep->declBit(c+523,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+524,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+525,"io_enq_ready", false,-1);
    tracep->declBit(c+65,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+15,"io_deq_ready", false,-1);
    tracep->declBit(c+526,"io_deq_valid", false,-1);
    tracep->declBit(c+527,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+526,"full", false,-1);
    tracep->declBit(c+527,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+528,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+529,"io_enq_ready", false,-1);
    tracep->declBit(c+66,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+16,"io_deq_ready", false,-1);
    tracep->declBit(c+530,"io_deq_valid", false,-1);
    tracep->declBit(c+531,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+530,"full", false,-1);
    tracep->declBit(c+531,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+532,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+533,"io_enq_ready", false,-1);
    tracep->declBit(c+259,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+321,"io_deq_ready", false,-1);
    tracep->declBit(c+534,"io_deq_valid", false,-1);
    tracep->declBit(c+535,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+534,"full", false,-1);
    tracep->declBit(c+535,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+536,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+537,"io_enq_ready", false,-1);
    tracep->declBit(c+260,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+322,"io_deq_ready", false,-1);
    tracep->declBit(c+538,"io_deq_valid", false,-1);
    tracep->declBit(c+539,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+538,"full", false,-1);
    tracep->declBit(c+539,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+540,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+541,"io_enq_ready", false,-1);
    tracep->declBit(c+261,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+323,"io_deq_ready", false,-1);
    tracep->declBit(c+542,"io_deq_valid", false,-1);
    tracep->declBit(c+543,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+543,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+544,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+545,"io_enq_ready", false,-1);
    tracep->declBit(c+262,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+324,"io_deq_ready", false,-1);
    tracep->declBit(c+546,"io_deq_valid", false,-1);
    tracep->declBit(c+547,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+546,"full", false,-1);
    tracep->declBit(c+547,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+548,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+549,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+17,"io_deq_ready", false,-1);
    tracep->declBit(c+550,"io_deq_valid", false,-1);
    tracep->declBit(c+551,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+550,"full", false,-1);
    tracep->declBit(c+551,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+552,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+553,"io_enq_ready", false,-1);
    tracep->declBit(c+263,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+325,"io_deq_ready", false,-1);
    tracep->declBit(c+554,"io_deq_valid", false,-1);
    tracep->declBit(c+555,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+554,"full", false,-1);
    tracep->declBit(c+555,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+556,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+557,"io_enq_ready", false,-1);
    tracep->declBit(c+264,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+326,"io_deq_ready", false,-1);
    tracep->declBit(c+558,"io_deq_valid", false,-1);
    tracep->declBit(c+559,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+558,"full", false,-1);
    tracep->declBit(c+559,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+560,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+561,"io_enq_ready", false,-1);
    tracep->declBit(c+265,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+327,"io_deq_ready", false,-1);
    tracep->declBit(c+562,"io_deq_valid", false,-1);
    tracep->declBit(c+563,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+562,"full", false,-1);
    tracep->declBit(c+563,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+564,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+565,"io_enq_ready", false,-1);
    tracep->declBit(c+266,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+328,"io_deq_ready", false,-1);
    tracep->declBit(c+566,"io_deq_valid", false,-1);
    tracep->declBit(c+567,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+566,"full", false,-1);
    tracep->declBit(c+567,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+568,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+569,"io_enq_ready", false,-1);
    tracep->declBit(c+267,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+329,"io_deq_ready", false,-1);
    tracep->declBit(c+570,"io_deq_valid", false,-1);
    tracep->declBit(c+571,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+570,"full", false,-1);
    tracep->declBit(c+571,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+572,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+573,"io_enq_ready", false,-1);
    tracep->declBit(c+268,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+330,"io_deq_ready", false,-1);
    tracep->declBit(c+574,"io_deq_valid", false,-1);
    tracep->declBit(c+575,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+574,"full", false,-1);
    tracep->declBit(c+575,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+576,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+577,"io_enq_ready", false,-1);
    tracep->declBit(c+269,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+331,"io_deq_ready", false,-1);
    tracep->declBit(c+578,"io_deq_valid", false,-1);
    tracep->declBit(c+579,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+578,"full", false,-1);
    tracep->declBit(c+579,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+580,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+581,"io_enq_ready", false,-1);
    tracep->declBit(c+270,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+332,"io_deq_ready", false,-1);
    tracep->declBit(c+582,"io_deq_valid", false,-1);
    tracep->declBit(c+583,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+582,"full", false,-1);
    tracep->declBit(c+583,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+584,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+585,"io_enq_ready", false,-1);
    tracep->declBit(c+271,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+333,"io_deq_ready", false,-1);
    tracep->declBit(c+586,"io_deq_valid", false,-1);
    tracep->declBit(c+587,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+586,"full", false,-1);
    tracep->declBit(c+587,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+588,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+589,"io_enq_ready", false,-1);
    tracep->declBit(c+272,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+334,"io_deq_ready", false,-1);
    tracep->declBit(c+590,"io_deq_valid", false,-1);
    tracep->declBit(c+591,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+590,"full", false,-1);
    tracep->declBit(c+591,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+592,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+593,"io_enq_ready", false,-1);
    tracep->declBit(c+68,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+18,"io_deq_ready", false,-1);
    tracep->declBit(c+594,"io_deq_valid", false,-1);
    tracep->declBit(c+595,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+594,"full", false,-1);
    tracep->declBit(c+595,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+596,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+597,"io_enq_ready", false,-1);
    tracep->declBit(c+273,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+335,"io_deq_ready", false,-1);
    tracep->declBit(c+598,"io_deq_valid", false,-1);
    tracep->declBit(c+599,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+598,"full", false,-1);
    tracep->declBit(c+599,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+600,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+601,"io_enq_ready", false,-1);
    tracep->declBit(c+274,"io_enq_valid", false,-1);
    tracep->declBit(c+372,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+336,"io_deq_ready", false,-1);
    tracep->declBit(c+602,"io_deq_valid", false,-1);
    tracep->declBit(c+603,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+602,"full", false,-1);
    tracep->declBit(c+603,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+604,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+605,"io_enq_ready", false,-1);
    tracep->declBit(c+69,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+19,"io_deq_ready", false,-1);
    tracep->declBit(c+606,"io_deq_valid", false,-1);
    tracep->declBit(c+607,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+606,"full", false,-1);
    tracep->declBit(c+607,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+608,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+609,"io_enq_ready", false,-1);
    tracep->declBit(c+70,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+20,"io_deq_ready", false,-1);
    tracep->declBit(c+610,"io_deq_valid", false,-1);
    tracep->declBit(c+611,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+610,"full", false,-1);
    tracep->declBit(c+611,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+612,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+613,"io_enq_ready", false,-1);
    tracep->declBit(c+71,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+21,"io_deq_ready", false,-1);
    tracep->declBit(c+614,"io_deq_valid", false,-1);
    tracep->declBit(c+615,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+614,"full", false,-1);
    tracep->declBit(c+615,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+616,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+617,"io_enq_ready", false,-1);
    tracep->declBit(c+72,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+22,"io_deq_ready", false,-1);
    tracep->declBit(c+618,"io_deq_valid", false,-1);
    tracep->declBit(c+619,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+618,"full", false,-1);
    tracep->declBit(c+619,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+620,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+621,"io_enq_ready", false,-1);
    tracep->declBit(c+73,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+23,"io_deq_ready", false,-1);
    tracep->declBit(c+622,"io_deq_valid", false,-1);
    tracep->declBit(c+623,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+622,"full", false,-1);
    tracep->declBit(c+623,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+624,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+625,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+376,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+24,"io_deq_ready", false,-1);
    tracep->declBit(c+626,"io_deq_valid", false,-1);
    tracep->declBit(c+627,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+626,"full", false,-1);
    tracep->declBit(c+627,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+628,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1111,"reset", false,-1);
    tracep->declBit(c+362,"auto_master_out_awready", false,-1);
    tracep->declBit(c+363,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1136,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"auto_master_out_wready", false,-1);
    tracep->declBit(c+365,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+119,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+366,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+367,"auto_master_out_bready", false,-1);
    tracep->declBit(c+288,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+289,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+258,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+368,"auto_master_out_arready", false,-1);
    tracep->declBit(c+369,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1136,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1137,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+370,"auto_master_out_rready", false,-1);
    tracep->declBit(c+290,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+35,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1108,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+25,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1111,"reset", false,-1);
    tracep->declBit(c+1126,"io_interrupt", false,-1);
    tracep->declBit(c+362,"io_master_awready", false,-1);
    tracep->declBit(c+363,"io_master_awvalid", false,-1);
    tracep->declBus(c+117,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1136,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+364,"io_master_wready", false,-1);
    tracep->declBit(c+365,"io_master_wvalid", false,-1);
    tracep->declBus(c+119,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+366,"io_master_wlast", false,-1);
    tracep->declBit(c+367,"io_master_bready", false,-1);
    tracep->declBit(c+288,"io_master_bvalid", false,-1);
    tracep->declBus(c+258,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+289,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+368,"io_master_arready", false,-1);
    tracep->declBit(c+369,"io_master_arvalid", false,-1);
    tracep->declBus(c+121,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1136,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+370,"io_master_rready", false,-1);
    tracep->declBit(c+290,"io_master_rvalid", false,-1);
    tracep->declBus(c+1109,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1108,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+25,"io_master_rlast", false,-1);
    tracep->declBus(c+35,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1126,"io_slave_awready", false,-1);
    tracep->declBit(c+1126,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1140,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1136,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1141,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1126,"io_slave_wready", false,-1);
    tracep->declBit(c+1126,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1140,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1136,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"io_slave_wlast", false,-1);
    tracep->declBit(c+1126,"io_slave_bready", false,-1);
    tracep->declBit(c+1126,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1138,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1136,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1126,"io_slave_arready", false,-1);
    tracep->declBit(c+1126,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1140,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1136,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1141,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1126,"io_slave_rready", false,-1);
    tracep->declBit(c+1126,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1138,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1140,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1126,"io_slave_rlast", false,-1);
    tracep->declBus(c+1136,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+75,"dnpc", false,-1, 31,0);
    tracep->declBus(c+147,"rs1", false,-1, 4,0);
    tracep->declBus(c+148,"rs2", false,-1, 4,0);
    tracep->declBus(c+149,"rd", false,-1, 4,0);
    tracep->declBus(c+150,"func3", false,-1, 2,0);
    tracep->declBus(c+151,"func7", false,-1, 6,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->declBus(c+76,"wdata", false,-1, 31,0);
    tracep->declBus(c+1142,"rdata", false,-1, 31,0);
    tracep->declBus(c+629,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+153,"src1", false,-1, 31,0);
    tracep->declBus(c+154,"src2", false,-1, 31,0);
    tracep->declBus(c+155,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+630,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+156,"ALUB", false,-1, 31,0);
    tracep->declBus(c+157,"alu_result", false,-1, 31,0);
    tracep->declBus(c+158,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+159,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+160,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+77,"w_en", false,-1);
    tracep->declBit(c+161,"w_mem_en", false,-1);
    tracep->declBit(c+162,"r_mem_en", false,-1);
    tracep->declBit(c+163,"sign_extension", false,-1);
    tracep->declBit(c+164,"b_type_enter_if", false,-1);
    tracep->declBus(c+165,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+166,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+167,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+168,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+631,"a0", false,-1, 31,0);
    tracep->declBus(c+169,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+170,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+171,"w_csr_en", false,-1);
    tracep->declBit(c+172,"r_csr_en", false,-1);
    tracep->declBit(c+173,"w_csr_ecall", false,-1);
    tracep->declBus(c+174,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+175,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+632,"pc", false,-1, 31,0);
    tracep->declBus(c+176,"inst", false,-1, 31,0);
    tracep->declBit(c+633,"IFU_valid", false,-1);
    tracep->declBit(c+634,"LSU_valid", false,-1);
    tracep->declBit(c+635,"LSU_ready", false,-1);
    tracep->declBus(c+636,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+632,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+637,"M0_arvalid", false,-1);
    tracep->declBit(c+638,"M0_arready", false,-1);
    tracep->declBus(c+1136,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+177,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+337,"M0_rvalid", false,-1);
    tracep->declBit(c+633,"M0_rready", false,-1);
    tracep->declBit(c+28,"M0_rlast", false,-1);
    tracep->declBus(c+29,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1140,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1126,"M0_awvalid", false,-1);
    tracep->declBit(c+639,"M0_awready", false,-1);
    tracep->declBus(c+1136,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1140,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"M0_wvalid", false,-1);
    tracep->declBit(c+640,"M0_wready", false,-1);
    tracep->declBit(c+1126,"M0_wlast", false,-1);
    tracep->declBus(c+275,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+276,"M0_bvalid", false,-1);
    tracep->declBit(c+1139,"M0_bready", false,-1);
    tracep->declBus(c+277,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+78,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+641,"M1_arvalid", false,-1);
    tracep->declBit(c+642,"M1_arready", false,-1);
    tracep->declBus(c+1136,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+178,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+338,"M1_rvalid", false,-1);
    tracep->declBit(c+643,"M1_rready", false,-1);
    tracep->declBit(c+30,"M1_rlast", false,-1);
    tracep->declBus(c+31,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+80,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+644,"M1_awvalid", false,-1);
    tracep->declBit(c+645,"M1_awready", false,-1);
    tracep->declBus(c+1136,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+81,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+82,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+179,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+646,"M1_wvalid", false,-1);
    tracep->declBit(c+647,"M1_wready", false,-1);
    tracep->declBit(c+646,"M1_wlast", false,-1);
    tracep->declBus(c+278,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+339,"M1_bvalid", false,-1);
    tracep->declBit(c+648,"M1_bready", false,-1);
    tracep->declBus(c+279,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+180,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+649,"S0_arvalid", false,-1);
    tracep->declBit(c+650,"S0_arready", false,-1);
    tracep->declBus(c+1136,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+181,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+182,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1114,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+340,"S0_rvalid", false,-1);
    tracep->declBit(c+651,"S0_rready", false,-1);
    tracep->declBit(c+32,"S0_rlast", false,-1);
    tracep->declBus(c+33,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+183,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+652,"S0_awvalid", false,-1);
    tracep->declBit(c+653,"S0_awready", false,-1);
    tracep->declBus(c+1136,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+184,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+185,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+186,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+654,"S0_wvalid", false,-1);
    tracep->declBit(c+655,"S0_wready", false,-1);
    tracep->declBit(c+654,"S0_wlast", false,-1);
    tracep->declBus(c+280,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+341,"S0_bvalid", false,-1);
    tracep->declBit(c+656,"S0_bready", false,-1);
    tracep->declBus(c+281,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1145,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1146,"sram_arvalid", false,-1);
    tracep->declBit(c+1147,"sram_arready", false,-1);
    tracep->declBus(c+1148,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+1149,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+1150,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+1151,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+1152,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1153,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1154,"sram_rvalid", false,-1);
    tracep->declBit(c+1155,"sram_rready", false,-1);
    tracep->declBit(c+1156,"sram_rlast", false,-1);
    tracep->declBus(c+1157,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+1158,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1159,"sram_awvalid", false,-1);
    tracep->declBit(c+1160,"sram_awready", false,-1);
    tracep->declBus(c+1161,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+1162,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+1163,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+1164,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+1165,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1166,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1167,"sram_wvalid", false,-1);
    tracep->declBit(c+1168,"sram_wready", false,-1);
    tracep->declBit(c+1169,"sram_wlast", false,-1);
    tracep->declBus(c+1170,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1171,"sram_bvalid", false,-1);
    tracep->declBit(c+1172,"sram_bready", false,-1);
    tracep->declBus(c+1173,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+1174,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1175,"uart_arvalid", false,-1);
    tracep->declBit(c+1176,"uart_arready", false,-1);
    tracep->declBus(c+1177,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1178,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1179,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1180,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+1181,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1183,"uart_rvalid", false,-1);
    tracep->declBit(c+1184,"uart_rready", false,-1);
    tracep->declBit(c+1185,"uart_rlast", false,-1);
    tracep->declBus(c+1186,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1187,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1188,"uart_awvalid", false,-1);
    tracep->declBit(c+1189,"uart_awready", false,-1);
    tracep->declBus(c+1190,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1191,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1192,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1193,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1194,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1195,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"uart_wvalid", false,-1);
    tracep->declBit(c+1197,"uart_wready", false,-1);
    tracep->declBit(c+1198,"uart_wlast", false,-1);
    tracep->declBus(c+1199,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+1200,"uart_bvalid", false,-1);
    tracep->declBit(c+1201,"uart_bready", false,-1);
    tracep->declBus(c+1202,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+187,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"clint_arvalid", false,-1);
    tracep->declBit(c+658,"clint_arready", false,-1);
    tracep->declBus(c+1136,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+188,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+659,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1138,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+660,"clint_rvalid", false,-1);
    tracep->declBit(c+661,"clint_rready", false,-1);
    tracep->declBit(c+660,"clint_rlast", false,-1);
    tracep->declBus(c+1136,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+189,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+662,"clint_awvalid", false,-1);
    tracep->declBit(c+663,"clint_awready", false,-1);
    tracep->declBus(c+1136,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+190,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+191,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+192,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+664,"clint_wvalid", false,-1);
    tracep->declBit(c+665,"clint_wready", false,-1);
    tracep->declBit(c+666,"clint_wlast", false,-1);
    tracep->declBus(c+1138,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+667,"clint_bvalid", false,-1);
    tracep->declBit(c+668,"clint_bready", false,-1);
    tracep->declBus(c+1136,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+153,"A", false,-1, 31,0);
    tracep->declBus(c+156,"B", false,-1, 31,0);
    tracep->declBus(c+167,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+157,"ALUout", false,-1, 31,0);
    tracep->declBus(c+193,"B_in", false,-1, 31,0);
    tracep->declBus(c+194,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+195,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+196,"carry", false,-1);
    tracep->declBit(c+197,"overflow", false,-1);
    tracep->declBit(c+198,"uless", false,-1);
    tracep->declBit(c+199,"sless", false,-1);
    tracep->declBit(c+200,"a_is_b", false,-1);
    tracep->declBit(c+201,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+153,"x", false,-1, 31,0);
    tracep->declBus(c+193,"y", false,-1, 31,0);
    tracep->declBus(c+195,"s", false,-1, 31,0);
    tracep->declBit(c+196,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+160,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+154,"src2", false,-1, 31,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->declBus(c+175,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+156,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+169,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+170,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+171,"w_csr_en", false,-1);
    tracep->declBit(c+172,"r_csr_en", false,-1);
    tracep->declBit(c+173,"w_csr_ecall", false,-1);
    tracep->declBus(c+632,"pc", false,-1, 31,0);
    tracep->declBus(c+174,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+175,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+669,"mepc", false,-1, 31,0);
    tracep->declBus(c+670,"mstatus", false,-1, 31,0);
    tracep->declBus(c+671,"mcause", false,-1, 31,0);
    tracep->declBus(c+672,"mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+157,"alu_result", false,-1, 31,0);
    tracep->declBus(c+153,"src1", false,-1, 31,0);
    tracep->declBus(c+168,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+174,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+632,"pc", false,-1, 31,0);
    tracep->declBus(c+176,"inst", false,-1, 31,0);
    tracep->declBit(c+633,"IFU_valid", false,-1);
    tracep->declBit(c+635,"LSU_ready", false,-1);
    tracep->declBus(c+632,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+637,"M0_arvalid", false,-1);
    tracep->declBit(c+638,"M0_arready", false,-1);
    tracep->declBus(c+1136,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+177,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+337,"M0_rvalid", false,-1);
    tracep->declBit(c+633,"M0_rready", false,-1);
    tracep->declBit(c+28,"M0_rlast", false,-1);
    tracep->declBus(c+29,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1140,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1126,"M0_awvalid", false,-1);
    tracep->declBit(c+639,"M0_awready", false,-1);
    tracep->declBus(c+1136,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1140,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"M0_wvalid", false,-1);
    tracep->declBit(c+640,"M0_wready", false,-1);
    tracep->declBit(c+1126,"M0_wlast", false,-1);
    tracep->declBus(c+275,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+276,"M0_bvalid", false,-1);
    tracep->declBit(c+1139,"M0_bready", false,-1);
    tracep->declBus(c+277,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+638,"arready", false,-1);
    tracep->declBus(c+1112,"rresp", false,-1, 1,0);
    tracep->declBit(c+639,"awready", false,-1);
    tracep->declBit(c+640,"wready", false,-1);
    tracep->declBus(c+275,"bresp", false,-1, 1,0);
    tracep->declBit(c+276,"bvalid", false,-1);
    tracep->declBit(c+337,"rvalid", false,-1);
    tracep->declBit(c+633,"rready", false,-1);
    tracep->declBit(c+673,"rvalid_prev", false,-1);
    tracep->declBit(c+637,"arvalid", false,-1);
    tracep->declBus(c+674,"state", false,-1, 2,0);
    tracep->declBus(c+342,"next_state", false,-1, 2,0);
    tracep->declBit(c+1203,"start_read_delay", false,-1);
    tracep->declBus(c+675,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+676,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+677,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+678,"random_delay", false,-1, 7,0);
    tracep->declBus(c+1141,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1125,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1143,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBus(c+677,"in", false,-1, 7,0);
    tracep->declBus(c+678,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBit(c+633,"IFU_valid", false,-1);
    tracep->declBus(c+157,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+157,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+165,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+166,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+161,"w_mem_en", false,-1);
    tracep->declBit(c+162,"r_mem_en", false,-1);
    tracep->declBit(c+163,"sign_extension", false,-1);
    tracep->declBus(c+154,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+629,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+634,"LSU_valid", false,-1);
    tracep->declBit(c+635,"LSU_ready", false,-1);
    tracep->declBus(c+78,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+641,"M1_arvalid", false,-1);
    tracep->declBit(c+642,"M1_arready", false,-1);
    tracep->declBus(c+1136,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+178,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+338,"M1_rvalid", false,-1);
    tracep->declBit(c+643,"M1_rready", false,-1);
    tracep->declBit(c+30,"M1_rlast", false,-1);
    tracep->declBus(c+31,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+80,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+644,"M1_awvalid", false,-1);
    tracep->declBit(c+645,"M1_awready", false,-1);
    tracep->declBus(c+1136,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+81,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+82,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+179,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+646,"M1_wvalid", false,-1);
    tracep->declBit(c+647,"M1_wready", false,-1);
    tracep->declBit(c+646,"M1_wlast", false,-1);
    tracep->declBus(c+278,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+339,"M1_bvalid", false,-1);
    tracep->declBit(c+648,"M1_bready", false,-1);
    tracep->declBus(c+279,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1125,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1143,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1204,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1205,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1206,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+679,"state", false,-1, 2,0);
    tracep->declBus(c+343,"next_state", false,-1, 2,0);
    tracep->declBit(c+680,"start_read_delay", false,-1);
    tracep->declBit(c+681,"start_write_delay", false,-1);
    tracep->declBus(c+78,"araddr", false,-1, 31,0);
    tracep->declBit(c+641,"arvalid", false,-1);
    tracep->declBit(c+642,"arready", false,-1);
    tracep->declBit(c+643,"rready", false,-1);
    tracep->declBus(c+1113,"rresp", false,-1, 1,0);
    tracep->declBit(c+338,"rvalid", false,-1);
    tracep->declBit(c+644,"awvalid", false,-1);
    tracep->declBit(c+645,"awready", false,-1);
    tracep->declBus(c+80,"awaddr", false,-1, 31,0);
    tracep->declBit(c+646,"wvalid", false,-1);
    tracep->declBit(c+647,"wready", false,-1);
    tracep->declBus(c+82,"wdata", false,-1, 31,0);
    tracep->declBus(c+278,"bresp", false,-1, 1,0);
    tracep->declBus(c+179,"wstrb", false,-1, 3,0);
    tracep->declBit(c+648,"bready", false,-1);
    tracep->declBus(c+178,"rdata", false,-1, 31,0);
    tracep->declBit(c+339,"bvalid", false,-1);
    tracep->declBit(c+682,"LSU_working", false,-1);
    tracep->declBus(c+683,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+684,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+685,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+686,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+687,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+688,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+689,"random_delay", false,-1, 7,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBus(c+688,"in", false,-1, 7,0);
    tracep->declBus(c+689,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+632,"pc", false,-1, 31,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->declBus(c+157,"alu_result", false,-1, 31,0);
    tracep->declBus(c+175,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+158,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+164,"b_type_enter_if", false,-1);
    tracep->declBus(c+155,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+630,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+75,"dnpc", false,-1, 31,0);
    tracep->declBus(c+630,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+155,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBit(c+77,"w_en", false,-1);
    tracep->declBus(c+76,"wdata", false,-1, 31,0);
    tracep->declBus(c+149,"rd", false,-1, 4,0);
    tracep->declBus(c+147,"rs1", false,-1, 4,0);
    tracep->declBus(c+148,"rs2", false,-1, 4,0);
    tracep->declBus(c+153,"src1", false,-1, 31,0);
    tracep->declBus(c+154,"src2", false,-1, 31,0);
    tracep->declBus(c+631,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+690+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+722+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+155,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+630,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+157,"alu_result", false,-1, 31,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->declBus(c+629,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+175,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+159,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+634,"LSU_valid", false,-1);
    tracep->declBit(c+77,"w_en", false,-1);
    tracep->declBus(c+76,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+1207,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1208,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+632,"dout", false,-1, 31,0);
    tracep->declBit(c+634,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+632,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+637,"M0_arvalid", false,-1);
    tracep->declBit(c+638,"M0_arready", false,-1);
    tracep->declBus(c+1136,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+177,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1112,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+337,"M0_rvalid", false,-1);
    tracep->declBit(c+633,"M0_rready", false,-1);
    tracep->declBit(c+28,"M0_rlast", false,-1);
    tracep->declBus(c+29,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1140,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1126,"M0_awvalid", false,-1);
    tracep->declBit(c+639,"M0_awready", false,-1);
    tracep->declBus(c+1136,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1143,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1140,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1144,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1126,"M0_wvalid", false,-1);
    tracep->declBit(c+640,"M0_wready", false,-1);
    tracep->declBit(c+1126,"M0_wlast", false,-1);
    tracep->declBus(c+275,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+276,"M0_bvalid", false,-1);
    tracep->declBit(c+1139,"M0_bready", false,-1);
    tracep->declBus(c+277,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+78,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+641,"M1_arvalid", false,-1);
    tracep->declBit(c+642,"M1_arready", false,-1);
    tracep->declBus(c+1136,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+178,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1113,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+338,"M1_rvalid", false,-1);
    tracep->declBit(c+643,"M1_rready", false,-1);
    tracep->declBit(c+30,"M1_rlast", false,-1);
    tracep->declBus(c+31,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+80,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+644,"M1_awvalid", false,-1);
    tracep->declBit(c+645,"M1_awready", false,-1);
    tracep->declBus(c+1136,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+81,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+82,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+179,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+646,"M1_wvalid", false,-1);
    tracep->declBit(c+647,"M1_wready", false,-1);
    tracep->declBit(c+646,"M1_wlast", false,-1);
    tracep->declBus(c+278,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+339,"M1_bvalid", false,-1);
    tracep->declBit(c+648,"M1_bready", false,-1);
    tracep->declBus(c+279,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+180,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+649,"S0_arvalid", false,-1);
    tracep->declBit(c+650,"S0_arready", false,-1);
    tracep->declBus(c+1136,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+181,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+182,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1114,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+340,"S0_rvalid", false,-1);
    tracep->declBit(c+651,"S0_rready", false,-1);
    tracep->declBit(c+32,"S0_rlast", false,-1);
    tracep->declBus(c+33,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+183,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+652,"S0_awvalid", false,-1);
    tracep->declBit(c+653,"S0_awready", false,-1);
    tracep->declBus(c+1136,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+184,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+185,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+186,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+654,"S0_wvalid", false,-1);
    tracep->declBit(c+655,"S0_wready", false,-1);
    tracep->declBit(c+654,"S0_wlast", false,-1);
    tracep->declBus(c+280,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+341,"S0_bvalid", false,-1);
    tracep->declBit(c+656,"S0_bready", false,-1);
    tracep->declBus(c+281,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+1125,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+1143,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+754,"read_state", false,-1, 2,0);
    tracep->declBus(c+344,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+755,"write_state", false,-1, 2,0);
    tracep->declBus(c+345,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+756,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+757,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+346,"read_done", false,-1);
    tracep->declBit(c+347,"write_done", false,-1);
    tracep->declBus(c+1209,"read_choose", false,-1, 2,0);
    tracep->declBus(c+1210,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+187,"araddr", false,-1, 31,0);
    tracep->declBit(c+657,"arvalid", false,-1);
    tracep->declBit(c+658,"arready", false,-1);
    tracep->declBus(c+1136,"arid", false,-1, 3,0);
    tracep->declBus(c+1137,"arlen", false,-1, 7,0);
    tracep->declBus(c+188,"arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"arburst", false,-1, 1,0);
    tracep->declBus(c+659,"rdata", false,-1, 31,0);
    tracep->declBus(c+1138,"rresp", false,-1, 1,0);
    tracep->declBit(c+660,"rvalid", false,-1);
    tracep->declBit(c+661,"rready", false,-1);
    tracep->declBit(c+660,"rlast", false,-1);
    tracep->declBus(c+1136,"rid", false,-1, 3,0);
    tracep->declBus(c+189,"awaddr", false,-1, 31,0);
    tracep->declBit(c+662,"awvalid", false,-1);
    tracep->declBit(c+663,"awready", false,-1);
    tracep->declBus(c+1136,"awid", false,-1, 3,0);
    tracep->declBus(c+1137,"awlen", false,-1, 7,0);
    tracep->declBus(c+190,"awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"awburst", false,-1, 1,0);
    tracep->declBus(c+191,"wdata", false,-1, 31,0);
    tracep->declBus(c+192,"wstrb", false,-1, 3,0);
    tracep->declBit(c+664,"wvalid", false,-1);
    tracep->declBit(c+665,"wready", false,-1);
    tracep->declBit(c+666,"wlast", false,-1);
    tracep->declBus(c+1138,"bresp", false,-1, 1,0);
    tracep->declBit(c+667,"bvalid", false,-1);
    tracep->declBit(c+668,"bready", false,-1);
    tracep->declBus(c+1136,"bid", false,-1, 3,0);
    tracep->declBus(c+1141,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1125,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1143,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1204,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1205,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1206,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1138,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+758,"state", false,-1, 2,0);
    tracep->declBus(c+759,"next_state", false,-1, 2,0);
    tracep->declBus(c+760,"addr", false,-1, 31,0);
    tracep->declBus(c+761,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+762,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+763,"pmem_readed", false,-1);
    tracep->declBit(c+764,"pmem_writed", false,-1);
    tracep->declBus(c+765,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+766,"random_delay", false,-1, 7,0);
    tracep->declBus(c+659,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+660,"rvalid_reg", false,-1);
    tracep->declBit(c+665,"wready_reg", false,-1);
    tracep->declQuad(c+767,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBus(c+765,"in", false,-1, 7,0);
    tracep->declBus(c+766,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+176,"inst", false,-1, 31,0);
    tracep->declBit(c+633,"IFU_valid", false,-1);
    tracep->declBit(c+634,"LSU_valid", false,-1);
    tracep->declBus(c+149,"rd", false,-1, 4,0);
    tracep->declBus(c+147,"rs1", false,-1, 4,0);
    tracep->declBus(c+148,"rs2", false,-1, 4,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->declBus(c+150,"func3", false,-1, 2,0);
    tracep->declBus(c+151,"func7", false,-1, 6,0);
    tracep->declBus(c+158,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+159,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+160,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+161,"w_mem_en", false,-1);
    tracep->declBus(c+165,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+162,"r_mem_en", false,-1);
    tracep->declBit(c+163,"sign_extension", false,-1);
    tracep->declBus(c+167,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+166,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+169,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+171,"w_csr_en", false,-1);
    tracep->declBus(c+168,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+173,"w_csr_ecall", false,-1);
    tracep->declBus(c+170,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+172,"r_csr_en", false,-1);
    tracep->declBus(c+202,"opcode", false,-1, 6,0);
    tracep->declBus(c+203,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+176,"inst", false,-1, 31,0);
    tracep->declBus(c+203,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+152,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+202,"opcode", false,-1, 6,0);
    tracep->declBus(c+203,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1111,"rst", false,-1);
    tracep->declBus(c+180,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+649,"Xbar_arvalid", false,-1);
    tracep->declBit(c+650,"Xbar_arready", false,-1);
    tracep->declBus(c+1136,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+181,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+182,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1114,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+340,"Xbar_rvalid", false,-1);
    tracep->declBit(c+651,"Xbar_rready", false,-1);
    tracep->declBit(c+32,"Xbar_rlast", false,-1);
    tracep->declBus(c+33,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+183,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+652,"Xbar_awvalid", false,-1);
    tracep->declBit(c+653,"Xbar_awready", false,-1);
    tracep->declBus(c+1136,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+184,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+185,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+186,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+654,"Xbar_wvalid", false,-1);
    tracep->declBit(c+655,"Xbar_wready", false,-1);
    tracep->declBit(c+654,"Xbar_wlast", false,-1);
    tracep->declBus(c+280,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+341,"Xbar_bvalid", false,-1);
    tracep->declBit(c+656,"Xbar_bready", false,-1);
    tracep->declBus(c+281,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+121,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+369,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+368,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+1136,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1108,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1109,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+290,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+370,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+25,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+35,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+117,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+363,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+362,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+1136,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+119,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+365,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+364,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+366,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+258,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+288,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+367,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+289,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+204,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+769,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+1211,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+1136,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+205,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1212,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+1213,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+1214,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+770,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+1215,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+1216,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+206,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+771,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+1217,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+1136,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+207,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+208,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+209,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+772,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+1218,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+773,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+1219,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+1220,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+774,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+1221,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+187,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+658,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+1136,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+188,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+659,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+1138,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+660,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+661,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+660,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+1136,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+189,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+662,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+663,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+1136,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+190,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+191,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+192,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+664,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+665,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+666,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+1138,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+667,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+668,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+1136,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+1141,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+1125,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+1143,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+1204,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+775,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+1115,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+776,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+1116,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+182,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1114,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+340,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+653,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+655,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+280,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+341,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+650,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+32,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+33,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+281,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+121,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+369,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+370,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+117,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+363,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+119,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+120,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+365,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+367,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+1136,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+122,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1136,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+118,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+366,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+204,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+769,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+770,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+206,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+771,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+208,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+209,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+772,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+774,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+1136,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+205,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1136,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+207,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+773,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+187,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+661,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+189,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+662,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+191,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+192,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+664,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+668,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+1136,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+188,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+1136,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1137,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+190,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1138,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+666,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+282,"read_S0_done", false,-1);
    tracep->declBit(c+283,"write_S0_done", false,-1);
    tracep->declBit(c+777,"read_S1_done", false,-1);
    tracep->declBit(c+778,"write_S1_done", false,-1);
    tracep->declBit(c+779,"read_S2_done", false,-1);
    tracep->declBit(c+780,"write_S2_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"io_d", false,-1);
    tracep->declBit(c+781,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"io_d", false,-1);
    tracep->declBit(c+781,"io_q", false,-1);
    tracep->declBit(c+781,"sync_0", false,-1);
    tracep->declBit(c+782,"sync_1", false,-1);
    tracep->declBit(c+783,"sync_2", false,-1);
    tracep->declBit(c+784,"sync_3", false,-1);
    tracep->declBit(c+785,"sync_4", false,-1);
    tracep->declBit(c+786,"sync_5", false,-1);
    tracep->declBit(c+787,"sync_6", false,-1);
    tracep->declBit(c+788,"sync_7", false,-1);
    tracep->declBit(c+789,"sync_8", false,-1);
    tracep->declBit(c+790,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+94,"auto_in_psel", false,-1);
    tracep->declBit(c+52,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+93,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1133,"auto_in_pready", false,-1);
    tracep->declBit(c+1134,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1135,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1076,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1077,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1078,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+210,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+94,"in_psel", false,-1);
    tracep->declBit(c+52,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1133,"in_pready", false,-1);
    tracep->declBus(c+1135,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1134,"in_pslverr", false,-1);
    tracep->declBus(c+1076,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1077,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1078,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1079,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1080,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1081,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1082,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1083,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1084,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1085,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+92,"auto_in_psel", false,-1);
    tracep->declBit(c+51,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+93,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"auto_in_pready", false,-1);
    tracep->declBit(c+1131,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1132,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1086,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1087,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+210,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+92,"in_psel", false,-1);
    tracep->declBit(c+51,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1130,"in_pready", false,-1);
    tracep->declBus(c+1132,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1131,"in_pslverr", false,-1);
    tracep->declBit(c+1086,"ps2_clk", false,-1);
    tracep->declBit(c+1087,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+56,"auto_in_awvalid", false,-1);
    tracep->declBit(c+57,"auto_in_wvalid", false,-1);
    tracep->declBit(c+439,"auto_in_arready", false,-1);
    tracep->declBit(c+58,"auto_in_arvalid", false,-1);
    tracep->declBus(c+352,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+138,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+27,"auto_in_rready", false,-1);
    tracep->declBit(c+440,"auto_in_rvalid", false,-1);
    tracep->declBus(c+441,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+440,"state", false,-1);
    tracep->declBus(c+442,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+441,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+211,"raddr", false,-1, 31,0);
    tracep->declBit(c+212,"ren", false,-1);
    tracep->declBus(c+213,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+248,"auto_in_psel", false,-1);
    tracep->declBit(c+53,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+83,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"auto_in_pready", false,-1);
    tracep->declBit(c+1126,"auto_in_pslverr", false,-1);
    tracep->declBus(c+349,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1098,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1099,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+247,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+83,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+248,"in_psel", false,-1);
    tracep->declBit(c+53,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1102,"in_pready", false,-1);
    tracep->declBus(c+349,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"in_pslverr", false,-1);
    tracep->declBit(c+1098,"qspi_sck", false,-1);
    tracep->declBit(c+1099,"qspi_ce_n", false,-1);
    tracep->declBus(c+247,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+247,"din", false,-1, 3,0);
    tracep->declBus(c+249,"dout", false,-1, 3,0);
    tracep->declBus(c+250,"douten", false,-1, 3,0);
    tracep->declBit(c+1117,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1074,"clk_i", false,-1);
    tracep->declBit(c+1075,"rst_i", false,-1);
    tracep->declBus(c+83,"adr_i", false,-1, 31,0);
    tracep->declBus(c+86,"dat_i", false,-1, 31,0);
    tracep->declBus(c+349,"dat_o", false,-1, 31,0);
    tracep->declBus(c+87,"sel_i", false,-1, 3,0);
    tracep->declBit(c+248,"cyc_i", false,-1);
    tracep->declBit(c+248,"stb_i", false,-1);
    tracep->declBit(c+1117,"ack_o", false,-1);
    tracep->declBit(c+85,"we_i", false,-1);
    tracep->declBit(c+1098,"sck", false,-1);
    tracep->declBit(c+1099,"ce_n", false,-1);
    tracep->declBus(c+247,"din", false,-1, 3,0);
    tracep->declBus(c+249,"dout", false,-1, 3,0);
    tracep->declBus(c+250,"douten", false,-1, 3,0);
    tracep->declBus(c+1222,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1223,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+844,"mr_sck", false,-1);
    tracep->declBit(c+845,"mr_ce_n", false,-1);
    tracep->declBus(c+247,"mr_din", false,-1, 3,0);
    tracep->declBus(c+846,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+847,"mr_doe", false,-1);
    tracep->declBit(c+848,"mw_sck", false,-1);
    tracep->declBit(c+849,"mw_ce_n", false,-1);
    tracep->declBus(c+247,"mw_din", false,-1, 3,0);
    tracep->declBus(c+214,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+850,"mw_doe", false,-1);
    tracep->declBit(c+251,"mr_rd", false,-1);
    tracep->declBit(c+851,"mr_done", false,-1);
    tracep->declBit(c+252,"mw_wr", false,-1);
    tracep->declBit(c+215,"mw_done", false,-1);
    tracep->declBit(c+248,"wb_valid", false,-1);
    tracep->declBit(c+253,"wb_we", false,-1);
    tracep->declBit(c+254,"wb_re", false,-1);
    tracep->declBit(c+852,"state", false,-1);
    tracep->declBit(c+255,"nstate", false,-1);
    tracep->declBus(c+216,"size", false,-1, 2,0);
    tracep->declBus(c+217,"byte0", false,-1, 7,0);
    tracep->declBus(c+218,"byte1", false,-1, 7,0);
    tracep->declBus(c+219,"byte2", false,-1, 7,0);
    tracep->declBus(c+220,"byte3", false,-1, 7,0);
    tracep->declBus(c+221,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1118,"rst_n", false,-1);
    tracep->declBus(c+222,"addr", false,-1, 23,0);
    tracep->declBit(c+251,"rd", false,-1);
    tracep->declBus(c+1205,"size", false,-1, 2,0);
    tracep->declBit(c+851,"done", false,-1);
    tracep->declBus(c+349,"line", false,-1, 31,0);
    tracep->declBit(c+844,"sck", false,-1);
    tracep->declBit(c+845,"ce_n", false,-1);
    tracep->declBus(c+247,"din", false,-1, 3,0);
    tracep->declBus(c+846,"dout", false,-1, 3,0);
    tracep->declBit(c+847,"douten", false,-1);
    tracep->declBus(c+1222,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1223,"READ", false,-1, 0,0);
    tracep->declBus(c+1224,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+853,"state", false,-1);
    tracep->declBit(c+256,"nstate", false,-1);
    tracep->declBus(c+854,"counter", false,-1, 7,0);
    tracep->declBus(c+855,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+791+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1225,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+856,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1118,"rst_n", false,-1);
    tracep->declBus(c+223,"addr", false,-1, 23,0);
    tracep->declBus(c+221,"line", false,-1, 31,0);
    tracep->declBus(c+216,"size", false,-1, 2,0);
    tracep->declBit(c+252,"wr", false,-1);
    tracep->declBit(c+215,"done", false,-1);
    tracep->declBit(c+848,"sck", false,-1);
    tracep->declBit(c+849,"ce_n", false,-1);
    tracep->declBus(c+247,"din", false,-1, 3,0);
    tracep->declBus(c+214,"dout", false,-1, 3,0);
    tracep->declBit(c+850,"douten", false,-1);
    tracep->declBus(c+1222,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1223,"WRITE", false,-1, 0,0);
    tracep->declBus(c+224,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+857,"state", false,-1);
    tracep->declBit(c+257,"nstate", false,-1);
    tracep->declBus(c+858,"counter", false,-1, 7,0);
    tracep->declBus(c+859,"saddr", false,-1, 23,0);
    tracep->declBus(c+1226,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+89,"auto_in_psel", false,-1);
    tracep->declBit(c+49,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+83,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+840,"auto_in_pready", false,-1);
    tracep->declBit(c+1126,"auto_in_pslverr", false,-1);
    tracep->declBus(c+841,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1100,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+831,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+832,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+833,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+834,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+835,"sdram_bundle_we", false,-1);
    tracep->declBus(c+836,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+837,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+838,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+83,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+89,"in_psel", false,-1);
    tracep->declBit(c+49,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+840,"in_pready", false,-1);
    tracep->declBus(c+841,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"in_pslverr", false,-1);
    tracep->declBit(c+1100,"sdram_clk", false,-1);
    tracep->declBit(c+831,"sdram_cke", false,-1);
    tracep->declBit(c+832,"sdram_cs", false,-1);
    tracep->declBit(c+833,"sdram_ras", false,-1);
    tracep->declBit(c+834,"sdram_cas", false,-1);
    tracep->declBit(c+835,"sdram_we", false,-1);
    tracep->declBus(c+836,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+837,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+838,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+860,"sdram_dout_en", false,-1);
    tracep->declBus(c+861,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+795,"state", false,-1, 1,0);
    tracep->declBit(c+862,"req_accept", false,-1);
    tracep->declBit(c+225,"is_read", false,-1);
    tracep->declBit(c+226,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1074,"clk_i", false,-1);
    tracep->declBit(c+1075,"rst_i", false,-1);
    tracep->declBus(c+227,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+225,"inport_rd_i", false,-1);
    tracep->declBus(c+1137,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+83,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+86,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+839,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+862,"inport_accept_o", false,-1);
    tracep->declBit(c+840,"inport_ack_o", false,-1);
    tracep->declBit(c+1126,"inport_error_o", false,-1);
    tracep->declBus(c+841,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1100,"sdram_clk_o", false,-1);
    tracep->declBit(c+831,"sdram_cke_o", false,-1);
    tracep->declBit(c+832,"sdram_cs_o", false,-1);
    tracep->declBit(c+833,"sdram_ras_o", false,-1);
    tracep->declBit(c+834,"sdram_cas_o", false,-1);
    tracep->declBit(c+835,"sdram_we_o", false,-1);
    tracep->declBus(c+838,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+836,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+837,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+861,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+860,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1227,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1228,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1229,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1231,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1232,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1231,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1236,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1237,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1238,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1239,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1240,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1241,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1242,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1136,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1243,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1231,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1136,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1242,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1237,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1239,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1238,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1240,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1236,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1245,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1246,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1246,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1246,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1248,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+83,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+227,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+225,"ram_rd_w", false,-1);
    tracep->declBit(c+862,"ram_accept_w", false,-1);
    tracep->declBus(c+86,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+841,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+840,"ram_ack_w", false,-1);
    tracep->declBit(c+228,"ram_req_w", false,-1);
    tracep->declBus(c+863,"command_q", false,-1, 3,0);
    tracep->declBus(c+836,"addr_q", false,-1, 12,0);
    tracep->declBus(c+861,"data_q", false,-1, 15,0);
    tracep->declBit(c+864,"data_rd_en_q", false,-1);
    tracep->declBus(c+838,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+831,"cke_q", false,-1);
    tracep->declBus(c+837,"bank_q", false,-1, 1,0);
    tracep->declBus(c+865,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+866,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+839,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+867,"refresh_q", false,-1);
    tracep->declBus(c+868,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+869+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+873,"state_q", false,-1, 3,0);
    tracep->declBus(c+229,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+230,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+874,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+875,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+231,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+232,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+233,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1231,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+876,"delay_q", false,-1, 3,0);
    tracep->declBus(c+234,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1249,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+877,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+878,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+879,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+880,"idx", false,-1, 31,0);
    tracep->declBus(c+881,"rd_q", false,-1, 3,0);
    tracep->declBit(c+840,"ack_q", false,-1);
    tracep->declArray(c+882,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+95,"auto_in_psel", false,-1);
    tracep->declBit(c+96,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+91,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+842,"auto_in_pready", false,-1);
    tracep->declBit(c+1126,"auto_in_pslverr", false,-1);
    tracep->declBus(c+843,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+829,"spi_bundle_sck", false,-1);
    tracep->declBus(c+830,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1096,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1097,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1250,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1251,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1252,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+235,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+95,"in_psel", false,-1);
    tracep->declBit(c+96,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+842,"in_pready", false,-1);
    tracep->declBus(c+843,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1126,"in_pslverr", false,-1);
    tracep->declBit(c+829,"spi_sck", false,-1);
    tracep->declBus(c+830,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1096,"spi_mosi", false,-1);
    tracep->declBit(c+1097,"spi_miso", false,-1);
    tracep->declBit(c+885,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1253,"Tp", false,-1, 31,0);
    tracep->declBit(c+1074,"wb_clk_i", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBus(c+236,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+86,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+843,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+87,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+85,"wb_we_i", false,-1);
    tracep->declBit(c+95,"wb_stb_i", false,-1);
    tracep->declBit(c+96,"wb_cyc_i", false,-1);
    tracep->declBit(c+842,"wb_ack_o", false,-1);
    tracep->declBit(c+1126,"wb_err_o", false,-1);
    tracep->declBit(c+885,"wb_int_o", false,-1);
    tracep->declBus(c+830,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+829,"sclk_pad_o", false,-1);
    tracep->declBit(c+1096,"mosi_pad_o", false,-1);
    tracep->declBit(c+1097,"miso_pad_i", false,-1);
    tracep->declBus(c+886,"divider", false,-1, 15,0);
    tracep->declBus(c+887,"ctrl", false,-1, 13,0);
    tracep->declBus(c+888,"ss", false,-1, 7,0);
    tracep->declBus(c+237,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+889,"rx", false,-1, 127,0);
    tracep->declBit(c+893,"rx_negedge", false,-1);
    tracep->declBit(c+894,"tx_negedge", false,-1);
    tracep->declBus(c+895,"char_len", false,-1, 6,0);
    tracep->declBit(c+896,"go", false,-1);
    tracep->declBit(c+897,"lsb", false,-1);
    tracep->declBit(c+898,"ie", false,-1);
    tracep->declBit(c+899,"ass", false,-1);
    tracep->declBit(c+238,"spi_divider_sel", false,-1);
    tracep->declBit(c+239,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+240,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+241,"spi_ss_sel", false,-1);
    tracep->declBit(c+900,"tip", false,-1);
    tracep->declBit(c+901,"pos_edge", false,-1);
    tracep->declBit(c+902,"neg_edge", false,-1);
    tracep->declBit(c+903,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1253,"Tp", false,-1, 31,0);
    tracep->declBit(c+1074,"clk_in", false,-1);
    tracep->declBit(c+1075,"rst", false,-1);
    tracep->declBit(c+900,"enable", false,-1);
    tracep->declBit(c+896,"go", false,-1);
    tracep->declBit(c+903,"last_clk", false,-1);
    tracep->declBus(c+886,"divider", false,-1, 15,0);
    tracep->declBit(c+829,"clk_out", false,-1);
    tracep->declBit(c+901,"pos_edge", false,-1);
    tracep->declBit(c+902,"neg_edge", false,-1);
    tracep->declBus(c+904,"cnt", false,-1, 15,0);
    tracep->declBit(c+905,"cnt_zero", false,-1);
    tracep->declBit(c+906,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1253,"Tp", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"rst", false,-1);
    tracep->declBus(c+242,"latch", false,-1, 3,0);
    tracep->declBus(c+87,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+895,"len", false,-1, 6,0);
    tracep->declBit(c+897,"lsb", false,-1);
    tracep->declBit(c+896,"go", false,-1);
    tracep->declBit(c+901,"pos_edge", false,-1);
    tracep->declBit(c+902,"neg_edge", false,-1);
    tracep->declBit(c+893,"rx_negedge", false,-1);
    tracep->declBit(c+894,"tx_negedge", false,-1);
    tracep->declBit(c+900,"tip", false,-1);
    tracep->declBit(c+903,"last", false,-1);
    tracep->declBus(c+86,"p_in", false,-1, 31,0);
    tracep->declArray(c+889,"p_out", false,-1, 127,0);
    tracep->declBit(c+829,"s_clk", false,-1);
    tracep->declBit(c+1097,"s_in", false,-1);
    tracep->declBit(c+1096,"s_out", false,-1);
    tracep->declBus(c+907,"cnt", false,-1, 7,0);
    tracep->declArray(c+889,"data", false,-1, 127,0);
    tracep->declBus(c+908,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+909,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+910,"rx_clk", false,-1);
    tracep->declBit(c+911,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+1103,"auto_in_psel", false,-1);
    tracep->declBit(c+1104,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+93,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1105,"auto_in_pready", false,-1);
    tracep->declBit(c+1126,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1106,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1094,"uart_rx", false,-1);
    tracep->declBit(c+1095,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1103,"in_psel", false,-1);
    tracep->declBit(c+1104,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1105,"in_pready", false,-1);
    tracep->declBit(c+1126,"in_pslverr", false,-1);
    tracep->declBus(c+210,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+1106,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1094,"uart_rx", false,-1);
    tracep->declBit(c+1095,"uart_tx", false,-1);
    tracep->declBit(c+912,"rtsn", false,-1);
    tracep->declBit(c+1126,"ctsn", false,-1);
    tracep->declBit(c+913,"dtr_pad_o", false,-1);
    tracep->declBit(c+1126,"dsr_pad_i", false,-1);
    tracep->declBit(c+1126,"ri_pad_i", false,-1);
    tracep->declBit(c+1126,"dcd_pad_i", false,-1);
    tracep->declBit(c+914,"interrupt", false,-1);
    tracep->declBit(c+1,"reg_we", false,-1);
    tracep->declBit(c+2,"reg_re", false,-1);
    tracep->declBus(c+243,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+244,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+796,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+245,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+915,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBus(c+243,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+246,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+245,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1,"wb_we_i", false,-1);
    tracep->declBit(c+2,"wb_re_i", false,-1);
    tracep->declBit(c+1095,"stx_pad_o", false,-1);
    tracep->declBit(c+1094,"srx_pad_i", false,-1);
    tracep->declBus(c+1244,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+915,"rts_pad_o", false,-1);
    tracep->declBit(c+913,"dtr_pad_o", false,-1);
    tracep->declBit(c+914,"int_o", false,-1);
    tracep->declBit(c+916,"enable", false,-1);
    tracep->declBit(c+917,"srx_pad", false,-1);
    tracep->declBus(c+918,"ier", false,-1, 3,0);
    tracep->declBus(c+919,"iir", false,-1, 3,0);
    tracep->declBus(c+920,"fcr", false,-1, 1,0);
    tracep->declBus(c+921,"mcr", false,-1, 4,0);
    tracep->declBus(c+922,"lcr", false,-1, 7,0);
    tracep->declBus(c+923,"msr", false,-1, 7,0);
    tracep->declBus(c+924,"dl", false,-1, 15,0);
    tracep->declBus(c+925,"scratch", false,-1, 7,0);
    tracep->declBit(c+926,"start_dlc", false,-1);
    tracep->declBit(c+927,"lsr_mask_d", false,-1);
    tracep->declBit(c+928,"msi_reset", false,-1);
    tracep->declBus(c+929,"dlc", false,-1, 15,0);
    tracep->declBus(c+930,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+931,"rx_reset", false,-1);
    tracep->declBit(c+932,"tx_reset", false,-1);
    tracep->declBit(c+933,"dlab", false,-1);
    tracep->declBit(c+1139,"cts_pad_i", false,-1);
    tracep->declBit(c+1126,"dsr_pad_i", false,-1);
    tracep->declBit(c+1126,"ri_pad_i", false,-1);
    tracep->declBit(c+1126,"dcd_pad_i", false,-1);
    tracep->declBit(c+934,"loopback", false,-1);
    tracep->declBit(c+1126,"cts", false,-1);
    tracep->declBit(c+1139,"dsr", false,-1);
    tracep->declBit(c+1139,"ri", false,-1);
    tracep->declBit(c+1139,"dcd", false,-1);
    tracep->declBit(c+935,"cts_c", false,-1);
    tracep->declBit(c+936,"dsr_c", false,-1);
    tracep->declBit(c+937,"ri_c", false,-1);
    tracep->declBit(c+938,"dcd_c", false,-1);
    tracep->declBus(c+939,"lsr", false,-1, 7,0);
    tracep->declBit(c+940,"lsr0", false,-1);
    tracep->declBit(c+941,"lsr1", false,-1);
    tracep->declBit(c+942,"lsr2", false,-1);
    tracep->declBit(c+943,"lsr3", false,-1);
    tracep->declBit(c+944,"lsr4", false,-1);
    tracep->declBit(c+945,"lsr5", false,-1);
    tracep->declBit(c+946,"lsr6", false,-1);
    tracep->declBit(c+947,"lsr7", false,-1);
    tracep->declBit(c+948,"lsr0r", false,-1);
    tracep->declBit(c+949,"lsr1r", false,-1);
    tracep->declBit(c+950,"lsr2r", false,-1);
    tracep->declBit(c+951,"lsr3r", false,-1);
    tracep->declBit(c+952,"lsr4r", false,-1);
    tracep->declBit(c+953,"lsr5r", false,-1);
    tracep->declBit(c+954,"lsr6r", false,-1);
    tracep->declBit(c+955,"lsr7r", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+956,"rls_int", false,-1);
    tracep->declBit(c+957,"rda_int", false,-1);
    tracep->declBit(c+958,"ti_int", false,-1);
    tracep->declBit(c+959,"thre_int", false,-1);
    tracep->declBit(c+960,"ms_int", false,-1);
    tracep->declBit(c+961,"tf_push", false,-1);
    tracep->declBit(c+962,"rf_pop", false,-1);
    tracep->declBus(c+1119,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+963,"rf_error_bit", false,-1);
    tracep->declBit(c+941,"rf_overrun", false,-1);
    tracep->declBit(c+964,"rf_push_pulse", false,-1);
    tracep->declBus(c+965,"rf_count", false,-1, 4,0);
    tracep->declBus(c+966,"tf_count", false,-1, 4,0);
    tracep->declBus(c+967,"tstate", false,-1, 2,0);
    tracep->declBus(c+968,"rstate", false,-1, 3,0);
    tracep->declBus(c+969,"counter_t", false,-1, 9,0);
    tracep->declBit(c+970,"thre_set_en", false,-1);
    tracep->declBus(c+971,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+972,"block_value", false,-1, 7,0);
    tracep->declBit(c+973,"serial_out", false,-1);
    tracep->declBit(c+974,"serial_in", false,-1);
    tracep->declBit(c+4,"lsr_mask_condition", false,-1);
    tracep->declBit(c+5,"iir_read", false,-1);
    tracep->declBit(c+6,"msr_read", false,-1);
    tracep->declBit(c+7,"fifo_read", false,-1);
    tracep->declBit(c+8,"fifo_write", false,-1);
    tracep->declBus(c+975,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+976,"lsr0_d", false,-1);
    tracep->declBit(c+977,"lsr1_d", false,-1);
    tracep->declBit(c+978,"lsr2_d", false,-1);
    tracep->declBit(c+979,"lsr3_d", false,-1);
    tracep->declBit(c+980,"lsr4_d", false,-1);
    tracep->declBit(c+981,"lsr5_d", false,-1);
    tracep->declBit(c+982,"lsr6_d", false,-1);
    tracep->declBit(c+983,"lsr7_d", false,-1);
    tracep->declBit(c+984,"rls_int_d", false,-1);
    tracep->declBit(c+985,"thre_int_d", false,-1);
    tracep->declBit(c+986,"ms_int_d", false,-1);
    tracep->declBit(c+987,"ti_int_d", false,-1);
    tracep->declBit(c+988,"rda_int_d", false,-1);
    tracep->declBit(c+989,"rls_int_rise", false,-1);
    tracep->declBit(c+990,"thre_int_rise", false,-1);
    tracep->declBit(c+991,"ms_int_rise", false,-1);
    tracep->declBit(c+992,"ti_int_rise", false,-1);
    tracep->declBit(c+993,"rda_int_rise", false,-1);
    tracep->declBit(c+994,"rls_int_pnd", false,-1);
    tracep->declBit(c+995,"rda_int_pnd", false,-1);
    tracep->declBit(c+996,"thre_int_pnd", false,-1);
    tracep->declBit(c+997,"ms_int_pnd", false,-1);
    tracep->declBit(c+998,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1253,"Tp", false,-1, 31,0);
    tracep->declBus(c+1253,"width", false,-1, 31,0);
    tracep->declBus(c+1223,"init_value", false,-1, 0,0);
    tracep->declBit(c+1075,"rst_i", false,-1);
    tracep->declBit(c+1074,"clk_i", false,-1);
    tracep->declBit(c+1126,"stage1_rst_i", false,-1);
    tracep->declBit(c+1139,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1094,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+917,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+999,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBus(c+922,"lcr", false,-1, 7,0);
    tracep->declBit(c+962,"rf_pop", false,-1);
    tracep->declBit(c+974,"srx_pad_i", false,-1);
    tracep->declBit(c+916,"enable", false,-1);
    tracep->declBit(c+931,"rx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBus(c+969,"counter_t", false,-1, 9,0);
    tracep->declBus(c+965,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1119,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+941,"rf_overrun", false,-1);
    tracep->declBit(c+963,"rf_error_bit", false,-1);
    tracep->declBus(c+968,"rstate", false,-1, 3,0);
    tracep->declBit(c+964,"rf_push_pulse", false,-1);
    tracep->declBus(c+1000,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1001,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1002,"rshift", false,-1, 7,0);
    tracep->declBit(c+1003,"rparity", false,-1);
    tracep->declBit(c+1004,"rparity_error", false,-1);
    tracep->declBit(c+1005,"rframing_error", false,-1);
    tracep->declBit(c+1006,"rbit_in", false,-1);
    tracep->declBit(c+1007,"rparity_xor", false,-1);
    tracep->declBus(c+1008,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1009,"rf_push_q", false,-1);
    tracep->declBus(c+1010,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1011,"rf_push", false,-1);
    tracep->declBit(c+1012,"break_error", false,-1);
    tracep->declBit(c+1013,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1014,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1015,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1016,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1136,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1242,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1237,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1239,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1238,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1236,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1245,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1254,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1017,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1018,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1255,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1231,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1256,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBit(c+964,"push", false,-1);
    tracep->declBit(c+962,"pop", false,-1);
    tracep->declBus(c+1010,"data_in", false,-1, 10,0);
    tracep->declBit(c+931,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1119,"data_out", false,-1, 10,0);
    tracep->declBit(c+941,"overrun", false,-1);
    tracep->declBus(c+965,"count", false,-1, 4,0);
    tracep->declBit(c+963,"error_bit", false,-1);
    tracep->declBus(c+1120,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1019+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1035,"top", false,-1, 3,0);
    tracep->declBus(c+1036,"bottom", false,-1, 3,0);
    tracep->declBus(c+1037,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1038,"word0", false,-1, 2,0);
    tracep->declBus(c+1039,"word1", false,-1, 2,0);
    tracep->declBus(c+1040,"word2", false,-1, 2,0);
    tracep->declBus(c+1041,"word3", false,-1, 2,0);
    tracep->declBus(c+1042,"word4", false,-1, 2,0);
    tracep->declBus(c+1043,"word5", false,-1, 2,0);
    tracep->declBus(c+1044,"word6", false,-1, 2,0);
    tracep->declBus(c+1045,"word7", false,-1, 2,0);
    tracep->declBus(c+1046,"word8", false,-1, 2,0);
    tracep->declBus(c+1047,"word9", false,-1, 2,0);
    tracep->declBus(c+1048,"word10", false,-1, 2,0);
    tracep->declBus(c+1049,"word11", false,-1, 2,0);
    tracep->declBus(c+1050,"word12", false,-1, 2,0);
    tracep->declBus(c+1051,"word13", false,-1, 2,0);
    tracep->declBus(c+1052,"word14", false,-1, 2,0);
    tracep->declBus(c+1053,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1231,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1252,"data_width", false,-1, 31,0);
    tracep->declBus(c+1247,"depth", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+964,"we", false,-1);
    tracep->declBus(c+1035,"a", false,-1, 3,0);
    tracep->declBus(c+1036,"dpra", false,-1, 3,0);
    tracep->declBus(c+1054,"di", false,-1, 7,0);
    tracep->declBus(c+1120,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+797+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBus(c+922,"lcr", false,-1, 7,0);
    tracep->declBit(c+961,"tf_push", false,-1);
    tracep->declBus(c+246,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+916,"enable", false,-1);
    tracep->declBit(c+932,"tx_reset", false,-1);
    tracep->declBit(c+3,"lsr_mask", false,-1);
    tracep->declBit(c+973,"stx_pad_o", false,-1);
    tracep->declBus(c+967,"tstate", false,-1, 2,0);
    tracep->declBus(c+966,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1055,"counter", false,-1, 4,0);
    tracep->declBus(c+1056,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1057,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1058,"stx_o_tmp", false,-1);
    tracep->declBit(c+1059,"parity_xor", false,-1);
    tracep->declBit(c+1060,"tf_pop", false,-1);
    tracep->declBit(c+1061,"bit_out", false,-1);
    tracep->declBus(c+246,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1121,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1062,"tf_overrun", false,-1);
    tracep->declBus(c+1141,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1125,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1143,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1204,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1205,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1206,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1252,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1247,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1231,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1256,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+1075,"wb_rst_i", false,-1);
    tracep->declBit(c+961,"push", false,-1);
    tracep->declBit(c+1060,"pop", false,-1);
    tracep->declBus(c+246,"data_in", false,-1, 7,0);
    tracep->declBit(c+932,"fifo_reset", false,-1);
    tracep->declBit(c+3,"reset_status", false,-1);
    tracep->declBus(c+1121,"data_out", false,-1, 7,0);
    tracep->declBit(c+1062,"overrun", false,-1);
    tracep->declBus(c+966,"count", false,-1, 4,0);
    tracep->declBus(c+1063,"top", false,-1, 3,0);
    tracep->declBus(c+1064,"bottom", false,-1, 3,0);
    tracep->declBus(c+1065,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1231,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1252,"data_width", false,-1, 31,0);
    tracep->declBus(c+1247,"depth", false,-1, 31,0);
    tracep->declBit(c+1074,"clk", false,-1);
    tracep->declBit(c+961,"we", false,-1);
    tracep->declBus(c+1063,"a", false,-1, 3,0);
    tracep->declBus(c+1064,"dpra", false,-1, 3,0);
    tracep->declBus(c+246,"di", false,-1, 7,0);
    tracep->declBus(c+1121,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+813+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBit(c+90,"auto_in_psel", false,-1);
    tracep->declBit(c+50,"auto_in_penable", false,-1);
    tracep->declBit(c+85,"auto_in_pwrite", false,-1);
    tracep->declBus(c+91,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1125,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+86,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"auto_in_pready", false,-1);
    tracep->declBit(c+1128,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1129,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1088,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1089,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1091,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1092,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1093,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1074,"clock", false,-1);
    tracep->declBit(c+1075,"reset", false,-1);
    tracep->declBus(c+235,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+90,"in_psel", false,-1);
    tracep->declBit(c+50,"in_penable", false,-1);
    tracep->declBus(c+1125,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+85,"in_pwrite", false,-1);
    tracep->declBus(c+86,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+87,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1127,"in_pready", false,-1);
    tracep->declBus(c+1129,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1128,"in_pslverr", false,-1);
    tracep->declBus(c+1088,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1089,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1090,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1091,"vga_hsync", false,-1);
    tracep->declBit(c+1092,"vga_vsync", false,-1);
    tracep->declBit(c+1093,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+829,"sck", false,-1);
    tracep->declBit(c+1066,"ss", false,-1);
    tracep->declBit(c+1096,"mosi", false,-1);
    tracep->declBit(c+1139,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+829,"sck", false,-1);
    tracep->declBit(c+1067,"ss", false,-1);
    tracep->declBit(c+1096,"mosi", false,-1);
    tracep->declBit(c+1097,"miso", false,-1);
    tracep->declBit(c+1067,"reset", false,-1);
    tracep->declBus(c+1068,"state", false,-1, 2,0);
    tracep->declBus(c+1069,"counter", false,-1, 7,0);
    tracep->declBus(c+1070,"cmd", false,-1, 7,0);
    tracep->declBus(c+1071,"addr", false,-1, 23,0);
    tracep->declBus(c+1072,"data", false,-1, 31,0);
    tracep->declBit(c+1073,"ren", false,-1);
    tracep->declBus(c+1122,"rdata", false,-1, 31,0);
    tracep->declBus(c+1123,"raddr", false,-1, 31,0);
    tracep->declBus(c+1124,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+829,"clock", false,-1);
    tracep->declBit(c+1073,"valid", false,-1);
    tracep->declBus(c+1070,"cmd", false,-1, 7,0);
    tracep->declBus(c+1123,"addr", false,-1, 31,0);
    tracep->declBus(c+1122,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1098,"sck", false,-1);
    tracep->declBit(c+1099,"ce_n", false,-1);
    tracep->declBus(c+247,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1100,"clk", false,-1);
    tracep->declBit(c+831,"cke", false,-1);
    tracep->declBit(c+832,"cs", false,-1);
    tracep->declBit(c+833,"ras", false,-1);
    tracep->declBit(c+834,"cas", false,-1);
    tracep->declBit(c+835,"we", false,-1);
    tracep->declBus(c+836,"a", false,-1, 12,0);
    tracep->declBus(c+837,"ba", false,-1, 1,0);
    tracep->declBus(c+838,"dqm", false,-1, 1,0);
    tracep->declBus(c+839,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+10,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+11,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+12,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+13,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                    & ((((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+14,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+15,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                  & ((((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+16,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+17,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+18,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+19,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+20,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+21,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+22,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+23,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+24,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+25,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                               << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                             >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))));
    bufp->fullBit(oldp+26,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+28,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                          << 9U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))))));
    bufp->fullCData(oldp+29,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                                : 0U)))
                               : 0U)),4);
    bufp->fullBit(oldp+30,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                            & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                   >> 2U)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                               : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                                  & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                              << 0xdU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                                 << 0xcU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                    << 0xbU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                          << 9U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                      >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))))));
    bufp->fullCData(oldp+31,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                               ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                   ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? 0U
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                                : 0U)))
                               : 0U)),4);
    bufp->fullBit(oldp+32,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                >> 2U)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast))
                                            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                               & (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                                     << 0xfU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                                    << 0xaU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                       << 9U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                             << 7U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))))));
    bufp->fullCData(oldp+33,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                               ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                        ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                        : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                            : 0U)))),4);
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullSData(oldp+39,((0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullCData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 2U))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x1bU)) 
                                      | ((0xcU & (8U 
                                                  ^ 
                                                  (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                         | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x17U)) 
                                            | (1U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xcU)))))))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 1U))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+60,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 1U)))));
    bufp->fullBit(oldp+61,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xaU)))));
    bufp->fullBit(oldp+62,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xbU)))));
    bufp->fullBit(oldp+63,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                    & (((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                       >> 0xcU)))));
    bufp->fullBit(oldp+64,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xdU)))));
    bufp->fullBit(oldp+65,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                     >> 0xeU)))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                               >> 0xfU))));
    bufp->fullBit(oldp+67,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 2U)))));
    bufp->fullBit(oldp+68,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 3U)))));
    bufp->fullBit(oldp+69,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 4U)))));
    bufp->fullBit(oldp+70,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 5U)))));
    bufp->fullBit(oldp+71,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 6U)))));
    bufp->fullBit(oldp+72,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 7U)))));
    bufp->fullBit(oldp+73,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 8U)))));
    bufp->fullBit(oldp+74,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 9U)))));
    bufp->fullIData(oldp+75,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                               ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                               : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                   : (((0x63U == (0x7fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                       : ((IData)(4U) 
                                          + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc))))),32);
    bufp->fullIData(oldp+76,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                               ? 0U : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                        ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                ? 0U
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data
                                                : 0U))
                                        : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme
                                                : ((IData)(4U) 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)))))),32);
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl)))));
    bufp->fullIData(oldp+78,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result
                               : 0U)),32);
    bufp->fullCData(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid)
                               ? 2U : ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))) 
                                       | (2U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len)))))))),3);
    bufp->fullIData(oldp+80,(((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result
                               : 0U)),32);
    bufp->fullCData(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid)
                               ? 2U : ((1U & (- (IData)(
                                                        (2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))) 
                                       | (2U & (- (IData)(
                                                          (4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len)))))))),3);
    bufp->fullIData(oldp+82,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2
                               : 0U)),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+91,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+93,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullIData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullIData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullCData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullIData(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullIData(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullCData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullBit(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullIData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+131,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullIData(oldp+132,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+133,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+135,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+136,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullIData(oldp+138,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+143,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullCData(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+148,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+149,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+150,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+151,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_en));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_en));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sign_extension));
    bufp->fullBit(oldp+164,(((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)));
    bufp->fullCData(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len),8);
    bufp->fullCData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len),8);
    bufp->fullCData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data_ctrl),4);
    bufp->fullSData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_addr),12);
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_en));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_ecall));
    bufp->fullIData(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rdata),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rdata),32);
    bufp->fullCData(oldp+179,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                ? 0xfU : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                           ? 3U : 1U))),4);
    bufp->fullIData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr),32);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arsize),3);
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr),32);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awsize),3);
    bufp->fullIData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wdata),32);
    bufp->fullCData(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wstrb),4);
    bufp->fullIData(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullCData(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullCData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullIData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+194,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+197,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+198,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+200,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullBit(oldp+201,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullCData(oldp+202,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullIData(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullIData(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullIData(oldp+210,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullIData(oldp+211,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+219,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+220,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+221,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+222,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+223,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+224,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullSData(oldp+231,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+232,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+233,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+235,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+236,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullIData(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+240,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+243,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+247,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullCData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+258,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+260,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+261,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+262,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+263,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+264,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+265,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+266,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+267,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+268,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+269,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+270,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+271,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+272,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+273,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+274,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullCData(oldp+275,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : (3U & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                           << 1U))))
                                                    : 0U))))
                                : 0U)),2);
    bufp->fullBit(oldp+276,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+277,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+278,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : (3U & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 0U
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                         << 0x1eU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                            << 0x1cU) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                               << 0x1aU) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                        << 0x14U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                           << 0x12U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                           << 1U))))
                                                    : 0U))))
                                : 0U)),2);
    bufp->fullCData(oldp+279,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
                                ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? 0U
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                                 : 0U)))
                                : 0U)),4);
    bufp->fullCData(oldp+280,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : (3U & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 0U
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp))
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                                   | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                                        << 0x1eU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                                           << 0x1cU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                                 << 0x18U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                                       << 0x14U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                                          << 0x12U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                                          << 1U))))
                                                   : 0U))))),2);
    bufp->fullCData(oldp+281,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                             : 0U)))),4);
    bufp->fullBit(oldp+282,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+283,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+308,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+321,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+322,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+323,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+324,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+325,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+326,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+327,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+328,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+329,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+330,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+331,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+332,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+333,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+334,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+335,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+336,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rvalid));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_bvalid));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__next_state),3);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullBit(oldp+348,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+349,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+362,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+368,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+372,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+374,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+376,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+377,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+418,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
    bufp->fullQData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+424,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+427,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+428,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+439,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+443,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+444,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+490,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+501,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+509,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+513,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+517,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+521,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+525,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+529,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+533,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+537,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+541,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+545,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+549,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+553,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+557,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+561,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+569,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+573,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+577,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+581,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+585,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+589,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+593,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+597,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+601,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+609,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+613,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+617,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+621,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data),32);
    bufp->fullIData(oldp+630,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs
                              [0xaU]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready));
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid),32);
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+638,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullBit(oldp+639,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))))));
    bufp->fullBit(oldp+640,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+642,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready))));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+645,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_wready));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid));
    bufp->fullBit(oldp+653,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                       >> 2U)) & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready))
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full))))))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wvalid));
    bufp->fullBit(oldp+655,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                       >> 2U)) & ((2U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg)
                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready))
                                                   : 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
                                                   & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full))))))));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+658,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+663,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+667,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+682,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+777,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+778,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+779,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+780,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+832,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+833,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+834,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+835,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+839,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+841,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+846,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+847,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+850,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+851,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+856,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+860,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+862,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+893,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+894,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+895,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+896,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+897,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+898,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+899,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+903,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+905,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+906,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+908,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+912,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+913,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+915,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+933,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+934,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+935,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+936,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+937,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+938,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+939,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+942,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+943,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+944,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+963,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+970,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+989,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+990,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+991,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+992,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+993,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1012,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1013,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1014,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1015,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1016,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1018,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1037,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1054,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1065,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1066,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1073,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1074,(vlSelf->clock));
    bufp->fullBit(oldp+1075,(vlSelf->reset));
    bufp->fullSData(oldp+1076,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1077,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1078,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1079,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1080,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1081,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1082,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1083,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1084,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1085,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1086,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1087,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1088,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1089,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1090,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1091,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1092,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1093,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1094,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1095,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1096,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1097,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1098,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1099,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1100,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1102,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullIData(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1107,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+1108,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->__VdfgTmp_hf132a334__0 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->__VdfgTmp_hf132a334__0 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->__VdfgTmp_hf132a334__0 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? vlSelf->__VdfgTmp_hf132a334__0
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                               : 0U)))),32);
    bufp->fullCData(oldp+1109,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1112,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                 ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                       ? 0U
                                                       : 3U)
                                                      : 0U))
                                                  : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1113,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
                                 ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                     ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 0U
                                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                    : 0U) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                       ? 0U
                                                       : 3U)
                                                      : 0U))
                                                  : 0U)))
                                 : 0U)),2);
    bufp->fullCData(oldp+1114,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                      ? 0U
                                                      : 3U)
                                                     : 0U))
                                              : 0U)))),2);
    bufp->fullCData(oldp+1115,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))
                                                  ? 0U
                                                  : 3U)
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))
                                                  ? 0U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))
                                                  ? 0U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid)
                                                  ? 
                                                 (((0xa0000048U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                                                   | (0xa000004cU 
                                                      == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                                                   ? 3U
                                                   : 1U)
                                                  : 0U))))),3);
    bufp->fullCData(oldp+1116,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                 ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                          ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                              ? (((5U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))
                                                  ? 0U
                                                  : 3U)
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))
                                                  ? 0U
                                                  : 2U))
                                          : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))
                                                  ? 0U
                                                  : 1U)
                                              : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid)
                                                  ? 
                                                 ((0xa00003f8U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr)
                                                   ? 2U
                                                   : 1U)
                                                  : 0U))))),3);
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1118,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1119,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1123,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1125,(1U),3);
    bufp->fullBit(oldp+1126,(0U));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1136,(0U),4);
    bufp->fullCData(oldp+1137,(0U),8);
    bufp->fullCData(oldp+1138,(0U),2);
    bufp->fullBit(oldp+1139,(1U));
    bufp->fullIData(oldp+1140,(0U),32);
    bufp->fullCData(oldp+1141,(0U),3);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+1143,(2U),3);
    bufp->fullCData(oldp+1144,(0xfU),4);
    bufp->fullIData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+1204,(3U),3);
    bufp->fullCData(oldp+1205,(4U),3);
    bufp->fullCData(oldp+1206,(5U),3);
    bufp->fullIData(oldp+1207,(0x20U),32);
    bufp->fullIData(oldp+1208,(0x80000000U),32);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullBit(oldp+1222,(0U));
    bufp->fullBit(oldp+1223,(1U));
    bufp->fullCData(oldp+1224,(0x1bU),8);
    bufp->fullCData(oldp+1225,(0xebU),8);
    bufp->fullCData(oldp+1226,(0x38U),8);
    bufp->fullIData(oldp+1227,(0x64U),32);
    bufp->fullIData(oldp+1228,(0x18U),32);
    bufp->fullIData(oldp+1229,(9U),32);
    bufp->fullIData(oldp+1230,(2U),32);
    bufp->fullIData(oldp+1231,(4U),32);
    bufp->fullIData(oldp+1232,(0xdU),32);
    bufp->fullIData(oldp+1233,(0x2000U),32);
    bufp->fullIData(oldp+1234,(0x2710U),32);
    bufp->fullIData(oldp+1235,(0x30cU),32);
    bufp->fullCData(oldp+1236,(7U),4);
    bufp->fullCData(oldp+1237,(3U),4);
    bufp->fullCData(oldp+1238,(5U),4);
    bufp->fullCData(oldp+1239,(4U),4);
    bufp->fullCData(oldp+1240,(6U),4);
    bufp->fullCData(oldp+1241,(2U),4);
    bufp->fullCData(oldp+1242,(1U),4);
    bufp->fullSData(oldp+1243,(0x21U),13);
    bufp->fullCData(oldp+1244,(8U),4);
    bufp->fullCData(oldp+1245,(9U),4);
    bufp->fullIData(oldp+1246,(0xaU),32);
    bufp->fullIData(oldp+1247,(0x10U),32);
    bufp->fullIData(oldp+1248,(6U),32);
    bufp->fullIData(oldp+1249,(0x11U),32);
    bufp->fullIData(oldp+1250,(0x30000000U),32);
    bufp->fullIData(oldp+1251,(0x3fffffffU),32);
    bufp->fullIData(oldp+1252,(8U),32);
    bufp->fullIData(oldp+1253,(1U),32);
    bufp->fullCData(oldp+1254,(0xaU),4);
    bufp->fullIData(oldp+1255,(0xbU),32);
    bufp->fullIData(oldp+1256,(5U),32);
}
