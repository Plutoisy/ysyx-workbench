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
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+1215,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1216,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1217,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1218,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1219,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1220,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1221,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1222,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1223,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1224,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1225,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1226,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1227,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1228,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1229,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1230,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1231,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1232,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1233,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1234,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+1215,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1216,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1217,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1218,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1219,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1220,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1221,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1222,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1223,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1224,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1225,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1226,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1227,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1228,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1229,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1230,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1231,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1232,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1233,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1234,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+876,"spi_sck", false,-1);
    tracep->declBus(c+877,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+878,"spi_mosi", false,-1);
    tracep->declBit(c+1235,"spi_miso", false,-1);
    tracep->declBit(c+1233,"uart_rx", false,-1);
    tracep->declBit(c+1234,"uart_tx", false,-1);
    tracep->declBit(c+228,"psram_sck", false,-1);
    tracep->declBit(c+229,"psram_ce_n", false,-1);
    tracep->declBus(c+1236,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1237,"sdram_clk", false,-1);
    tracep->declBit(c+1187,"sdram_cke", false,-1);
    tracep->declBit(c+1188,"sdram_cs", false,-1);
    tracep->declBit(c+1189,"sdram_ras", false,-1);
    tracep->declBit(c+1190,"sdram_cas", false,-1);
    tracep->declBit(c+1191,"sdram_we", false,-1);
    tracep->declBus(c+230,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1192,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1193,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1215,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1216,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1217,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1218,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1219,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1220,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1221,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1222,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1223,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1224,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1225,"ps2_clk", false,-1);
    tracep->declBit(c+1226,"ps2_data", false,-1);
    tracep->declBus(c+1227,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1228,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1229,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1230,"vga_hsync", false,-1);
    tracep->declBit(c+1231,"vga_vsync", false,-1);
    tracep->declBit(c+1232,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"in_psel", false,-1);
    tracep->declBit(c+360,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+231,"in_pready", false,-1);
    tracep->declBus(c+232,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+191,"in_pslverr", false,-1);
    tracep->declBus(c+190,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"out_psel", false,-1);
    tracep->declBit(c+360,"out_penable", false,-1);
    tracep->declBus(c+1281,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"out_pwrite", false,-1);
    tracep->declBus(c+182,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+231,"out_pready", false,-1);
    tracep->declBus(c+232,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+191,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+20,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+360,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1281,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+231,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+191,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+232,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+116,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+117,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1281,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+879,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+880,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+118,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+119,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+192,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1281,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1284,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1285,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+120,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+121,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+193,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+194,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1286,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+361,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+122,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+123,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+193,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1287,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+362,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+196,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+124,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1281,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1238,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+363,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+197,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+198,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+193,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1239,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+200,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+201,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+192,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1281,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1240,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1282,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1241,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+202,"sel_0", false,-1);
    tracep->declBit(c+203,"sel_1", false,-1);
    tracep->declBit(c+204,"sel_2", false,-1);
    tracep->declBit(c+205,"sel_3", false,-1);
    tracep->declBit(c+206,"sel_4", false,-1);
    tracep->declBit(c+207,"sel_5", false,-1);
    tracep->declBit(c+208,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+24,"auto_in_awvalid", false,-1);
    tracep->declBus(c+364,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+27,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+233,"auto_in_bready", false,-1);
    tracep->declBit(c+234,"auto_in_bvalid", false,-1);
    tracep->declBus(c+365,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+31,"auto_in_arvalid", false,-1);
    tracep->declBus(c+366,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+235,"auto_in_rready", false,-1);
    tracep->declBit(c+236,"auto_in_rvalid", false,-1);
    tracep->declBus(c+367,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+209,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_out_psel", false,-1);
    tracep->declBit(c+360,"auto_out_penable", false,-1);
    tracep->declBit(c+21,"auto_out_pwrite", false,-1);
    tracep->declBus(c+190,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+231,"auto_out_pready", false,-1);
    tracep->declBit(c+191,"auto_out_pslverr", false,-1);
    tracep->declBus(c+232,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+360,"nodeOut_penable", false,-1);
    tracep->declBus(c+368,"state", false,-1, 1,0);
    tracep->declBit(c+30,"accept_read", false,-1);
    tracep->declBit(c+23,"accept_write", false,-1);
    tracep->declBit(c+369,"is_write_r", false,-1);
    tracep->declBit(c+21,"is_write", false,-1);
    tracep->declBus(c+367,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+365,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+370,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+371,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+372,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+373,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+210,"resp", false,-1, 1,0);
    tracep->declBus(c+374,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+209,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+236,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+375,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+234,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+376,"auto_in_awready", false,-1);
    tracep->declBit(c+377,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1288,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+378,"auto_in_wready", false,-1);
    tracep->declBit(c+379,"auto_in_wvalid", false,-1);
    tracep->declBus(c+36,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"auto_in_wlast", false,-1);
    tracep->declBit(c+381,"auto_in_bready", false,-1);
    tracep->declBit(c+237,"auto_in_bvalid", false,-1);
    tracep->declBus(c+238,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_in_arready", false,-1);
    tracep->declBit(c+383,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1288,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+384,"auto_in_rready", false,-1);
    tracep->declBit(c+239,"auto_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_rlast", false,-1);
    tracep->declBit(c+241,"auto_out_awready", false,-1);
    tracep->declBit(c+385,"auto_out_awvalid", false,-1);
    tracep->declBus(c+364,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+386,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+242,"auto_out_wready", false,-1);
    tracep->declBit(c+387,"auto_out_wvalid", false,-1);
    tracep->declBus(c+28,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+388,"auto_out_wlast", false,-1);
    tracep->declBit(c+243,"auto_out_bready", false,-1);
    tracep->declBit(c+244,"auto_out_bvalid", false,-1);
    tracep->declBus(c+238,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+245,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+246,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+247,"auto_out_arready", false,-1);
    tracep->declBit(c+389,"auto_out_arvalid", false,-1);
    tracep->declBus(c+366,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+390,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+384,"auto_out_rready", false,-1);
    tracep->declBit(c+239,"auto_out_rvalid", false,-1);
    tracep->declBus(c+240,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+248,"auto_out_rlast", false,-1);
    tracep->declBit(c+387,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+391,"w_idle", false,-1);
    tracep->declBit(c+249,"in_awready", false,-1);
    tracep->declBit(c+392,"busy", false,-1);
    tracep->declBus(c+393,"r_addr", false,-1, 31,0);
    tracep->declBus(c+394,"r_len", false,-1, 7,0);
    tracep->declBus(c+395,"len", false,-1, 7,0);
    tracep->declBus(c+40,"addr", false,-1, 31,0);
    tracep->declBit(c+396,"busy_1", false,-1);
    tracep->declBus(c+397,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+398,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+399,"len_1", false,-1, 7,0);
    tracep->declBus(c+41,"addr_1", false,-1, 31,0);
    tracep->declBit(c+400,"wbeats_latched", false,-1);
    tracep->declBit(c+385,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+401,"wbeats_valid", false,-1);
    tracep->declBus(c+402,"w_counter", false,-1, 8,0);
    tracep->declBus(c+403,"w_todo", false,-1, 8,0);
    tracep->declBit(c+388,"w_last", false,-1);
    tracep->declBit(c+243,"nodeOut_bready", false,-1);
    tracep->declBus(c+404,"error_0", false,-1, 1,0);
    tracep->declBus(c+405,"error_1", false,-1, 1,0);
    tracep->declBus(c+406,"error_2", false,-1, 1,0);
    tracep->declBus(c+407,"error_3", false,-1, 1,0);
    tracep->declBus(c+408,"error_4", false,-1, 1,0);
    tracep->declBus(c+409,"error_5", false,-1, 1,0);
    tracep->declBus(c+410,"error_6", false,-1, 1,0);
    tracep->declBus(c+411,"error_7", false,-1, 1,0);
    tracep->declBus(c+412,"error_8", false,-1, 1,0);
    tracep->declBus(c+413,"error_9", false,-1, 1,0);
    tracep->declBus(c+414,"error_10", false,-1, 1,0);
    tracep->declBus(c+415,"error_11", false,-1, 1,0);
    tracep->declBus(c+416,"error_12", false,-1, 1,0);
    tracep->declBus(c+417,"error_13", false,-1, 1,0);
    tracep->declBus(c+418,"error_14", false,-1, 1,0);
    tracep->declBus(c+419,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+382,"io_enq_ready", false,-1);
    tracep->declBit(c+383,"io_enq_valid", false,-1);
    tracep->declBus(c+1288,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1289,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1290,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+250,"io_deq_ready", false,-1);
    tracep->declBit(c+389,"io_deq_valid", false,-1);
    tracep->declBus(c+366,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+42,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+420,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+33,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+421,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+422,"ram", false,-1, 48,0);
    tracep->declBit(c+424,"full", false,-1);
    tracep->declBit(c+389,"io_deq_valid_0", false,-1);
    tracep->declBit(c+251,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+376,"io_enq_ready", false,-1);
    tracep->declBit(c+377,"io_enq_valid", false,-1);
    tracep->declBus(c+1288,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+34,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1289,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+35,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1290,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+252,"io_deq_ready", false,-1);
    tracep->declBit(c+425,"io_deq_valid", false,-1);
    tracep->declBus(c+364,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+43,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+426,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+26,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+427,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+428,"ram", false,-1, 48,0);
    tracep->declBit(c+430,"full", false,-1);
    tracep->declBit(c+425,"io_deq_valid_0", false,-1);
    tracep->declBit(c+253,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+378,"io_enq_ready", false,-1);
    tracep->declBit(c+379,"io_enq_valid", false,-1);
    tracep->declBus(c+36,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+37,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+380,"io_enq_bits_last", false,-1);
    tracep->declBit(c+254,"io_deq_ready", false,-1);
    tracep->declBit(c+431,"io_deq_valid", false,-1);
    tracep->declBus(c+28,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+29,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+432,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+433,"ram", false,-1, 36,0);
    tracep->declBit(c+435,"full", false,-1);
    tracep->declBit(c+431,"io_deq_valid_0", false,-1);
    tracep->declBit(c+255,"do_enq", false,-1);
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
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+256,"auto_in_awready", false,-1);
    tracep->declBit(c+44,"auto_in_awvalid", false,-1);
    tracep->declBus(c+364,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+130,"auto_in_wready", false,-1);
    tracep->declBit(c+46,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+257,"auto_in_bready", false,-1);
    tracep->declBit(c+436,"auto_in_bvalid", false,-1);
    tracep->declBus(c+437,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+366,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+259,"auto_in_rready", false,-1);
    tracep->declBit(c+439,"auto_in_rvalid", false,-1);
    tracep->declBus(c+440,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+441,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+442,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+258,"nodeIn_arready", false,-1);
    tracep->declBit(c+256,"nodeIn_awready", false,-1);
    tracep->declBit(c+49,"w_sel0", false,-1);
    tracep->declBit(c+436,"w_full", false,-1);
    tracep->declBus(c+437,"w_id", false,-1, 3,0);
    tracep->declBit(c+443,"r_sel1", false,-1);
    tracep->declBit(c+444,"w_sel1", false,-1);
    tracep->declBit(c+439,"r_full", false,-1);
    tracep->declBus(c+440,"r_id", false,-1, 3,0);
    tracep->declBit(c+260,"ren", false,-1);
    tracep->declBit(c+445,"rdata_REG", false,-1);
    tracep->declBus(c+446,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+447,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+448,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+449,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+50,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+260,"R0_en", false,-1);
    tracep->declBit(c+1213,"R0_clk", false,-1);
    tracep->declBus(c+450,"R0_data", false,-1, 31,0);
    tracep->declBus(c+51,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+261,"W0_en", false,-1);
    tracep->declBit(c+1213,"W0_clk", false,-1);
    tracep->declBus(c+28,"W0_data", false,-1, 31,0);
    tracep->declBus(c+29,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+376,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+377,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1288,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+378,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+379,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+381,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+237,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+238,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+383,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1288,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+384,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+239,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+376,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+377,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1288,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+378,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+379,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+381,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+237,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+238,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+383,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1288,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+384,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+239,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+240,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+262,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+451,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+242,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+387,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+388,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+243,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+244,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+238,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+245,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+452,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+366,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+384,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+239,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+248,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+256,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+130,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+46,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+257,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+436,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+437,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+438,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+258,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+366,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+259,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+439,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+440,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+441,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+442,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+53,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+453,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+366,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+131,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+454,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+455,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+456,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+23,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+24,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+364,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+27,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+233,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+234,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+365,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+209,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+31,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+366,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+235,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+236,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+367,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+209,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+244,"in_0_bvalid", false,-1);
    tracep->declBit(c+239,"in_0_rvalid", false,-1);
    tracep->declBit(c+264,"in_0_wready", false,-1);
    tracep->declBit(c+265,"in_0_awready", false,-1);
    tracep->declBit(c+263,"in_0_arready", false,-1);
    tracep->declBit(c+262,"anonIn_awready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+58,"requestARIO_0_2", false,-1);
    tracep->declBit(c+59,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+60,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+61,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+457,"arSel", false,-1, 15,0);
    tracep->declBus(c+458,"awSel", false,-1, 15,0);
    tracep->declBus(c+266,"rSel", false,-1, 15,0);
    tracep->declBus(c+267,"bSel", false,-1, 15,0);
    tracep->declBit(c+459,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+460,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+461,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+462,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+463,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+464,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+465,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+466,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+467,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+468,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+469,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+470,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+471,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+472,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+473,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+474,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+475,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+476,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+477,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+478,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+479,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+480,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+481,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+482,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+483,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+484,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+485,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+486,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+487,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+488,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+489,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+490,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+491,"latched", false,-1);
    tracep->declBit(c+492,"in_0_awvalid", false,-1);
    tracep->declBit(c+493,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+494,"in_0_wvalid", false,-1);
    tracep->declBit(c+495,"idle_3", false,-1);
    tracep->declBit(c+268,"anyValid", false,-1);
    tracep->declBus(c+269,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+496,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+270,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+271,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+272,"prefixOR_1", false,-1);
    tracep->declBit(c+273,"winner_3_1", false,-1);
    tracep->declBit(c+274,"winner_3_2", false,-1);
    tracep->declBit(c+497,"state_3_0", false,-1);
    tracep->declBit(c+498,"state_3_1", false,-1);
    tracep->declBit(c+499,"state_3_2", false,-1);
    tracep->declBit(c+275,"muxState_3_0", false,-1);
    tracep->declBit(c+276,"muxState_3_1", false,-1);
    tracep->declBit(c+277,"muxState_3_2", false,-1);
    tracep->declBit(c+500,"idle_4", false,-1);
    tracep->declBit(c+278,"anyValid_1", false,-1);
    tracep->declBus(c+279,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+501,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+280,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+281,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+282,"winner_4_0", false,-1);
    tracep->declBit(c+283,"winner_4_2", false,-1);
    tracep->declBit(c+502,"state_4_0", false,-1);
    tracep->declBit(c+503,"state_4_2", false,-1);
    tracep->declBit(c+284,"muxState_4_0", false,-1);
    tracep->declBit(c+285,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+504,"io_enq_ready", false,-1);
    tracep->declBit(c+493,"io_enq_valid", false,-1);
    tracep->declBus(c+62,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+286,"io_deq_ready", false,-1);
    tracep->declBit(c+505,"io_deq_valid", false,-1);
    tracep->declBus(c+63,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+506,"wrap", false,-1);
    tracep->declBit(c+507,"wrap_1", false,-1);
    tracep->declBit(c+508,"maybe_full", false,-1);
    tracep->declBit(c+509,"ptr_match", false,-1);
    tracep->declBit(c+510,"empty", false,-1);
    tracep->declBit(c+511,"full", false,-1);
    tracep->declBit(c+505,"io_deq_valid_0", false,-1);
    tracep->declBit(c+287,"do_deq", false,-1);
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+507,"R0_addr", false,-1);
    tracep->declBit(c+1291,"R0_en", false,-1);
    tracep->declBit(c+1213,"R0_clk", false,-1);
    tracep->declBus(c+512,"R0_data", false,-1, 2,0);
    tracep->declBit(c+506,"W0_addr", false,-1);
    tracep->declBit(c+288,"W0_en", false,-1);
    tracep->declBit(c+1213,"W0_clk", false,-1);
    tracep->declBus(c+62,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+513+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+241,"auto_in_awready", false,-1);
    tracep->declBit(c+385,"auto_in_awvalid", false,-1);
    tracep->declBus(c+364,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+386,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+242,"auto_in_wready", false,-1);
    tracep->declBit(c+387,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+388,"auto_in_wlast", false,-1);
    tracep->declBit(c+243,"auto_in_bready", false,-1);
    tracep->declBit(c+244,"auto_in_bvalid", false,-1);
    tracep->declBus(c+238,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+245,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+246,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+247,"auto_in_arready", false,-1);
    tracep->declBit(c+389,"auto_in_arvalid", false,-1);
    tracep->declBus(c+366,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+390,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+384,"auto_in_rready", false,-1);
    tracep->declBit(c+239,"auto_in_rvalid", false,-1);
    tracep->declBus(c+240,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+248,"auto_in_rlast", false,-1);
    tracep->declBit(c+262,"auto_out_awready", false,-1);
    tracep->declBit(c+451,"auto_out_awvalid", false,-1);
    tracep->declBus(c+364,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+242,"auto_out_wready", false,-1);
    tracep->declBit(c+387,"auto_out_wvalid", false,-1);
    tracep->declBus(c+28,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+388,"auto_out_wlast", false,-1);
    tracep->declBit(c+243,"auto_out_bready", false,-1);
    tracep->declBit(c+244,"auto_out_bvalid", false,-1);
    tracep->declBus(c+238,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+245,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+263,"auto_out_arready", false,-1);
    tracep->declBit(c+452,"auto_out_arvalid", false,-1);
    tracep->declBus(c+366,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+384,"auto_out_rready", false,-1);
    tracep->declBit(c+239,"auto_out_rvalid", false,-1);
    tracep->declBus(c+240,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+248,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+515,"io_enq_ready", false,-1);
    tracep->declBit(c+132,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+289,"io_deq_ready", false,-1);
    tracep->declBit(c+516,"io_deq_valid", false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+516,"full", false,-1);
    tracep->declBit(c+517,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+519,"io_enq_ready", false,-1);
    tracep->declBit(c+133,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+290,"io_deq_ready", false,-1);
    tracep->declBit(c+520,"io_deq_valid", false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+520,"full", false,-1);
    tracep->declBit(c+521,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+523,"io_enq_ready", false,-1);
    tracep->declBit(c+134,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+291,"io_deq_ready", false,-1);
    tracep->declBit(c+524,"io_deq_valid", false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+524,"full", false,-1);
    tracep->declBit(c+525,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+527,"io_enq_ready", false,-1);
    tracep->declBit(c+135,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+292,"io_deq_ready", false,-1);
    tracep->declBit(c+528,"io_deq_valid", false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+528,"full", false,-1);
    tracep->declBit(c+529,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+531,"io_enq_ready", false,-1);
    tracep->declBit(c+136,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+293,"io_deq_ready", false,-1);
    tracep->declBit(c+532,"io_deq_valid", false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+532,"full", false,-1);
    tracep->declBit(c+533,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+535,"io_enq_ready", false,-1);
    tracep->declBit(c+137,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+294,"io_deq_ready", false,-1);
    tracep->declBit(c+536,"io_deq_valid", false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+537,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+539,"io_enq_ready", false,-1);
    tracep->declBit(c+138,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+295,"io_deq_ready", false,-1);
    tracep->declBit(c+540,"io_deq_valid", false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+540,"full", false,-1);
    tracep->declBit(c+541,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+543,"io_enq_ready", false,-1);
    tracep->declBit(c+139,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+296,"io_deq_ready", false,-1);
    tracep->declBit(c+544,"io_deq_valid", false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+544,"full", false,-1);
    tracep->declBit(c+545,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+547,"io_enq_ready", false,-1);
    tracep->declBit(c+140,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+297,"io_deq_ready", false,-1);
    tracep->declBit(c+548,"io_deq_valid", false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+548,"full", false,-1);
    tracep->declBit(c+549,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+551,"io_enq_ready", false,-1);
    tracep->declBit(c+141,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+298,"io_deq_ready", false,-1);
    tracep->declBit(c+552,"io_deq_valid", false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+552,"full", false,-1);
    tracep->declBit(c+553,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+555,"io_enq_ready", false,-1);
    tracep->declBit(c+142,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+299,"io_deq_ready", false,-1);
    tracep->declBit(c+556,"io_deq_valid", false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+556,"full", false,-1);
    tracep->declBit(c+557,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+559,"io_enq_ready", false,-1);
    tracep->declBit(c+143,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+300,"io_deq_ready", false,-1);
    tracep->declBit(c+560,"io_deq_valid", false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+560,"full", false,-1);
    tracep->declBit(c+561,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+563,"io_enq_ready", false,-1);
    tracep->declBit(c+144,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+301,"io_deq_ready", false,-1);
    tracep->declBit(c+564,"io_deq_valid", false,-1);
    tracep->declBit(c+565,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+564,"full", false,-1);
    tracep->declBit(c+565,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+566,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+567,"io_enq_ready", false,-1);
    tracep->declBit(c+145,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+302,"io_deq_ready", false,-1);
    tracep->declBit(c+568,"io_deq_valid", false,-1);
    tracep->declBit(c+569,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+568,"full", false,-1);
    tracep->declBit(c+569,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+570,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+571,"io_enq_ready", false,-1);
    tracep->declBit(c+146,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+303,"io_deq_ready", false,-1);
    tracep->declBit(c+572,"io_deq_valid", false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+572,"full", false,-1);
    tracep->declBit(c+573,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+575,"io_enq_ready", false,-1);
    tracep->declBit(c+147,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+304,"io_deq_ready", false,-1);
    tracep->declBit(c+576,"io_deq_valid", false,-1);
    tracep->declBit(c+577,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+576,"full", false,-1);
    tracep->declBit(c+577,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+578,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+579,"io_enq_ready", false,-1);
    tracep->declBit(c+148,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+305,"io_deq_ready", false,-1);
    tracep->declBit(c+580,"io_deq_valid", false,-1);
    tracep->declBit(c+581,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+580,"full", false,-1);
    tracep->declBit(c+581,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+582,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+583,"io_enq_ready", false,-1);
    tracep->declBit(c+149,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+306,"io_deq_ready", false,-1);
    tracep->declBit(c+584,"io_deq_valid", false,-1);
    tracep->declBit(c+585,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+584,"full", false,-1);
    tracep->declBit(c+585,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+586,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+587,"io_enq_ready", false,-1);
    tracep->declBit(c+150,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+307,"io_deq_ready", false,-1);
    tracep->declBit(c+588,"io_deq_valid", false,-1);
    tracep->declBit(c+589,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+588,"full", false,-1);
    tracep->declBit(c+589,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+590,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+591,"io_enq_ready", false,-1);
    tracep->declBit(c+151,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+308,"io_deq_ready", false,-1);
    tracep->declBit(c+592,"io_deq_valid", false,-1);
    tracep->declBit(c+593,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+592,"full", false,-1);
    tracep->declBit(c+593,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+594,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+595,"io_enq_ready", false,-1);
    tracep->declBit(c+152,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+309,"io_deq_ready", false,-1);
    tracep->declBit(c+596,"io_deq_valid", false,-1);
    tracep->declBit(c+597,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+596,"full", false,-1);
    tracep->declBit(c+597,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+598,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+599,"io_enq_ready", false,-1);
    tracep->declBit(c+153,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+310,"io_deq_ready", false,-1);
    tracep->declBit(c+600,"io_deq_valid", false,-1);
    tracep->declBit(c+601,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+600,"full", false,-1);
    tracep->declBit(c+601,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+602,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+603,"io_enq_ready", false,-1);
    tracep->declBit(c+154,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+311,"io_deq_ready", false,-1);
    tracep->declBit(c+604,"io_deq_valid", false,-1);
    tracep->declBit(c+605,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+604,"full", false,-1);
    tracep->declBit(c+605,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+606,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+607,"io_enq_ready", false,-1);
    tracep->declBit(c+155,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+312,"io_deq_ready", false,-1);
    tracep->declBit(c+608,"io_deq_valid", false,-1);
    tracep->declBit(c+609,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+608,"full", false,-1);
    tracep->declBit(c+609,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+610,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+611,"io_enq_ready", false,-1);
    tracep->declBit(c+156,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+313,"io_deq_ready", false,-1);
    tracep->declBit(c+612,"io_deq_valid", false,-1);
    tracep->declBit(c+613,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+612,"full", false,-1);
    tracep->declBit(c+613,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+614,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+615,"io_enq_ready", false,-1);
    tracep->declBit(c+157,"io_enq_valid", false,-1);
    tracep->declBit(c+386,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+314,"io_deq_ready", false,-1);
    tracep->declBit(c+616,"io_deq_valid", false,-1);
    tracep->declBit(c+617,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+616,"full", false,-1);
    tracep->declBit(c+617,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+618,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+619,"io_enq_ready", false,-1);
    tracep->declBit(c+158,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+315,"io_deq_ready", false,-1);
    tracep->declBit(c+620,"io_deq_valid", false,-1);
    tracep->declBit(c+621,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+620,"full", false,-1);
    tracep->declBit(c+621,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+622,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+623,"io_enq_ready", false,-1);
    tracep->declBit(c+159,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+316,"io_deq_ready", false,-1);
    tracep->declBit(c+624,"io_deq_valid", false,-1);
    tracep->declBit(c+625,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+624,"full", false,-1);
    tracep->declBit(c+625,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+626,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+627,"io_enq_ready", false,-1);
    tracep->declBit(c+160,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+317,"io_deq_ready", false,-1);
    tracep->declBit(c+628,"io_deq_valid", false,-1);
    tracep->declBit(c+629,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+628,"full", false,-1);
    tracep->declBit(c+629,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+630,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+631,"io_enq_ready", false,-1);
    tracep->declBit(c+161,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+318,"io_deq_ready", false,-1);
    tracep->declBit(c+632,"io_deq_valid", false,-1);
    tracep->declBit(c+633,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+632,"full", false,-1);
    tracep->declBit(c+633,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+634,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+635,"io_enq_ready", false,-1);
    tracep->declBit(c+162,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+319,"io_deq_ready", false,-1);
    tracep->declBit(c+636,"io_deq_valid", false,-1);
    tracep->declBit(c+637,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+636,"full", false,-1);
    tracep->declBit(c+637,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+638,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+639,"io_enq_ready", false,-1);
    tracep->declBit(c+163,"io_enq_valid", false,-1);
    tracep->declBit(c+390,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+320,"io_deq_ready", false,-1);
    tracep->declBit(c+640,"io_deq_valid", false,-1);
    tracep->declBit(c+641,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+640,"full", false,-1);
    tracep->declBit(c+641,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+642,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+376,"auto_master_out_awready", false,-1);
    tracep->declBit(c+377,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1288,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+378,"auto_master_out_wready", false,-1);
    tracep->declBit(c+379,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+36,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+381,"auto_master_out_bready", false,-1);
    tracep->declBit(c+237,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+238,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+382,"auto_master_out_arready", false,-1);
    tracep->declBit(c+383,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1288,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1289,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+384,"auto_master_out_rready", false,-1);
    tracep->declBit(c+239,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+240,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1243,"reset", false,-1);
    tracep->declBit(c+1282,"io_interrupt", false,-1);
    tracep->declBit(c+376,"io_master_awready", false,-1);
    tracep->declBit(c+377,"io_master_awvalid", false,-1);
    tracep->declBus(c+34,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1288,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+378,"io_master_wready", false,-1);
    tracep->declBit(c+379,"io_master_wvalid", false,-1);
    tracep->declBus(c+36,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"io_master_wlast", false,-1);
    tracep->declBit(c+381,"io_master_bready", false,-1);
    tracep->declBit(c+237,"io_master_bvalid", false,-1);
    tracep->declBus(c+126,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+238,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+382,"io_master_arready", false,-1);
    tracep->declBit(c+383,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1288,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+384,"io_master_rready", false,-1);
    tracep->declBit(c+239,"io_master_rvalid", false,-1);
    tracep->declBus(c+1242,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+127,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+128,"io_master_rlast", false,-1);
    tracep->declBus(c+240,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1282,"io_slave_awready", false,-1);
    tracep->declBit(c+1282,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1292,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1288,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1293,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1282,"io_slave_wready", false,-1);
    tracep->declBit(c+1282,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1292,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1288,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1282,"io_slave_wlast", false,-1);
    tracep->declBit(c+1282,"io_slave_bready", false,-1);
    tracep->declBit(c+1282,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1290,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1288,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1282,"io_slave_arready", false,-1);
    tracep->declBit(c+1282,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1292,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1288,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1293,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1282,"io_slave_rready", false,-1);
    tracep->declBit(c+1282,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1290,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1292,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1282,"io_slave_rlast", false,-1);
    tracep->declBus(c+1288,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+64,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"func3", false,-1, 2,0);
    tracep->declBus(c+5,"func7", false,-1, 6,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->declBus(c+1294,"rdata", false,-1, 31,0);
    tracep->declBus(c+643,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+644,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+69,"ALUB", false,-1, 31,0);
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+7,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+8,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+9,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+71,"w_en", false,-1);
    tracep->declBit(c+72,"w_mem_en", false,-1);
    tracep->declBit(c+73,"r_mem_en", false,-1);
    tracep->declBit(c+10,"sign_extension", false,-1);
    tracep->declBit(c+74,"b_type_enter_if", false,-1);
    tracep->declBus(c+11,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+12,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+13,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+14,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+645,"a0", false,-1, 31,0);
    tracep->declBus(c+15,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+16,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+75,"w_csr_en", false,-1);
    tracep->declBit(c+76,"r_csr_en", false,-1);
    tracep->declBit(c+77,"w_csr_ecall", false,-1);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+646,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+647,"IFU_valid", false,-1);
    tracep->declBit(c+648,"LSU_valid", false,-1);
    tracep->declBit(c+649,"LSU_ready", false,-1);
    tracep->declBus(c+650,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+646,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+651,"M0_arvalid", false,-1);
    tracep->declBit(c+652,"M0_arready", false,-1);
    tracep->declBus(c+1288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+321,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+322,"M0_rvalid", false,-1);
    tracep->declBit(c+647,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1282,"M0_awvalid", false,-1);
    tracep->declBit(c+653,"M0_awready", false,-1);
    tracep->declBus(c+1288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1296,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1282,"M0_wvalid", false,-1);
    tracep->declBit(c+654,"M0_wready", false,-1);
    tracep->declBit(c+1282,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1291,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+655,"M1_arvalid", false,-1);
    tracep->declBit(c+656,"M1_arready", false,-1);
    tracep->declBus(c+1288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+323,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1245,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+324,"M1_rvalid", false,-1);
    tracep->declBit(c+657,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+658,"M1_awvalid", false,-1);
    tracep->declBit(c+659,"M1_awready", false,-1);
    tracep->declBus(c+1288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+660,"M1_wvalid", false,-1);
    tracep->declBit(c+661,"M1_wready", false,-1);
    tracep->declBit(c+660,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+662,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+83,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+663,"S0_arvalid", false,-1);
    tracep->declBit(c+664,"S0_arready", false,-1);
    tracep->declBus(c+1288,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+325,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+326,"S0_rvalid", false,-1);
    tracep->declBit(c+665,"S0_rready", false,-1);
    tracep->declBit(c+174,"S0_rlast", false,-1);
    tracep->declBus(c+175,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+85,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+666,"S0_awvalid", false,-1);
    tracep->declBit(c+667,"S0_awready", false,-1);
    tracep->declBus(c+1288,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+668,"S0_wvalid", false,-1);
    tracep->declBit(c+669,"S0_wready", false,-1);
    tracep->declBit(c+668,"S0_wlast", false,-1);
    tracep->declBus(c+176,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+327,"S0_bvalid", false,-1);
    tracep->declBit(c+670,"S0_bready", false,-1);
    tracep->declBus(c+177,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1297,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1298,"sram_arvalid", false,-1);
    tracep->declBit(c+1299,"sram_arready", false,-1);
    tracep->declBus(c+1300,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+1301,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+1302,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+1303,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+1304,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1305,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1306,"sram_rvalid", false,-1);
    tracep->declBit(c+1307,"sram_rready", false,-1);
    tracep->declBit(c+1308,"sram_rlast", false,-1);
    tracep->declBus(c+1309,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+1310,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1311,"sram_awvalid", false,-1);
    tracep->declBit(c+1312,"sram_awready", false,-1);
    tracep->declBus(c+1313,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+1314,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+1315,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+1316,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+1317,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1318,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1319,"sram_wvalid", false,-1);
    tracep->declBit(c+1320,"sram_wready", false,-1);
    tracep->declBit(c+1321,"sram_wlast", false,-1);
    tracep->declBus(c+1322,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1323,"sram_bvalid", false,-1);
    tracep->declBit(c+1324,"sram_bready", false,-1);
    tracep->declBus(c+1325,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+1326,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1327,"uart_arvalid", false,-1);
    tracep->declBit(c+1328,"uart_arready", false,-1);
    tracep->declBus(c+1329,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1330,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1331,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1332,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+1333,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1334,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1335,"uart_rvalid", false,-1);
    tracep->declBit(c+1336,"uart_rready", false,-1);
    tracep->declBit(c+1337,"uart_rlast", false,-1);
    tracep->declBus(c+1338,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1339,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1340,"uart_awvalid", false,-1);
    tracep->declBit(c+1341,"uart_awready", false,-1);
    tracep->declBus(c+1342,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1343,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1344,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1345,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1346,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1347,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1348,"uart_wvalid", false,-1);
    tracep->declBit(c+1349,"uart_wready", false,-1);
    tracep->declBit(c+1350,"uart_wlast", false,-1);
    tracep->declBus(c+1351,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+1352,"uart_bvalid", false,-1);
    tracep->declBit(c+1353,"uart_bready", false,-1);
    tracep->declBus(c+1354,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+89,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+671,"clint_arvalid", false,-1);
    tracep->declBit(c+672,"clint_arready", false,-1);
    tracep->declBus(c+1288,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+673,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1290,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+674,"clint_rvalid", false,-1);
    tracep->declBit(c+675,"clint_rready", false,-1);
    tracep->declBit(c+674,"clint_rlast", false,-1);
    tracep->declBus(c+1288,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+91,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+676,"clint_awvalid", false,-1);
    tracep->declBit(c+677,"clint_awready", false,-1);
    tracep->declBus(c+1288,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+93,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+678,"clint_wvalid", false,-1);
    tracep->declBit(c+679,"clint_wready", false,-1);
    tracep->declBit(c+680,"clint_wlast", false,-1);
    tracep->declBus(c+1290,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+681,"clint_bvalid", false,-1);
    tracep->declBit(c+682,"clint_bready", false,-1);
    tracep->declBus(c+1288,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("i_ALU ");
    tracep->declBus(c+66,"A", false,-1, 31,0);
    tracep->declBus(c+69,"B", false,-1, 31,0);
    tracep->declBus(c+13,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+70,"ALUout", false,-1, 31,0);
    tracep->declBus(c+95,"B_in", false,-1, 31,0);
    tracep->declBus(c+96,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+97,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+98,"carry", false,-1);
    tracep->declBit(c+99,"overflow", false,-1);
    tracep->declBit(c+100,"uless", false,-1);
    tracep->declBit(c+101,"sless", false,-1);
    tracep->declBit(c+102,"a_is_b", false,-1);
    tracep->declBit(c+103,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+66,"x", false,-1, 31,0);
    tracep->declBus(c+95,"y", false,-1, 31,0);
    tracep->declBus(c+97,"s", false,-1, 31,0);
    tracep->declBit(c+98,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_ALUCtrl ");
    tracep->declBus(c+9,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+69,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+15,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+16,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+75,"w_csr_en", false,-1);
    tracep->declBit(c+76,"r_csr_en", false,-1);
    tracep->declBit(c+77,"w_csr_ecall", false,-1);
    tracep->declBus(c+646,"pc", false,-1, 31,0);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+683,"mepc", false,-1, 31,0);
    tracep->declBus(c+684,"mstatus", false,-1, 31,0);
    tracep->declBus(c+685,"mcause", false,-1, 31,0);
    tracep->declBus(c+686,"mtvec", false,-1, 31,0);
    tracep->declBus(c+687,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+688,"marchid", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+14,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+646,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+647,"IFU_valid", false,-1);
    tracep->declBit(c+649,"LSU_ready", false,-1);
    tracep->declBus(c+646,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+651,"M0_arvalid", false,-1);
    tracep->declBit(c+652,"M0_arready", false,-1);
    tracep->declBus(c+1288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+321,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+322,"M0_rvalid", false,-1);
    tracep->declBit(c+647,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1282,"M0_awvalid", false,-1);
    tracep->declBit(c+653,"M0_awready", false,-1);
    tracep->declBus(c+1288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1296,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1282,"M0_wvalid", false,-1);
    tracep->declBit(c+654,"M0_wready", false,-1);
    tracep->declBit(c+1282,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1291,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+652,"arready", false,-1);
    tracep->declBus(c+1244,"rresp", false,-1, 1,0);
    tracep->declBit(c+653,"awready", false,-1);
    tracep->declBit(c+654,"wready", false,-1);
    tracep->declBus(c+166,"bresp", false,-1, 1,0);
    tracep->declBit(c+167,"bvalid", false,-1);
    tracep->declBit(c+322,"rvalid", false,-1);
    tracep->declBit(c+647,"rready", false,-1);
    tracep->declBit(c+689,"rvalid_prev", false,-1);
    tracep->declBit(c+651,"arvalid", false,-1);
    tracep->declBus(c+690,"state", false,-1, 2,0);
    tracep->declBus(c+328,"next_state", false,-1, 2,0);
    tracep->declBit(c+1355,"start_read_delay", false,-1);
    tracep->declBus(c+691,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+692,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+693,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+694,"random_delay", false,-1, 7,0);
    tracep->declBus(c+1293,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1281,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1295,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBus(c+693,"in", false,-1, 7,0);
    tracep->declBus(c+694,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBit(c+647,"IFU_valid", false,-1);
    tracep->declBus(c+70,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+70,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+11,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+12,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+72,"w_mem_en", false,-1);
    tracep->declBit(c+73,"r_mem_en", false,-1);
    tracep->declBit(c+10,"sign_extension", false,-1);
    tracep->declBus(c+67,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+643,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+648,"LSU_valid", false,-1);
    tracep->declBit(c+649,"LSU_ready", false,-1);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+655,"M1_arvalid", false,-1);
    tracep->declBit(c+656,"M1_arready", false,-1);
    tracep->declBus(c+1288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+323,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1245,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+324,"M1_rvalid", false,-1);
    tracep->declBit(c+657,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+658,"M1_awvalid", false,-1);
    tracep->declBit(c+659,"M1_awready", false,-1);
    tracep->declBus(c+1288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+660,"M1_wvalid", false,-1);
    tracep->declBit(c+661,"M1_wready", false,-1);
    tracep->declBit(c+660,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+662,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+1293,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1281,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1295,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1356,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1357,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1358,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1290,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+695,"state", false,-1, 2,0);
    tracep->declBus(c+329,"next_state", false,-1, 2,0);
    tracep->declBit(c+696,"start_read_delay", false,-1);
    tracep->declBit(c+697,"start_write_delay", false,-1);
    tracep->declBus(c+70,"araddr", false,-1, 31,0);
    tracep->declBit(c+655,"arvalid", false,-1);
    tracep->declBit(c+656,"arready", false,-1);
    tracep->declBit(c+657,"rready", false,-1);
    tracep->declBus(c+1245,"rresp", false,-1, 1,0);
    tracep->declBit(c+324,"rvalid", false,-1);
    tracep->declBit(c+658,"awvalid", false,-1);
    tracep->declBit(c+659,"awready", false,-1);
    tracep->declBus(c+70,"awaddr", false,-1, 31,0);
    tracep->declBit(c+660,"wvalid", false,-1);
    tracep->declBit(c+661,"wready", false,-1);
    tracep->declBus(c+81,"wdata", false,-1, 31,0);
    tracep->declBus(c+171,"bresp", false,-1, 1,0);
    tracep->declBus(c+82,"wstrb", false,-1, 3,0);
    tracep->declBit(c+662,"bready", false,-1);
    tracep->declBus(c+323,"rdata", false,-1, 31,0);
    tracep->declBit(c+172,"bvalid", false,-1);
    tracep->declBit(c+698,"LSU_working", false,-1);
    tracep->declBus(c+699,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+700,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+701,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+702,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+703,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+704,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+705,"random_delay", false,-1, 7,0);
    tracep->declBus(c+82,"reg_wstrb", false,-1, 3,0);
    tracep->declBus(c+81,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+104,"wdata_format", false,-1, 5,0);
    tracep->declBus(c+330,"rdata_mask", false,-1, 31,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBus(c+704,"in", false,-1, 7,0);
    tracep->declBus(c+705,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+646,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+7,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+74,"b_type_enter_if", false,-1);
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+644,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+64,"dnpc", false,-1, 31,0);
    tracep->declBus(c+644,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+68,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBit(c+71,"w_en", false,-1);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+645,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+706+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+738+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+644,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+643,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+8,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+648,"LSU_valid", false,-1);
    tracep->declBit(c+71,"w_en", false,-1);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+1359,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1360,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 31,0);
    tracep->declBus(c+646,"dout", false,-1, 31,0);
    tracep->declBit(c+648,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+646,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+651,"M0_arvalid", false,-1);
    tracep->declBit(c+652,"M0_arready", false,-1);
    tracep->declBus(c+1288,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+321,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+322,"M0_rvalid", false,-1);
    tracep->declBit(c+647,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1292,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1282,"M0_awvalid", false,-1);
    tracep->declBit(c+653,"M0_awready", false,-1);
    tracep->declBus(c+1288,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1295,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1292,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1296,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1282,"M0_wvalid", false,-1);
    tracep->declBit(c+654,"M0_wready", false,-1);
    tracep->declBit(c+1282,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1291,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+655,"M1_arvalid", false,-1);
    tracep->declBit(c+656,"M1_arready", false,-1);
    tracep->declBus(c+1288,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+323,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1245,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+324,"M1_rvalid", false,-1);
    tracep->declBit(c+657,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+658,"M1_awvalid", false,-1);
    tracep->declBit(c+659,"M1_awready", false,-1);
    tracep->declBus(c+1288,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+660,"M1_wvalid", false,-1);
    tracep->declBit(c+661,"M1_wready", false,-1);
    tracep->declBit(c+660,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+662,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+83,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+663,"S0_arvalid", false,-1);
    tracep->declBit(c+664,"S0_arready", false,-1);
    tracep->declBus(c+1288,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+325,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+326,"S0_rvalid", false,-1);
    tracep->declBit(c+665,"S0_rready", false,-1);
    tracep->declBit(c+174,"S0_rlast", false,-1);
    tracep->declBus(c+175,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+85,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+666,"S0_awvalid", false,-1);
    tracep->declBit(c+667,"S0_awready", false,-1);
    tracep->declBus(c+1288,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+668,"S0_wvalid", false,-1);
    tracep->declBit(c+669,"S0_wready", false,-1);
    tracep->declBit(c+668,"S0_wlast", false,-1);
    tracep->declBus(c+176,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+327,"S0_bvalid", false,-1);
    tracep->declBit(c+670,"S0_bready", false,-1);
    tracep->declBus(c+177,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1293,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+1281,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+1295,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+770,"read_state", false,-1, 2,0);
    tracep->declBus(c+331,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+771,"write_state", false,-1, 2,0);
    tracep->declBus(c+332,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+772,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+773,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+333,"read_done", false,-1);
    tracep->declBit(c+334,"write_done", false,-1);
    tracep->declBus(c+1361,"read_choose", false,-1, 2,0);
    tracep->declBus(c+1362,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+89,"araddr", false,-1, 31,0);
    tracep->declBit(c+671,"arvalid", false,-1);
    tracep->declBit(c+672,"arready", false,-1);
    tracep->declBus(c+1288,"arid", false,-1, 3,0);
    tracep->declBus(c+1289,"arlen", false,-1, 7,0);
    tracep->declBus(c+90,"arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"arburst", false,-1, 1,0);
    tracep->declBus(c+673,"rdata", false,-1, 31,0);
    tracep->declBus(c+1290,"rresp", false,-1, 1,0);
    tracep->declBit(c+674,"rvalid", false,-1);
    tracep->declBit(c+675,"rready", false,-1);
    tracep->declBit(c+674,"rlast", false,-1);
    tracep->declBus(c+1288,"rid", false,-1, 3,0);
    tracep->declBus(c+91,"awaddr", false,-1, 31,0);
    tracep->declBit(c+676,"awvalid", false,-1);
    tracep->declBit(c+677,"awready", false,-1);
    tracep->declBus(c+1288,"awid", false,-1, 3,0);
    tracep->declBus(c+1289,"awlen", false,-1, 7,0);
    tracep->declBus(c+92,"awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"awburst", false,-1, 1,0);
    tracep->declBus(c+93,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"wstrb", false,-1, 3,0);
    tracep->declBit(c+678,"wvalid", false,-1);
    tracep->declBit(c+679,"wready", false,-1);
    tracep->declBit(c+680,"wlast", false,-1);
    tracep->declBus(c+1290,"bresp", false,-1, 1,0);
    tracep->declBit(c+681,"bvalid", false,-1);
    tracep->declBit(c+682,"bready", false,-1);
    tracep->declBus(c+1288,"bid", false,-1, 3,0);
    tracep->declBus(c+1293,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1281,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1295,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1356,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1357,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1358,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1290,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+774,"state", false,-1, 2,0);
    tracep->declBus(c+775,"next_state", false,-1, 2,0);
    tracep->declBus(c+776,"addr", false,-1, 31,0);
    tracep->declBus(c+777,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+778,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+779,"pmem_readed", false,-1);
    tracep->declBit(c+780,"pmem_writed", false,-1);
    tracep->declBus(c+781,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+782,"random_delay", false,-1, 7,0);
    tracep->declBus(c+673,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+674,"rvalid_reg", false,-1);
    tracep->declBit(c+679,"wready_reg", false,-1);
    tracep->declQuad(c+783,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBus(c+781,"in", false,-1, 7,0);
    tracep->declBus(c+782,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+647,"IFU_valid", false,-1);
    tracep->declBit(c+648,"LSU_valid", false,-1);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+4,"func3", false,-1, 2,0);
    tracep->declBus(c+5,"func7", false,-1, 6,0);
    tracep->declBus(c+7,"pc_ctrl", false,-1, 1,0);
    tracep->declBus(c+8,"rd_ctrl", false,-1, 3,0);
    tracep->declBus(c+9,"ALUBctrl", false,-1, 1,0);
    tracep->declBit(c+72,"w_mem_en", false,-1);
    tracep->declBus(c+11,"w_mem_len", false,-1, 7,0);
    tracep->declBit(c+73,"r_mem_en", false,-1);
    tracep->declBit(c+10,"sign_extension", false,-1);
    tracep->declBus(c+13,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+12,"r_mem_len", false,-1, 7,0);
    tracep->declBus(c+15,"w_csr_addr", false,-1, 11,0);
    tracep->declBit(c+75,"w_csr_en", false,-1);
    tracep->declBus(c+14,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBit(c+77,"w_csr_ecall", false,-1);
    tracep->declBus(c+16,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+76,"r_csr_en", false,-1);
    tracep->declBus(c+18,"opcode", false,-1, 6,0);
    tracep->declBus(c+19,"opcode_type", false,-1, 2,0);
    tracep->pushNamePrefix("i_ImmeGen ");
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBus(c+19,"opcode_type", false,-1, 2,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_TypeFinder ");
    tracep->declBus(c+18,"opcode", false,-1, 6,0);
    tracep->declBus(c+19,"opcode_type", false,-1, 2,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_Xbar ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1243,"rst", false,-1);
    tracep->declBus(c+83,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+663,"Xbar_arvalid", false,-1);
    tracep->declBit(c+664,"Xbar_arready", false,-1);
    tracep->declBus(c+1288,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+325,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+326,"Xbar_rvalid", false,-1);
    tracep->declBit(c+665,"Xbar_rready", false,-1);
    tracep->declBit(c+174,"Xbar_rlast", false,-1);
    tracep->declBus(c+175,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+85,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+666,"Xbar_awvalid", false,-1);
    tracep->declBit(c+667,"Xbar_awready", false,-1);
    tracep->declBus(c+1288,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+668,"Xbar_wvalid", false,-1);
    tracep->declBit(c+669,"Xbar_wready", false,-1);
    tracep->declBit(c+668,"Xbar_wlast", false,-1);
    tracep->declBus(c+176,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+327,"Xbar_bvalid", false,-1);
    tracep->declBit(c+670,"Xbar_bready", false,-1);
    tracep->declBus(c+177,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+38,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+383,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+382,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+1288,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+127,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1242,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+239,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+384,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+128,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+240,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+34,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+377,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+376,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+1288,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+36,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+379,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+378,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+380,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+126,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+237,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+381,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+238,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+105,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+785,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+1363,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+1288,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+106,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1364,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+1365,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+1366,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+786,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+1367,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+1368,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+107,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+787,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+1369,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+1288,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+108,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+109,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+788,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+1370,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+789,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+1371,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+1372,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+790,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+1373,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+89,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+671,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+672,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+1288,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+673,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+1290,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+674,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+675,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+674,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+1288,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+91,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+676,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+677,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+1288,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+93,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+678,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+679,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+680,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+1290,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+681,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+682,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+1288,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+1293,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+1281,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+1295,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+1356,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+791,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+178,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+792,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+179,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+325,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1246,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+326,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+667,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+669,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+176,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+327,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+664,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+174,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+175,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+177,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+38,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+383,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+384,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+34,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+377,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+36,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+379,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+381,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+1288,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1288,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+380,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+105,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+785,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+786,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+107,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+787,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+109,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+788,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+790,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+1288,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+106,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1288,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+108,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+789,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+89,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+671,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+675,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+91,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+676,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+93,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+678,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+682,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+1288,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+1288,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1289,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1290,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+680,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+180,"read_S0_done", false,-1);
    tracep->declBit(c+181,"write_S0_done", false,-1);
    tracep->declBit(c+793,"read_S1_done", false,-1);
    tracep->declBit(c+794,"write_S1_done", false,-1);
    tracep->declBit(c+795,"read_S2_done", false,-1);
    tracep->declBit(c+796,"write_S2_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"io_d", false,-1);
    tracep->declBit(c+797,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"io_d", false,-1);
    tracep->declBit(c+797,"io_q", false,-1);
    tracep->declBit(c+797,"sync_0", false,-1);
    tracep->declBit(c+798,"sync_1", false,-1);
    tracep->declBit(c+799,"sync_2", false,-1);
    tracep->declBit(c+800,"sync_3", false,-1);
    tracep->declBit(c+801,"sync_4", false,-1);
    tracep->declBit(c+802,"sync_5", false,-1);
    tracep->declBit(c+803,"sync_6", false,-1);
    tracep->declBit(c+804,"sync_7", false,-1);
    tracep->declBit(c+805,"sync_8", false,-1);
    tracep->declBit(c+806,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+122,"auto_in_psel", false,-1);
    tracep->declBit(c+123,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+193,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_in_pready", false,-1);
    tracep->declBit(c+1287,"auto_in_pslverr", false,-1);
    tracep->declBus(c+362,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1215,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1216,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1217,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1218,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1219,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1220,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1221,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1222,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1223,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1224,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+122,"in_psel", false,-1);
    tracep->declBit(c+123,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"in_pready", false,-1);
    tracep->declBus(c+362,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1287,"in_pslverr", false,-1);
    tracep->declBus(c+1215,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1216,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1217,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1218,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1219,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1220,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1221,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1222,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1223,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1224,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+807,"reg_gpio_out", false,-1, 15,0);
    tracep->declBus(c+362,"reg_in_prdata", false,-1, 31,0);
    tracep->declBus(c+808,"reg_gpio_seg_hex_0", false,-1, 3,0);
    tracep->declBus(c+809,"reg_gpio_seg_hex_1", false,-1, 3,0);
    tracep->declBus(c+810,"reg_gpio_seg_hex_2", false,-1, 3,0);
    tracep->declBus(c+811,"reg_gpio_seg_hex_3", false,-1, 3,0);
    tracep->declBus(c+812,"reg_gpio_seg_hex_4", false,-1, 3,0);
    tracep->declBus(c+813,"reg_gpio_seg_hex_5", false,-1, 3,0);
    tracep->declBus(c+814,"reg_gpio_seg_hex_6", false,-1, 3,0);
    tracep->declBus(c+815,"reg_gpio_seg_hex_7", false,-1, 3,0);
    tracep->pushNamePrefix("u_bcd7seg0 ");
    tracep->declBus(c+808,"b", false,-1, 3,0);
    tracep->declBus(c+1217,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg1 ");
    tracep->declBus(c+809,"b", false,-1, 3,0);
    tracep->declBus(c+1218,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg2 ");
    tracep->declBus(c+810,"b", false,-1, 3,0);
    tracep->declBus(c+1219,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg3 ");
    tracep->declBus(c+811,"b", false,-1, 3,0);
    tracep->declBus(c+1220,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg4 ");
    tracep->declBus(c+812,"b", false,-1, 3,0);
    tracep->declBus(c+1221,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg5 ");
    tracep->declBus(c+813,"b", false,-1, 3,0);
    tracep->declBus(c+1222,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg6 ");
    tracep->declBus(c+814,"b", false,-1, 3,0);
    tracep->declBus(c+1223,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg7 ");
    tracep->declBus(c+815,"b", false,-1, 3,0);
    tracep->declBus(c+1224,"h", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+120,"auto_in_psel", false,-1);
    tracep->declBit(c+121,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+193,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+194,"auto_in_pready", false,-1);
    tracep->declBit(c+1286,"auto_in_pslverr", false,-1);
    tracep->declBus(c+361,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1225,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1226,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+120,"in_psel", false,-1);
    tracep->declBit(c+121,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+194,"in_pready", false,-1);
    tracep->declBus(c+361,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1286,"in_pslverr", false,-1);
    tracep->declBit(c+1225,"ps2_clk", false,-1);
    tracep->declBit(c+1226,"ps2_data", false,-1);
    tracep->declBus(c+816,"buffer_out", false,-1, 7,0);
    tracep->declBit(c+817,"ready", false,-1);
    tracep->declBus(c+361,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+818,"nextdata_n", false,-1);
    tracep->pushNamePrefix("u_ps2_keyboard ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"clrn", false,-1);
    tracep->declBit(c+1225,"ps2_clk", false,-1);
    tracep->declBit(c+1226,"ps2_data", false,-1);
    tracep->declBit(c+818,"nextdata_n", false,-1);
    tracep->declBus(c+816,"data", false,-1, 7,0);
    tracep->declBit(c+817,"ready", false,-1);
    tracep->declBit(c+819,"overflow", false,-1);
    tracep->declBus(c+820,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+821+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+829,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+830,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+831,"count", false,-1, 3,0);
    tracep->declBus(c+832,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+833,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+52,"auto_in_awvalid", false,-1);
    tracep->declBit(c+53,"auto_in_wvalid", false,-1);
    tracep->declBit(c+453,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+366,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+131,"auto_in_rready", false,-1);
    tracep->declBit(c+454,"auto_in_rvalid", false,-1);
    tracep->declBus(c+455,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+456,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+454,"state", false,-1);
    tracep->declBus(c+456,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+455,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+111,"raddr", false,-1, 31,0);
    tracep->declBit(c+112,"ren", false,-1);
    tracep->declBus(c+113,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+196,"auto_in_psel", false,-1);
    tracep->declBit(c+124,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1238,"auto_in_pready", false,-1);
    tracep->declBit(c+1282,"auto_in_pslverr", false,-1);
    tracep->declBus(c+363,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+228,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+229,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1236,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+196,"in_psel", false,-1);
    tracep->declBit(c+124,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1238,"in_pready", false,-1);
    tracep->declBus(c+363,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"in_pslverr", false,-1);
    tracep->declBit(c+228,"qspi_sck", false,-1);
    tracep->declBit(c+229,"qspi_ce_n", false,-1);
    tracep->declBus(c+1236,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1236,"din", false,-1, 3,0);
    tracep->declBus(c+335,"dout", false,-1, 3,0);
    tracep->declBus(c+336,"douten", false,-1, 3,0);
    tracep->declBit(c+1247,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1213,"clk_i", false,-1);
    tracep->declBit(c+1214,"rst_i", false,-1);
    tracep->declBus(c+190,"adr_i", false,-1, 31,0);
    tracep->declBus(c+182,"dat_i", false,-1, 31,0);
    tracep->declBus(c+363,"dat_o", false,-1, 31,0);
    tracep->declBus(c+22,"sel_i", false,-1, 3,0);
    tracep->declBit(c+196,"cyc_i", false,-1);
    tracep->declBit(c+196,"stb_i", false,-1);
    tracep->declBit(c+1247,"ack_o", false,-1);
    tracep->declBit(c+21,"we_i", false,-1);
    tracep->declBit(c+228,"sck", false,-1);
    tracep->declBit(c+229,"ce_n", false,-1);
    tracep->declBus(c+1236,"din", false,-1, 3,0);
    tracep->declBus(c+335,"dout", false,-1, 3,0);
    tracep->declBus(c+336,"douten", false,-1, 3,0);
    tracep->declBus(c+1290,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1374,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1375,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+881,"mr_sck", false,-1);
    tracep->declBit(c+882,"mr_ce_n", false,-1);
    tracep->declBus(c+1236,"mr_din", false,-1, 3,0);
    tracep->declBus(c+883,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+884,"mr_doe", false,-1);
    tracep->declBit(c+885,"mw_sck", false,-1);
    tracep->declBit(c+886,"mw_ce_n", false,-1);
    tracep->declBus(c+1236,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1248,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+887,"mw_doe", false,-1);
    tracep->declBit(c+888,"init_start", false,-1);
    tracep->declBit(c+889,"init_done", false,-1);
    tracep->declBit(c+890,"init_sck", false,-1);
    tracep->declBit(c+891,"init_ce_n", false,-1);
    tracep->declBus(c+892,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1291,"init_doe", false,-1);
    tracep->declBit(c+337,"mr_rd", false,-1);
    tracep->declBit(c+893,"mr_done", false,-1);
    tracep->declBit(c+338,"mw_wr", false,-1);
    tracep->declBit(c+1249,"mw_done", false,-1);
    tracep->declBit(c+196,"wb_valid", false,-1);
    tracep->declBit(c+212,"wb_we", false,-1);
    tracep->declBit(c+213,"wb_re", false,-1);
    tracep->declBus(c+894,"state", false,-1, 1,0);
    tracep->declBus(c+339,"nstate", false,-1, 1,0);
    tracep->declBus(c+114,"size", false,-1, 2,0);
    tracep->declBus(c+184,"byte0", false,-1, 7,0);
    tracep->declBus(c+185,"byte1", false,-1, 7,0);
    tracep->declBus(c+186,"byte2", false,-1, 7,0);
    tracep->declBus(c+187,"byte3", false,-1, 7,0);
    tracep->declBus(c+188,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1250,"rst_n", false,-1);
    tracep->declBit(c+888,"start", false,-1);
    tracep->declBit(c+889,"done", false,-1);
    tracep->declBit(c+890,"sck", false,-1);
    tracep->declBit(c+891,"ce_n", false,-1);
    tracep->declBus(c+892,"dout", false,-1, 3,0);
    tracep->declBit(c+1291,"douten", false,-1);
    tracep->declBus(c+1376,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+895,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1250,"rst_n", false,-1);
    tracep->declBus(c+214,"addr", false,-1, 23,0);
    tracep->declBit(c+337,"rd", false,-1);
    tracep->declBus(c+1357,"size", false,-1, 2,0);
    tracep->declBit(c+893,"done", false,-1);
    tracep->declBus(c+363,"line", false,-1, 31,0);
    tracep->declBit(c+881,"sck", false,-1);
    tracep->declBit(c+882,"ce_n", false,-1);
    tracep->declBus(c+1236,"din", false,-1, 3,0);
    tracep->declBus(c+883,"dout", false,-1, 3,0);
    tracep->declBit(c+884,"douten", false,-1);
    tracep->declBus(c+1377,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1378,"READ", false,-1, 0,0);
    tracep->declBus(c+1379,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+896,"state", false,-1);
    tracep->declBit(c+340,"nstate", false,-1);
    tracep->declBus(c+897,"counter", false,-1, 7,0);
    tracep->declBus(c+898,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+834+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1380,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+899,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1250,"rst_n", false,-1);
    tracep->declBus(c+215,"addr", false,-1, 23,0);
    tracep->declBus(c+188,"line", false,-1, 31,0);
    tracep->declBus(c+114,"size", false,-1, 2,0);
    tracep->declBit(c+338,"wr", false,-1);
    tracep->declBit(c+1249,"done", false,-1);
    tracep->declBit(c+885,"sck", false,-1);
    tracep->declBit(c+886,"ce_n", false,-1);
    tracep->declBus(c+1236,"din", false,-1, 3,0);
    tracep->declBus(c+1248,"dout", false,-1, 3,0);
    tracep->declBit(c+887,"douten", false,-1);
    tracep->declBus(c+1377,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1378,"WRITE", false,-1, 0,0);
    tracep->declBus(c+115,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+900,"state", false,-1);
    tracep->declBit(c+341,"nstate", false,-1);
    tracep->declBus(c+901,"counter", false,-1, 7,0);
    tracep->declBus(c+902,"saddr", false,-1, 23,0);
    tracep->declBus(c+1381,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+116,"auto_in_psel", false,-1);
    tracep->declBit(c+117,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+879,"auto_in_pready", false,-1);
    tracep->declBit(c+1282,"auto_in_pslverr", false,-1);
    tracep->declBus(c+880,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1237,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1187,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1188,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1189,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1190,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1191,"sdram_bundle_we", false,-1);
    tracep->declBus(c+230,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1192,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1193,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+116,"in_psel", false,-1);
    tracep->declBit(c+117,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+879,"in_pready", false,-1);
    tracep->declBus(c+880,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"in_pslverr", false,-1);
    tracep->declBit(c+1237,"sdram_clk", false,-1);
    tracep->declBit(c+1187,"sdram_cke", false,-1);
    tracep->declBit(c+1188,"sdram_cs", false,-1);
    tracep->declBit(c+1189,"sdram_ras", false,-1);
    tracep->declBit(c+1190,"sdram_cas", false,-1);
    tracep->declBit(c+1191,"sdram_we", false,-1);
    tracep->declBus(c+230,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1192,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1193,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+903,"sdram_dout_en", false,-1);
    tracep->declBus(c+904,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+838,"state", false,-1, 1,0);
    tracep->declBit(c+1194,"req_accept", false,-1);
    tracep->declBit(c+216,"is_read", false,-1);
    tracep->declBit(c+217,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1213,"clk_i", false,-1);
    tracep->declBit(c+1214,"rst_i", false,-1);
    tracep->declBus(c+218,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+216,"inport_rd_i", false,-1);
    tracep->declBus(c+1289,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+190,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+182,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1205,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1194,"inport_accept_o", false,-1);
    tracep->declBit(c+879,"inport_ack_o", false,-1);
    tracep->declBit(c+1282,"inport_error_o", false,-1);
    tracep->declBus(c+880,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1237,"sdram_clk_o", false,-1);
    tracep->declBit(c+1187,"sdram_cke_o", false,-1);
    tracep->declBit(c+1188,"sdram_cs_o", false,-1);
    tracep->declBit(c+1189,"sdram_ras_o", false,-1);
    tracep->declBit(c+1190,"sdram_cas_o", false,-1);
    tracep->declBit(c+1191,"sdram_we_o", false,-1);
    tracep->declBus(c+1193,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+230,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1192,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+904,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+903,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1382,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1383,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1384,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1385,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1385,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1386,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1387,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1388,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1389,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1390,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1391,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1386,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1392,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1393,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1394,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1395,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1396,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1397,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1398,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1288,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1399,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1386,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1288,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1398,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1397,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1393,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1395,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1394,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1396,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1392,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1400,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1401,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1402,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1402,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1402,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1385,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1385,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1403,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+190,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+218,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+216,"ram_rd_w", false,-1);
    tracep->declBit(c+1194,"ram_accept_w", false,-1);
    tracep->declBus(c+182,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+880,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+879,"ram_ack_w", false,-1);
    tracep->declBit(c+219,"ram_req_w", false,-1);
    tracep->declBus(c+1195,"command_q", false,-1, 3,0);
    tracep->declBus(c+1196,"addr_q", false,-1, 12,0);
    tracep->declBus(c+904,"data_q", false,-1, 31,0);
    tracep->declBit(c+905,"data_rd_en_q", false,-1);
    tracep->declBus(c+1193,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1187,"cke_q", false,-1);
    tracep->declBus(c+1192,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1205,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+906,"refresh_q", false,-1);
    tracep->declBus(c+907,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+908+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1197,"state_q", false,-1, 3,0);
    tracep->declBus(c+342,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+343,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+916,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+917,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+220,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+221,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+222,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+223,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1386,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+918,"delay_q", false,-1, 3,0);
    tracep->declBus(c+344,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1404,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1198,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+919,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+880,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+920,"idx", false,-1, 31,0);
    tracep->declBus(c+921,"rd_q", false,-1, 3,0);
    tracep->declBit(c+879,"ack_q", false,-1);
    tracep->declArray(c+1199,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+200,"auto_in_psel", false,-1);
    tracep->declBit(c+201,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+192,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1240,"auto_in_pready", false,-1);
    tracep->declBit(c+1282,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1241,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+876,"spi_bundle_sck", false,-1);
    tracep->declBus(c+877,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+878,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1235,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1360,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1405,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1387,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+224,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+200,"in_psel", false,-1);
    tracep->declBit(c+201,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1240,"in_pready", false,-1);
    tracep->declBus(c+1241,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1282,"in_pslverr", false,-1);
    tracep->declBit(c+876,"spi_sck", false,-1);
    tracep->declBus(c+877,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+878,"spi_mosi", false,-1);
    tracep->declBit(c+1235,"spi_miso", false,-1);
    tracep->declBit(c+922,"spi_irq_out", false,-1);
    tracep->declBus(c+1288,"ysyx_24120011_SPITOPAPB_IDLE", false,-1, 3,0);
    tracep->declBus(c+1398,"ysyx_24120011_SPITOPAPB_SPI", false,-1, 3,0);
    tracep->declBus(c+1397,"ysyx_24120011_SPITOPAPB_FLASH_DIV", false,-1, 3,0);
    tracep->declBus(c+1393,"ysyx_24120011_SPITOPAPB_FLASH_TXREG0", false,-1, 3,0);
    tracep->declBus(c+1395,"ysyx_24120011_SPITOPAPB_FLASH_TXREG1", false,-1, 3,0);
    tracep->declBus(c+1394,"ysyx_24120011_SPITOPAPB_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1396,"ysyx_24120011_SPITOPAPB_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1392,"ysyx_24120011_SPITOPAPB_FLASH_WAIT", false,-1, 3,0);
    tracep->declBus(c+1400,"ysyx_24120011_SPITOPAPB_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1401,"ysyx_24120011_SPITOPAPB_FLASH_RECV", false,-1, 3,0);
    tracep->declBus(c+839,"spi_top_apb_state", false,-1, 3,0);
    tracep->declBus(c+345,"spi_top_apb_nextstate", false,-1, 3,0);
    tracep->declBus(c+346,"reg_in_paddr", false,-1, 31,0);
    tracep->declBus(c+347,"reg_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+189,"reg_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1251,"reg_in_pwrite", false,-1);
    tracep->declBit(c+348,"reg_in_psel", false,-1);
    tracep->declBit(c+349,"reg_in_penable", false,-1);
    tracep->declBus(c+923,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+924,"reg_in_pready", false,-1);
    tracep->declBit(c+1282,"reg_in_pslverr", false,-1);
    tracep->declBit(c+922,"reg_spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1213,"wb_clk_i", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBus(c+350,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+347,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+923,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+189,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1251,"wb_we_i", false,-1);
    tracep->declBit(c+348,"wb_stb_i", false,-1);
    tracep->declBit(c+349,"wb_cyc_i", false,-1);
    tracep->declBit(c+924,"wb_ack_o", false,-1);
    tracep->declBit(c+1282,"wb_err_o", false,-1);
    tracep->declBit(c+922,"wb_int_o", false,-1);
    tracep->declBus(c+877,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+876,"sclk_pad_o", false,-1);
    tracep->declBit(c+878,"mosi_pad_o", false,-1);
    tracep->declBit(c+1235,"miso_pad_i", false,-1);
    tracep->declBus(c+925,"divider", false,-1, 15,0);
    tracep->declBus(c+926,"ctrl", false,-1, 13,0);
    tracep->declBus(c+927,"ss", false,-1, 7,0);
    tracep->declBus(c+351,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+928,"rx", false,-1, 127,0);
    tracep->declBit(c+932,"rx_negedge", false,-1);
    tracep->declBit(c+933,"tx_negedge", false,-1);
    tracep->declBus(c+934,"char_len", false,-1, 6,0);
    tracep->declBit(c+935,"go", false,-1);
    tracep->declBit(c+936,"lsb", false,-1);
    tracep->declBit(c+937,"ie", false,-1);
    tracep->declBit(c+938,"ass", false,-1);
    tracep->declBit(c+352,"spi_divider_sel", false,-1);
    tracep->declBit(c+353,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+354,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+355,"spi_ss_sel", false,-1);
    tracep->declBit(c+939,"tip", false,-1);
    tracep->declBit(c+940,"pos_edge", false,-1);
    tracep->declBit(c+941,"neg_edge", false,-1);
    tracep->declBit(c+942,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1213,"clk_in", false,-1);
    tracep->declBit(c+1214,"rst", false,-1);
    tracep->declBit(c+939,"enable", false,-1);
    tracep->declBit(c+935,"go", false,-1);
    tracep->declBit(c+942,"last_clk", false,-1);
    tracep->declBus(c+925,"divider", false,-1, 15,0);
    tracep->declBit(c+876,"clk_out", false,-1);
    tracep->declBit(c+940,"pos_edge", false,-1);
    tracep->declBit(c+941,"neg_edge", false,-1);
    tracep->declBus(c+943,"cnt", false,-1, 15,0);
    tracep->declBit(c+944,"cnt_zero", false,-1);
    tracep->declBit(c+945,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"rst", false,-1);
    tracep->declBus(c+356,"latch", false,-1, 3,0);
    tracep->declBus(c+189,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+934,"len", false,-1, 6,0);
    tracep->declBit(c+936,"lsb", false,-1);
    tracep->declBit(c+935,"go", false,-1);
    tracep->declBit(c+940,"pos_edge", false,-1);
    tracep->declBit(c+941,"neg_edge", false,-1);
    tracep->declBit(c+932,"rx_negedge", false,-1);
    tracep->declBit(c+933,"tx_negedge", false,-1);
    tracep->declBit(c+939,"tip", false,-1);
    tracep->declBit(c+942,"last", false,-1);
    tracep->declBus(c+347,"p_in", false,-1, 31,0);
    tracep->declArray(c+928,"p_out", false,-1, 127,0);
    tracep->declBit(c+876,"s_clk", false,-1);
    tracep->declBit(c+1235,"s_in", false,-1);
    tracep->declBit(c+878,"s_out", false,-1);
    tracep->declBus(c+946,"cnt", false,-1, 7,0);
    tracep->declArray(c+928,"data", false,-1, 127,0);
    tracep->declBus(c+947,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+948,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+949,"rx_clk", false,-1);
    tracep->declBit(c+950,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+197,"auto_in_psel", false,-1);
    tracep->declBit(c+198,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+193,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+199,"auto_in_pready", false,-1);
    tracep->declBit(c+1282,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1239,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1233,"uart_rx", false,-1);
    tracep->declBit(c+1234,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+197,"in_psel", false,-1);
    tracep->declBit(c+198,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+199,"in_pready", false,-1);
    tracep->declBit(c+1282,"in_pslverr", false,-1);
    tracep->declBus(c+211,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+1239,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1233,"uart_rx", false,-1);
    tracep->declBit(c+1234,"uart_tx", false,-1);
    tracep->declBit(c+951,"rtsn", false,-1);
    tracep->declBit(c+1282,"ctsn", false,-1);
    tracep->declBit(c+952,"dtr_pad_o", false,-1);
    tracep->declBit(c+1282,"dsr_pad_i", false,-1);
    tracep->declBit(c+1282,"ri_pad_i", false,-1);
    tracep->declBit(c+1282,"dcd_pad_i", false,-1);
    tracep->declBit(c+953,"interrupt", false,-1);
    tracep->declBit(c+1252,"reg_we", false,-1);
    tracep->declBit(c+1253,"reg_re", false,-1);
    tracep->declBus(c+225,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+226,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+840,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+357,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+954,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBus(c+225,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+227,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+357,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1252,"wb_we_i", false,-1);
    tracep->declBit(c+1253,"wb_re_i", false,-1);
    tracep->declBit(c+1234,"stx_pad_o", false,-1);
    tracep->declBit(c+1233,"srx_pad_i", false,-1);
    tracep->declBus(c+1400,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+954,"rts_pad_o", false,-1);
    tracep->declBit(c+952,"dtr_pad_o", false,-1);
    tracep->declBit(c+953,"int_o", false,-1);
    tracep->declBit(c+955,"enable", false,-1);
    tracep->declBit(c+956,"srx_pad", false,-1);
    tracep->declBus(c+957,"ier", false,-1, 3,0);
    tracep->declBus(c+958,"iir", false,-1, 3,0);
    tracep->declBus(c+959,"fcr", false,-1, 1,0);
    tracep->declBus(c+960,"mcr", false,-1, 4,0);
    tracep->declBus(c+961,"lcr", false,-1, 7,0);
    tracep->declBus(c+962,"msr", false,-1, 7,0);
    tracep->declBus(c+963,"dl", false,-1, 15,0);
    tracep->declBus(c+964,"scratch", false,-1, 7,0);
    tracep->declBit(c+965,"start_dlc", false,-1);
    tracep->declBit(c+966,"lsr_mask_d", false,-1);
    tracep->declBit(c+967,"msi_reset", false,-1);
    tracep->declBus(c+968,"dlc", false,-1, 15,0);
    tracep->declBus(c+969,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+970,"rx_reset", false,-1);
    tracep->declBit(c+971,"tx_reset", false,-1);
    tracep->declBit(c+972,"dlab", false,-1);
    tracep->declBit(c+1291,"cts_pad_i", false,-1);
    tracep->declBit(c+1282,"dsr_pad_i", false,-1);
    tracep->declBit(c+1282,"ri_pad_i", false,-1);
    tracep->declBit(c+1282,"dcd_pad_i", false,-1);
    tracep->declBit(c+973,"loopback", false,-1);
    tracep->declBit(c+1282,"cts", false,-1);
    tracep->declBit(c+1291,"dsr", false,-1);
    tracep->declBit(c+1291,"ri", false,-1);
    tracep->declBit(c+1291,"dcd", false,-1);
    tracep->declBit(c+974,"cts_c", false,-1);
    tracep->declBit(c+975,"dsr_c", false,-1);
    tracep->declBit(c+976,"ri_c", false,-1);
    tracep->declBit(c+977,"dcd_c", false,-1);
    tracep->declBus(c+978,"lsr", false,-1, 7,0);
    tracep->declBit(c+979,"lsr0", false,-1);
    tracep->declBit(c+980,"lsr1", false,-1);
    tracep->declBit(c+981,"lsr2", false,-1);
    tracep->declBit(c+982,"lsr3", false,-1);
    tracep->declBit(c+983,"lsr4", false,-1);
    tracep->declBit(c+984,"lsr5", false,-1);
    tracep->declBit(c+985,"lsr6", false,-1);
    tracep->declBit(c+986,"lsr7", false,-1);
    tracep->declBit(c+987,"lsr0r", false,-1);
    tracep->declBit(c+988,"lsr1r", false,-1);
    tracep->declBit(c+989,"lsr2r", false,-1);
    tracep->declBit(c+990,"lsr3r", false,-1);
    tracep->declBit(c+991,"lsr4r", false,-1);
    tracep->declBit(c+992,"lsr5r", false,-1);
    tracep->declBit(c+993,"lsr6r", false,-1);
    tracep->declBit(c+994,"lsr7r", false,-1);
    tracep->declBit(c+1254,"lsr_mask", false,-1);
    tracep->declBit(c+995,"rls_int", false,-1);
    tracep->declBit(c+996,"rda_int", false,-1);
    tracep->declBit(c+997,"ti_int", false,-1);
    tracep->declBit(c+998,"thre_int", false,-1);
    tracep->declBit(c+999,"ms_int", false,-1);
    tracep->declBit(c+1000,"tf_push", false,-1);
    tracep->declBit(c+1001,"rf_pop", false,-1);
    tracep->declBus(c+1255,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1002,"rf_error_bit", false,-1);
    tracep->declBit(c+980,"rf_overrun", false,-1);
    tracep->declBit(c+1003,"rf_push_pulse", false,-1);
    tracep->declBus(c+1004,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1005,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1006,"tstate", false,-1, 2,0);
    tracep->declBus(c+1007,"rstate", false,-1, 3,0);
    tracep->declBus(c+1008,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1009,"thre_set_en", false,-1);
    tracep->declBus(c+1010,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1011,"block_value", false,-1, 7,0);
    tracep->declBit(c+1012,"serial_out", false,-1);
    tracep->declBit(c+1013,"serial_in", false,-1);
    tracep->declBit(c+1256,"lsr_mask_condition", false,-1);
    tracep->declBit(c+1257,"iir_read", false,-1);
    tracep->declBit(c+1258,"msr_read", false,-1);
    tracep->declBit(c+1259,"fifo_read", false,-1);
    tracep->declBit(c+1260,"fifo_write", false,-1);
    tracep->declBus(c+1014,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1015,"lsr0_d", false,-1);
    tracep->declBit(c+1016,"lsr1_d", false,-1);
    tracep->declBit(c+1017,"lsr2_d", false,-1);
    tracep->declBit(c+1018,"lsr3_d", false,-1);
    tracep->declBit(c+1019,"lsr4_d", false,-1);
    tracep->declBit(c+1020,"lsr5_d", false,-1);
    tracep->declBit(c+1021,"lsr6_d", false,-1);
    tracep->declBit(c+1022,"lsr7_d", false,-1);
    tracep->declBit(c+1023,"rls_int_d", false,-1);
    tracep->declBit(c+1024,"thre_int_d", false,-1);
    tracep->declBit(c+1025,"ms_int_d", false,-1);
    tracep->declBit(c+1026,"ti_int_d", false,-1);
    tracep->declBit(c+1027,"rda_int_d", false,-1);
    tracep->declBit(c+1028,"rls_int_rise", false,-1);
    tracep->declBit(c+1029,"thre_int_rise", false,-1);
    tracep->declBit(c+1030,"ms_int_rise", false,-1);
    tracep->declBit(c+1031,"ti_int_rise", false,-1);
    tracep->declBit(c+1032,"rda_int_rise", false,-1);
    tracep->declBit(c+1033,"rls_int_pnd", false,-1);
    tracep->declBit(c+1034,"rda_int_pnd", false,-1);
    tracep->declBit(c+1035,"thre_int_pnd", false,-1);
    tracep->declBit(c+1036,"ms_int_pnd", false,-1);
    tracep->declBit(c+1037,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1406,"Tp", false,-1, 31,0);
    tracep->declBus(c+1406,"width", false,-1, 31,0);
    tracep->declBus(c+1378,"init_value", false,-1, 0,0);
    tracep->declBit(c+1214,"rst_i", false,-1);
    tracep->declBit(c+1213,"clk_i", false,-1);
    tracep->declBit(c+1282,"stage1_rst_i", false,-1);
    tracep->declBit(c+1291,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1233,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+956,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1038,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBus(c+961,"lcr", false,-1, 7,0);
    tracep->declBit(c+1001,"rf_pop", false,-1);
    tracep->declBit(c+1013,"srx_pad_i", false,-1);
    tracep->declBit(c+955,"enable", false,-1);
    tracep->declBit(c+970,"rx_reset", false,-1);
    tracep->declBit(c+1254,"lsr_mask", false,-1);
    tracep->declBus(c+1008,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1004,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1255,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+980,"rf_overrun", false,-1);
    tracep->declBit(c+1002,"rf_error_bit", false,-1);
    tracep->declBus(c+1007,"rstate", false,-1, 3,0);
    tracep->declBit(c+1003,"rf_push_pulse", false,-1);
    tracep->declBus(c+1039,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1040,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1041,"rshift", false,-1, 7,0);
    tracep->declBit(c+1042,"rparity", false,-1);
    tracep->declBit(c+1043,"rparity_error", false,-1);
    tracep->declBit(c+1044,"rframing_error", false,-1);
    tracep->declBit(c+1045,"rbit_in", false,-1);
    tracep->declBit(c+1046,"rparity_xor", false,-1);
    tracep->declBus(c+1047,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1048,"rf_push_q", false,-1);
    tracep->declBus(c+1049,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1050,"rf_push", false,-1);
    tracep->declBit(c+1051,"break_error", false,-1);
    tracep->declBit(c+1052,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1053,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1054,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1055,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1288,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1398,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1397,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1393,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1395,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1394,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1396,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1392,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1400,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1401,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1407,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1056,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1057,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1408,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1409,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1386,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1410,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBit(c+1003,"push", false,-1);
    tracep->declBit(c+1001,"pop", false,-1);
    tracep->declBus(c+1049,"data_in", false,-1, 10,0);
    tracep->declBit(c+970,"fifo_reset", false,-1);
    tracep->declBit(c+1254,"reset_status", false,-1);
    tracep->declBus(c+1255,"data_out", false,-1, 10,0);
    tracep->declBit(c+980,"overrun", false,-1);
    tracep->declBus(c+1004,"count", false,-1, 4,0);
    tracep->declBit(c+1002,"error_bit", false,-1);
    tracep->declBus(c+1261,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1058+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1074,"top", false,-1, 3,0);
    tracep->declBus(c+1075,"bottom", false,-1, 3,0);
    tracep->declBus(c+1076,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1077,"word0", false,-1, 2,0);
    tracep->declBus(c+1078,"word1", false,-1, 2,0);
    tracep->declBus(c+1079,"word2", false,-1, 2,0);
    tracep->declBus(c+1080,"word3", false,-1, 2,0);
    tracep->declBus(c+1081,"word4", false,-1, 2,0);
    tracep->declBus(c+1082,"word5", false,-1, 2,0);
    tracep->declBus(c+1083,"word6", false,-1, 2,0);
    tracep->declBus(c+1084,"word7", false,-1, 2,0);
    tracep->declBus(c+1085,"word8", false,-1, 2,0);
    tracep->declBus(c+1086,"word9", false,-1, 2,0);
    tracep->declBus(c+1087,"word10", false,-1, 2,0);
    tracep->declBus(c+1088,"word11", false,-1, 2,0);
    tracep->declBus(c+1089,"word12", false,-1, 2,0);
    tracep->declBus(c+1090,"word13", false,-1, 2,0);
    tracep->declBus(c+1091,"word14", false,-1, 2,0);
    tracep->declBus(c+1092,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1386,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1387,"data_width", false,-1, 31,0);
    tracep->declBus(c+1409,"depth", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1003,"we", false,-1);
    tracep->declBus(c+1074,"a", false,-1, 3,0);
    tracep->declBus(c+1075,"dpra", false,-1, 3,0);
    tracep->declBus(c+1093,"di", false,-1, 7,0);
    tracep->declBus(c+1261,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+841+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBus(c+961,"lcr", false,-1, 7,0);
    tracep->declBit(c+1000,"tf_push", false,-1);
    tracep->declBus(c+227,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+955,"enable", false,-1);
    tracep->declBit(c+971,"tx_reset", false,-1);
    tracep->declBit(c+1254,"lsr_mask", false,-1);
    tracep->declBit(c+1012,"stx_pad_o", false,-1);
    tracep->declBus(c+1006,"tstate", false,-1, 2,0);
    tracep->declBus(c+1005,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1094,"counter", false,-1, 4,0);
    tracep->declBus(c+1095,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1096,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1097,"stx_o_tmp", false,-1);
    tracep->declBit(c+1098,"parity_xor", false,-1);
    tracep->declBit(c+1099,"tf_pop", false,-1);
    tracep->declBit(c+1100,"bit_out", false,-1);
    tracep->declBus(c+227,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1262,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1101,"tf_overrun", false,-1);
    tracep->declBus(c+1293,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1281,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1295,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1356,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1357,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1358,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1387,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1409,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1386,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1410,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1214,"wb_rst_i", false,-1);
    tracep->declBit(c+1000,"push", false,-1);
    tracep->declBit(c+1099,"pop", false,-1);
    tracep->declBus(c+227,"data_in", false,-1, 7,0);
    tracep->declBit(c+971,"fifo_reset", false,-1);
    tracep->declBit(c+1254,"reset_status", false,-1);
    tracep->declBus(c+1262,"data_out", false,-1, 7,0);
    tracep->declBit(c+1101,"overrun", false,-1);
    tracep->declBus(c+1005,"count", false,-1, 4,0);
    tracep->declBus(c+1102,"top", false,-1, 3,0);
    tracep->declBus(c+1103,"bottom", false,-1, 3,0);
    tracep->declBus(c+1104,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1386,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1387,"data_width", false,-1, 31,0);
    tracep->declBus(c+1409,"depth", false,-1, 31,0);
    tracep->declBit(c+1213,"clk", false,-1);
    tracep->declBit(c+1000,"we", false,-1);
    tracep->declBus(c+1102,"a", false,-1, 3,0);
    tracep->declBus(c+1103,"dpra", false,-1, 3,0);
    tracep->declBus(c+227,"di", false,-1, 7,0);
    tracep->declBus(c+1262,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+857+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBit(c+118,"auto_in_psel", false,-1);
    tracep->declBit(c+119,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+192,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1281,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"auto_in_pready", false,-1);
    tracep->declBit(c+1284,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1285,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1227,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1228,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1229,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1230,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1231,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1232,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1213,"clock", false,-1);
    tracep->declBit(c+1214,"reset", false,-1);
    tracep->declBus(c+224,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+118,"in_psel", false,-1);
    tracep->declBit(c+119,"in_penable", false,-1);
    tracep->declBus(c+1281,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1283,"in_pready", false,-1);
    tracep->declBus(c+1285,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1284,"in_pslverr", false,-1);
    tracep->declBus(c+1227,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1228,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1229,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1230,"vga_hsync", false,-1);
    tracep->declBit(c+1231,"vga_vsync", false,-1);
    tracep->declBit(c+1232,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+876,"sck", false,-1);
    tracep->declBit(c+1105,"ss", false,-1);
    tracep->declBit(c+878,"mosi", false,-1);
    tracep->declBit(c+1263,"miso", false,-1);
    tracep->declBus(c+873,"data", false,-1, 7,0);
    tracep->declBus(c+874,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+876,"sck", false,-1);
    tracep->declBit(c+1106,"ss", false,-1);
    tracep->declBit(c+878,"mosi", false,-1);
    tracep->declBit(c+1264,"miso", false,-1);
    tracep->declBit(c+1106,"reset", false,-1);
    tracep->declBus(c+1183,"state", false,-1, 2,0);
    tracep->declBus(c+1184,"counter", false,-1, 7,0);
    tracep->declBus(c+1265,"cmd", false,-1, 7,0);
    tracep->declBus(c+1266,"addr", false,-1, 23,0);
    tracep->declBus(c+1185,"data", false,-1, 31,0);
    tracep->declBit(c+1186,"ren", false,-1);
    tracep->declBus(c+875,"rdata", false,-1, 31,0);
    tracep->declBus(c+1267,"raddr", false,-1, 31,0);
    tracep->declBus(c+1268,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+876,"clock", false,-1);
    tracep->declBit(c+1186,"valid", false,-1);
    tracep->declBus(c+1265,"cmd", false,-1, 7,0);
    tracep->declBus(c+1267,"addr", false,-1, 31,0);
    tracep->declBus(c+875,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+228,"sck", false,-1);
    tracep->declBit(c+229,"ce_n", false,-1);
    tracep->declBus(c+1236,"dio", false,-1, 3,0);
    tracep->declBus(c+1208,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1269,"dout", false,-1, 3,0);
    tracep->declBus(c+1236,"din", false,-1, 3,0);
    tracep->declBit(c+1270,"QPI_MODE", false,-1);
    tracep->declBus(c+1209,"cmd", false,-1, 7,0);
    tracep->declBus(c+1210,"addr", false,-1, 23,0);
    tracep->declBus(c+1271,"data", false,-1, 31,0);
    tracep->declBus(c+1272,"rdata", false,-1, 31,0);
    tracep->declBus(c+1211,"counter", false,-1, 7,0);
    tracep->declBus(c+1212,"state", false,-1, 3,0);
    tracep->declBus(c+1273,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1274,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1189,"ras", false,-1);
    tracep->declBit(c+1190,"cas", false,-1);
    tracep->declBit(c+1191,"we", false,-1);
    tracep->declBus(c+230,"a", false,-1, 13,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1193,"dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"dq", false,-1, 31,0);
    tracep->declBus(c+1202,"command", false,-1, 2,0);
    tracep->declBit(c+1275,"ras_u0", false,-1);
    tracep->declBit(c+1276,"cas_u0", false,-1);
    tracep->declBit(c+1277,"we_u0", false,-1);
    tracep->declBit(c+1278,"ras_u1", false,-1);
    tracep->declBit(c+1279,"cas_u1", false,-1);
    tracep->declBit(c+1280,"we_u1", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1275,"ras", false,-1);
    tracep->declBit(c+1276,"cas", false,-1);
    tracep->declBit(c+1277,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1193,"dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u0 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1275,"ras", false,-1);
    tracep->declBit(c+1276,"cas", false,-1);
    tracep->declBit(c+1277,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1203,"dqm", false,-1, 1,0);
    tracep->declBus(c+1206,"dq", false,-1, 15,0);
    tracep->declBus(c+1411,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1412,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1356,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1358,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1357,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1413,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1295,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1281,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1293,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1414,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1107+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1111,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1112,"dout", false,-1, 15,0);
    tracep->declBus(c+1206,"din", false,-1, 15,0);
    tracep->declBus(c+1113,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1114,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+358,"command", false,-1, 2,0);
    tracep->declBus(c+1115,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1116,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1117,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1118,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1119,"read_flag", false,-1);
    tracep->declBus(c+1120,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1121,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1122,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1123,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1124,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1125,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1275,"ras", false,-1);
    tracep->declBit(c+1276,"cas", false,-1);
    tracep->declBit(c+1277,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1204,"dqm", false,-1, 1,0);
    tracep->declBus(c+1207,"dq", false,-1, 15,0);
    tracep->declBus(c+1411,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1412,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1356,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1358,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1357,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1413,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1295,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1281,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1293,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1414,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1126+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1130,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1131,"dout", false,-1, 15,0);
    tracep->declBus(c+1207,"din", false,-1, 15,0);
    tracep->declBus(c+1132,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1133,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+358,"command", false,-1, 2,0);
    tracep->declBus(c+1134,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1135,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1136,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1137,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1138,"read_flag", false,-1);
    tracep->declBus(c+1139,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1140,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1141,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1142,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1143,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1144,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1278,"ras", false,-1);
    tracep->declBit(c+1279,"cas", false,-1);
    tracep->declBit(c+1280,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1193,"dqm", false,-1, 3,0);
    tracep->declBus(c+1205,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u0 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1278,"ras", false,-1);
    tracep->declBit(c+1279,"cas", false,-1);
    tracep->declBit(c+1280,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1203,"dqm", false,-1, 1,0);
    tracep->declBus(c+1206,"dq", false,-1, 15,0);
    tracep->declBus(c+1411,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1412,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1356,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1358,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1357,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1413,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1295,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1281,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1293,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1414,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1145+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1149,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1150,"dout", false,-1, 15,0);
    tracep->declBus(c+1206,"din", false,-1, 15,0);
    tracep->declBus(c+1151,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1152,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+359,"command", false,-1, 2,0);
    tracep->declBus(c+1153,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1154,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1155,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1156,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1157,"read_flag", false,-1);
    tracep->declBus(c+1158,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1159,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1160,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1161,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1162,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1163,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1237,"clk", false,-1);
    tracep->declBit(c+1187,"cke", false,-1);
    tracep->declBit(c+1188,"cs", false,-1);
    tracep->declBit(c+1278,"ras", false,-1);
    tracep->declBit(c+1279,"cas", false,-1);
    tracep->declBit(c+1280,"we", false,-1);
    tracep->declBus(c+1196,"a", false,-1, 12,0);
    tracep->declBus(c+1192,"ba", false,-1, 1,0);
    tracep->declBus(c+1204,"dqm", false,-1, 1,0);
    tracep->declBus(c+1207,"dq", false,-1, 15,0);
    tracep->declBus(c+1411,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1412,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1356,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1358,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1357,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1413,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1295,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1281,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1293,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1414,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1164+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1168,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1169,"dout", false,-1, 15,0);
    tracep->declBus(c+1207,"din", false,-1, 15,0);
    tracep->declBus(c+1170,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1171,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+359,"command", false,-1, 2,0);
    tracep->declBus(c+1172,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1173,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1174,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1175,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1176,"read_flag", false,-1);
    tracep->declBus(c+1177,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1178,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1179,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1180,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1181,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1182,"Length", false,-1, 3,0);
    tracep->popNamePrefix(4);
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
    bufp->fullCData(oldp+1,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+2,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                      >> 7U))),5);
    bufp->fullCData(oldp+4,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+5,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                             >> 0x19U)),7);
    bufp->fullIData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imme),32);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl),2);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUBctrl),2);
    bufp->fullBit(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sign_extension));
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len),8);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data_ctrl),4);
    bufp->fullSData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_addr),12);
    bufp->fullSData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_addr),12);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullCData(oldp+18,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_IDU__DOT__opcode_type),3);
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullIData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullIData(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullIData(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullIData(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awaddr),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awsize),3);
    bufp->fullIData(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wdata),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wstrb),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_araddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arsize),3);
    bufp->fullIData(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullIData(oldp+45,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 2U))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+48,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+49,((0x7800U == (0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xdU)))));
    bufp->fullSData(oldp+50,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                        >> 2U))),11);
    bufp->fullSData(oldp+51,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                        >> 2U))),11);
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 1U))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+55,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+60,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                             >> 0x1bU)) 
                                   | ((0xcU & (8U ^ 
                                               (0x3cU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x1aU)))) 
                                      | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x17U)) 
                                         | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                  >> 0xcU))))))));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullCData(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullCData(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+64,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc_ctrl))
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
    bufp->fullIData(oldp+65,(((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl))
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
    bufp->fullIData(oldp+66,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src2),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_PCProcessor__DOT__pc_add_imme),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid) 
                            & (4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_ctrl)))));
    bufp->fullBit(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_en));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_en));
    bufp->fullBit(oldp+74,(((0x63U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result)));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullBit(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_en));
    bufp->fullBit(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_ecall));
    bufp->fullIData(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullCData(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid)
                               ? ((1U & (- (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))) 
                                  | (2U & (- (IData)(
                                                     (4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_len))))))
                               : 2U)),3);
    bufp->fullCData(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid)
                               ? ((1U & (- (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))) 
                                  | (2U & (- (IData)(
                                                     (4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))))))
                               : 2U)),3);
    bufp->fullIData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__reg_wdata),32);
    bufp->fullCData(oldp+82,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                               ? ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                   ? 1U : ((1U == (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                            ? 2U : 
                                           ((2U == 
                                             (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                             ? 4U : 8U)))
                               : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                   ? ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                       ? 3U : ((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                                ? 6U
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_result))
                                                    ? 0xcU
                                                    : 0U)))
                                   : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_mem_len))
                                       ? 0xfU : 0U)))),4);
    bufp->fullIData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr),32);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arsize),3);
    bufp->fullIData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr),32);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awsize),3);
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wdata),32);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wstrb),4);
    bufp->fullIData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_araddr),32);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arsize),3);
    bufp->fullIData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awaddr),32);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awsize),3);
    bufp->fullIData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wdata),32);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wstrb),4);
    bufp->fullIData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+96,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry));
    bufp->fullBit(oldp+99,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                              >> 0x1fU) == (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB) 
                                            >> 0x1fU)) 
                            & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                                >> 0x1fU) != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__ALUout_tmp 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+100,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__carry)))));
    bufp->fullBit(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_ALU__DOT__sless));
    bufp->fullBit(oldp+102,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullBit(oldp+103,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wdata_format),6);
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_araddr),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arsize),3);
    bufp->fullIData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awaddr),32);
    bufp->fullCData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awsize),3);
    bufp->fullIData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wdata),32);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wstrb),4);
    bufp->fullIData(oldp+111,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+115,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+125,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+126,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullIData(oldp+127,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                 ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                 : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                            : 0U) | 
                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullBit(oldp+128,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+129,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+133,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+134,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+135,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+136,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+137,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+138,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+141,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+142,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+143,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+144,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+145,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+146,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+147,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+148,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+149,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+150,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+151,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+152,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+153,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+154,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+155,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+156,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+158,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+159,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+160,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+161,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+162,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+163,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+164,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
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
    bufp->fullCData(oldp+165,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+166,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+167,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+168,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+169,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state)) 
                             & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
                                    >> 2U)) & ((2U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                                ? (
                                                   (1U 
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
    bufp->fullCData(oldp+170,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+171,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+172,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid))));
    bufp->fullCData(oldp+173,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state))
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
    bufp->fullBit(oldp+174,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state) 
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
    bufp->fullCData(oldp+175,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)
                                             : 0U)))),4);
    bufp->fullCData(oldp+176,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
    bufp->fullCData(oldp+177,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                ? 0U : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                         ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid))
                                         : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)
                                             : 0U)))),4);
    bufp->fullCData(oldp+178,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
                                                (((0x2000048U 
                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr) 
                                                  | (0x200004cU 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_araddr))
                                                  ? 3U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullCData(oldp+179,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state))
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
                                                ((0x3f8U 
                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awaddr)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U))))),3);
    bufp->fullBit(oldp+180,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready))));
    bufp->fullBit(oldp+181,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready))));
    bufp->fullIData(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_data),32);
    bufp->fullCData(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+186,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+187,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+188,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullCData(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pstrb),4);
    bufp->fullIData(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+192,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+193,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+210,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+211,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+214,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+215,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+220,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+221,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+222,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+224,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+225,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+230,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+266,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+267,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+289,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+290,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+291,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+292,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+293,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+294,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+295,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+296,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+297,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+298,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+299,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+300,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+301,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+302,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+303,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+304,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+305,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+306,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+307,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+308,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+309,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+310,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+311,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+312,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+313,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+314,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+315,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+316,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+317,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+318,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+319,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+320,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rdata),32);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
    bufp->fullIData(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rdata),32);
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rvalid));
    bufp->fullIData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__next_state),3);
    bufp->fullIData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rdata_mask),32);
    bufp->fullCData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate),4);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata),32);
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable));
    bufp->fullCData(oldp+350,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)),5);
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+352,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullBit(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+354,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr))))))),4);
    bufp->fullBit(oldp+355,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command),3);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command),3);
    bufp->fullBit(oldp+360,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__reg_in_prdata),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_in_prdata),32);
    bufp->fullIData(oldp+363,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+376,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+378,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+382,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+386,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+388,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+390,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+391,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+432,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
    bufp->fullQData(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+438,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+441,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+442,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+453,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+457,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+458,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+504,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+579,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+583,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+587,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+591,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+595,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+599,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+603,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+607,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+611,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+615,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+619,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+623,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+627,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+631,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+635,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+639,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data),32);
    bufp->fullIData(oldp+644,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs
                              [0xaU]),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready));
    bufp->fullIData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid),32);
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_arready));
    bufp->fullBit(oldp+653,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+654,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_arready));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_awready));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_wready));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_bready));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid));
    bufp->fullBit(oldp+667,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wvalid));
    bufp->fullBit(oldp+669,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+672,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+677,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+681,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullIData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullIData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mvendorid),32);
    bufp->fullIData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__marchid),32);
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+698,((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state))));
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullBit(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+793,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+794,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+795,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+796,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_out),16);
    bufp->fullCData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_0),4);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_1),4);
    bufp->fullCData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_2),4);
    bufp->fullCData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_3),4);
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_4),4);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_5),4);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_6),4);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_7),4);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__r_ptr]),8);
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__overflow));
    bufp->fullSData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__count),4);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+833,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state),4);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+875,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+883,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+884,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+887,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+888,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+889,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+892,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+893,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+899,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+903,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
    bufp->fullIData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
    bufp->fullSData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+932,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+933,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+934,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+935,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+936,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+937,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+938,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+942,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+944,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+945,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+947,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+951,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+952,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+954,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+973,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+974,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+975,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+976,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+977,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+978,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+981,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+982,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+983,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1000,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1002,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1009,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1028,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1029,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1030,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1031,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1032,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1051,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1052,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1053,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1054,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1055,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1057,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1076,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1093,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1104,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1105,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1130,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1149,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1168,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1186,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1188,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1189,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1190,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1191,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1194,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+1202,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1203,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1204,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1206,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1207,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1208,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullBit(oldp+1213,(vlSelf->clock));
    bufp->fullBit(oldp+1214,(vlSelf->reset));
    bufp->fullSData(oldp+1215,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1216,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1217,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1218,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1219,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1220,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1221,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1222,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1223,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1224,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1225,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1226,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1227,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1228,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1229,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1230,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1231,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1232,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1233,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1234,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1235,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1237,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1238,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1240,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                               | (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))));
    bufp->fullIData(oldp+1241,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata
                                 : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
                                     ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                         << 0x18U) 
                                        | ((0xff0000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                               << 8U)) 
                                           | ((0xff00U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                  >> 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata 
                                                 >> 0x18U))))
                                     : 0U))),32);
    bufp->fullCData(oldp+1242,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1244,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1245,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1246,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
    bufp->fullBit(oldp+1247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1250,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullSData(oldp+1255,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1264,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1267,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1269,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1274,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullBit(oldp+1275,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1276,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 7U
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1277,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? 7U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+1278,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 2U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 2U)))));
    bufp->fullBit(oldp+1279,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                        >> 1U) : ((
                                                   (0x2000U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                                    ? 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                                    : 7U) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+1280,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                         : 7U)))));
    bufp->fullCData(oldp+1281,(1U),3);
    bufp->fullBit(oldp+1282,(0U));
    bufp->fullBit(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullCData(oldp+1288,(0U),4);
    bufp->fullCData(oldp+1289,(0U),8);
    bufp->fullCData(oldp+1290,(0U),2);
    bufp->fullBit(oldp+1291,(1U));
    bufp->fullIData(oldp+1292,(0U),32);
    bufp->fullCData(oldp+1293,(0U),3);
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+1295,(2U),3);
    bufp->fullCData(oldp+1296,(0xfU),4);
    bufp->fullIData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+1356,(3U),3);
    bufp->fullCData(oldp+1357,(4U),3);
    bufp->fullCData(oldp+1358,(5U),3);
    bufp->fullIData(oldp+1359,(0x20U),32);
    bufp->fullIData(oldp+1360,(0x30000000U),32);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+1373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullCData(oldp+1374,(1U),2);
    bufp->fullCData(oldp+1375,(2U),2);
    bufp->fullCData(oldp+1376,(0x35U),8);
    bufp->fullBit(oldp+1377,(0U));
    bufp->fullBit(oldp+1378,(1U));
    bufp->fullCData(oldp+1379,(0x15U),8);
    bufp->fullCData(oldp+1380,(0xebU),8);
    bufp->fullCData(oldp+1381,(0x38U),8);
    bufp->fullIData(oldp+1382,(0x64U),32);
    bufp->fullIData(oldp+1383,(0x18U),32);
    bufp->fullIData(oldp+1384,(9U),32);
    bufp->fullIData(oldp+1385,(2U),32);
    bufp->fullIData(oldp+1386,(4U),32);
    bufp->fullIData(oldp+1387,(8U),32);
    bufp->fullIData(oldp+1388,(0xdU),32);
    bufp->fullIData(oldp+1389,(0x2000U),32);
    bufp->fullIData(oldp+1390,(0x2710U),32);
    bufp->fullIData(oldp+1391,(0x30cU),32);
    bufp->fullCData(oldp+1392,(7U),4);
    bufp->fullCData(oldp+1393,(3U),4);
    bufp->fullCData(oldp+1394,(5U),4);
    bufp->fullCData(oldp+1395,(4U),4);
    bufp->fullCData(oldp+1396,(6U),4);
    bufp->fullCData(oldp+1397,(2U),4);
    bufp->fullCData(oldp+1398,(1U),4);
    bufp->fullSData(oldp+1399,(0x20U),13);
    bufp->fullCData(oldp+1400,(8U),4);
    bufp->fullCData(oldp+1401,(9U),4);
    bufp->fullIData(oldp+1402,(0xaU),32);
    bufp->fullIData(oldp+1403,(6U),32);
    bufp->fullIData(oldp+1404,(0x11U),32);
    bufp->fullIData(oldp+1405,(0x3fffffffU),32);
    bufp->fullIData(oldp+1406,(1U),32);
    bufp->fullCData(oldp+1407,(0xaU),4);
    bufp->fullIData(oldp+1408,(0xbU),32);
    bufp->fullIData(oldp+1409,(0x10U),32);
    bufp->fullIData(oldp+1410,(5U),32);
    bufp->fullIData(oldp+1411,(3U),32);
    bufp->fullCData(oldp+1412,(7U),3);
    bufp->fullCData(oldp+1413,(6U),3);
    bufp->fullIData(oldp+1414,(0x400000U),32);
}
