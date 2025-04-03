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
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+1233,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1234,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1235,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1236,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1237,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1238,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1239,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1240,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1241,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1242,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1243,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1244,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1245,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1246,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1247,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1248,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1249,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1250,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1251,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1252,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+1233,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1234,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1235,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1236,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1237,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1238,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1239,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1240,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1241,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1242,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1243,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1244,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1245,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1246,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1247,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1248,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1249,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1250,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1251,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1252,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+894,"spi_sck", false,-1);
    tracep->declBus(c+895,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+896,"spi_mosi", false,-1);
    tracep->declBit(c+1253,"spi_miso", false,-1);
    tracep->declBit(c+1251,"uart_rx", false,-1);
    tracep->declBit(c+1252,"uart_tx", false,-1);
    tracep->declBit(c+229,"psram_sck", false,-1);
    tracep->declBit(c+230,"psram_ce_n", false,-1);
    tracep->declBus(c+1254,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1255,"sdram_clk", false,-1);
    tracep->declBit(c+1205,"sdram_cke", false,-1);
    tracep->declBit(c+1206,"sdram_cs", false,-1);
    tracep->declBit(c+1207,"sdram_ras", false,-1);
    tracep->declBit(c+1208,"sdram_cas", false,-1);
    tracep->declBit(c+1209,"sdram_we", false,-1);
    tracep->declBus(c+231,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1210,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1211,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"sdram_dq", false,-1, 31,0);
    tracep->declBus(c+1233,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1234,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1235,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1237,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1238,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1239,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1240,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1241,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1242,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1243,"ps2_clk", false,-1);
    tracep->declBit(c+1244,"ps2_data", false,-1);
    tracep->declBus(c+1245,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1246,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1247,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1248,"vga_hsync", false,-1);
    tracep->declBit(c+1249,"vga_vsync", false,-1);
    tracep->declBit(c+1250,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"in_psel", false,-1);
    tracep->declBit(c+361,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+232,"in_pready", false,-1);
    tracep->declBus(c+233,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+191,"in_pslverr", false,-1);
    tracep->declBus(c+190,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+20,"out_psel", false,-1);
    tracep->declBit(c+361,"out_penable", false,-1);
    tracep->declBus(c+1299,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"out_pwrite", false,-1);
    tracep->declBus(c+182,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+232,"out_pready", false,-1);
    tracep->declBus(c+233,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+191,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+20,"auto_anon_in_psel", false,-1);
    tracep->declBit(c+361,"auto_anon_in_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_anon_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+232,"auto_anon_in_pready", false,-1);
    tracep->declBit(c+191,"auto_anon_in_pslverr", false,-1);
    tracep->declBus(c+233,"auto_anon_in_prdata", false,-1, 31,0);
    tracep->declBit(c+116,"auto_anon_out_6_psel", false,-1);
    tracep->declBit(c+117,"auto_anon_out_6_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_6_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_anon_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+897,"auto_anon_out_6_pready", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_6_pslverr", false,-1);
    tracep->declBus(c+898,"auto_anon_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+118,"auto_anon_out_5_psel", false,-1);
    tracep->declBit(c+119,"auto_anon_out_5_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_5_pwrite", false,-1);
    tracep->declBus(c+192,"auto_anon_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_anon_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+193,"auto_anon_out_5_pready", false,-1);
    tracep->declBit(c+1301,"auto_anon_out_5_pslverr", false,-1);
    tracep->declBus(c+1302,"auto_anon_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+120,"auto_anon_out_4_psel", false,-1);
    tracep->declBit(c+121,"auto_anon_out_4_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_4_pwrite", false,-1);
    tracep->declBus(c+194,"auto_anon_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_anon_out_4_pready", false,-1);
    tracep->declBit(c+1303,"auto_anon_out_4_pslverr", false,-1);
    tracep->declBus(c+362,"auto_anon_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+122,"auto_anon_out_3_psel", false,-1);
    tracep->declBit(c+123,"auto_anon_out_3_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_3_pwrite", false,-1);
    tracep->declBus(c+194,"auto_anon_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+196,"auto_anon_out_3_pready", false,-1);
    tracep->declBit(c+1304,"auto_anon_out_3_pslverr", false,-1);
    tracep->declBus(c+363,"auto_anon_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+197,"auto_anon_out_2_psel", false,-1);
    tracep->declBit(c+124,"auto_anon_out_2_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_2_pwrite", false,-1);
    tracep->declBus(c+190,"auto_anon_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_anon_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"auto_anon_out_2_pready", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_2_pslverr", false,-1);
    tracep->declBus(c+364,"auto_anon_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+198,"auto_anon_out_1_psel", false,-1);
    tracep->declBit(c+199,"auto_anon_out_1_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_1_pwrite", false,-1);
    tracep->declBus(c+194,"auto_anon_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_anon_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+200,"auto_anon_out_1_pready", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_1_pslverr", false,-1);
    tracep->declBus(c+1257,"auto_anon_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+201,"auto_anon_out_0_psel", false,-1);
    tracep->declBit(c+202,"auto_anon_out_0_penable", false,-1);
    tracep->declBit(c+21,"auto_anon_out_0_pwrite", false,-1);
    tracep->declBus(c+192,"auto_anon_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_anon_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_anon_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_anon_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+1258,"auto_anon_out_0_pready", false,-1);
    tracep->declBit(c+1300,"auto_anon_out_0_pslverr", false,-1);
    tracep->declBus(c+1259,"auto_anon_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+203,"sel_0", false,-1);
    tracep->declBit(c+204,"sel_1", false,-1);
    tracep->declBit(c+205,"sel_2", false,-1);
    tracep->declBit(c+206,"sel_3", false,-1);
    tracep->declBit(c+207,"sel_4", false,-1);
    tracep->declBit(c+208,"sel_5", false,-1);
    tracep->declBit(c+209,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+23,"auto_in_awready", false,-1);
    tracep->declBit(c+24,"auto_in_awvalid", false,-1);
    tracep->declBus(c+365,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+23,"auto_in_wready", false,-1);
    tracep->declBit(c+27,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+234,"auto_in_bready", false,-1);
    tracep->declBit(c+235,"auto_in_bvalid", false,-1);
    tracep->declBus(c+366,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_in_arready", false,-1);
    tracep->declBit(c+31,"auto_in_arvalid", false,-1);
    tracep->declBus(c+367,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+236,"auto_in_rready", false,-1);
    tracep->declBit(c+237,"auto_in_rvalid", false,-1);
    tracep->declBus(c+368,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+210,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+20,"auto_out_psel", false,-1);
    tracep->declBit(c+361,"auto_out_penable", false,-1);
    tracep->declBit(c+21,"auto_out_pwrite", false,-1);
    tracep->declBus(c+190,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+182,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+232,"auto_out_pready", false,-1);
    tracep->declBit(c+191,"auto_out_pslverr", false,-1);
    tracep->declBus(c+233,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+361,"nodeOut_penable", false,-1);
    tracep->declBus(c+369,"state", false,-1, 1,0);
    tracep->declBit(c+30,"accept_read", false,-1);
    tracep->declBit(c+23,"accept_write", false,-1);
    tracep->declBit(c+370,"is_write_r", false,-1);
    tracep->declBit(c+21,"is_write", false,-1);
    tracep->declBus(c+368,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+366,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+371,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+372,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+373,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+374,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+211,"resp", false,-1, 1,0);
    tracep->declBus(c+375,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+210,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+237,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+376,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+235,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+377,"auto_in_awready", false,-1);
    tracep->declBit(c+378,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+379,"auto_in_wready", false,-1);
    tracep->declBit(c+380,"auto_in_wvalid", false,-1);
    tracep->declBus(c+36,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+381,"auto_in_wlast", false,-1);
    tracep->declBit(c+382,"auto_in_bready", false,-1);
    tracep->declBit(c+238,"auto_in_bvalid", false,-1);
    tracep->declBus(c+239,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_in_arready", false,-1);
    tracep->declBit(c+384,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1305,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+385,"auto_in_rready", false,-1);
    tracep->declBit(c+240,"auto_in_rvalid", false,-1);
    tracep->declBus(c+241,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_in_rlast", false,-1);
    tracep->declBit(c+242,"auto_out_awready", false,-1);
    tracep->declBit(c+386,"auto_out_awvalid", false,-1);
    tracep->declBus(c+365,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+387,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+243,"auto_out_wready", false,-1);
    tracep->declBit(c+388,"auto_out_wvalid", false,-1);
    tracep->declBus(c+28,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"auto_out_wlast", false,-1);
    tracep->declBit(c+244,"auto_out_bready", false,-1);
    tracep->declBit(c+245,"auto_out_bvalid", false,-1);
    tracep->declBus(c+239,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+246,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+247,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+248,"auto_out_arready", false,-1);
    tracep->declBit(c+390,"auto_out_arvalid", false,-1);
    tracep->declBus(c+367,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+391,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+385,"auto_out_rready", false,-1);
    tracep->declBit(c+240,"auto_out_rvalid", false,-1);
    tracep->declBus(c+241,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+249,"auto_out_rlast", false,-1);
    tracep->declBit(c+388,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+392,"w_idle", false,-1);
    tracep->declBit(c+250,"in_awready", false,-1);
    tracep->declBit(c+393,"busy", false,-1);
    tracep->declBus(c+394,"r_addr", false,-1, 31,0);
    tracep->declBus(c+395,"r_len", false,-1, 7,0);
    tracep->declBus(c+396,"len", false,-1, 7,0);
    tracep->declBus(c+40,"addr", false,-1, 31,0);
    tracep->declBit(c+397,"busy_1", false,-1);
    tracep->declBus(c+398,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+399,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+400,"len_1", false,-1, 7,0);
    tracep->declBus(c+41,"addr_1", false,-1, 31,0);
    tracep->declBit(c+401,"wbeats_latched", false,-1);
    tracep->declBit(c+386,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+402,"wbeats_valid", false,-1);
    tracep->declBus(c+403,"w_counter", false,-1, 8,0);
    tracep->declBus(c+404,"w_todo", false,-1, 8,0);
    tracep->declBit(c+389,"w_last", false,-1);
    tracep->declBit(c+244,"nodeOut_bready", false,-1);
    tracep->declBus(c+405,"error_0", false,-1, 1,0);
    tracep->declBus(c+406,"error_1", false,-1, 1,0);
    tracep->declBus(c+407,"error_2", false,-1, 1,0);
    tracep->declBus(c+408,"error_3", false,-1, 1,0);
    tracep->declBus(c+409,"error_4", false,-1, 1,0);
    tracep->declBus(c+410,"error_5", false,-1, 1,0);
    tracep->declBus(c+411,"error_6", false,-1, 1,0);
    tracep->declBus(c+412,"error_7", false,-1, 1,0);
    tracep->declBus(c+413,"error_8", false,-1, 1,0);
    tracep->declBus(c+414,"error_9", false,-1, 1,0);
    tracep->declBus(c+415,"error_10", false,-1, 1,0);
    tracep->declBus(c+416,"error_11", false,-1, 1,0);
    tracep->declBus(c+417,"error_12", false,-1, 1,0);
    tracep->declBus(c+418,"error_13", false,-1, 1,0);
    tracep->declBus(c+419,"error_14", false,-1, 1,0);
    tracep->declBus(c+420,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+383,"io_enq_ready", false,-1);
    tracep->declBit(c+384,"io_enq_valid", false,-1);
    tracep->declBus(c+1305,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+38,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1306,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1307,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+251,"io_deq_ready", false,-1);
    tracep->declBit(c+390,"io_deq_valid", false,-1);
    tracep->declBus(c+367,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+42,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+421,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+33,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+422,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+423,"ram", false,-1, 48,0);
    tracep->declBit(c+425,"full", false,-1);
    tracep->declBit(c+390,"io_deq_valid_0", false,-1);
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+377,"io_enq_ready", false,-1);
    tracep->declBit(c+378,"io_enq_valid", false,-1);
    tracep->declBus(c+1305,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+34,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1306,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+35,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1307,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+253,"io_deq_ready", false,-1);
    tracep->declBit(c+426,"io_deq_valid", false,-1);
    tracep->declBus(c+365,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+43,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+427,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+26,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+428,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+429,"ram", false,-1, 48,0);
    tracep->declBit(c+431,"full", false,-1);
    tracep->declBit(c+426,"io_deq_valid_0", false,-1);
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+379,"io_enq_ready", false,-1);
    tracep->declBit(c+380,"io_enq_valid", false,-1);
    tracep->declBus(c+36,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+37,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+381,"io_enq_bits_last", false,-1);
    tracep->declBit(c+255,"io_deq_ready", false,-1);
    tracep->declBit(c+432,"io_deq_valid", false,-1);
    tracep->declBus(c+28,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+29,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+433,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+434,"ram", false,-1, 36,0);
    tracep->declBit(c+436,"full", false,-1);
    tracep->declBit(c+432,"io_deq_valid_0", false,-1);
    tracep->declBit(c+256,"do_enq", false,-1);
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
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+257,"auto_in_awready", false,-1);
    tracep->declBit(c+44,"auto_in_awvalid", false,-1);
    tracep->declBus(c+365,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+130,"auto_in_wready", false,-1);
    tracep->declBit(c+46,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+258,"auto_in_bready", false,-1);
    tracep->declBit(c+437,"auto_in_bvalid", false,-1);
    tracep->declBus(c+438,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+439,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+259,"auto_in_arready", false,-1);
    tracep->declBit(c+47,"auto_in_arvalid", false,-1);
    tracep->declBus(c+367,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+260,"auto_in_rready", false,-1);
    tracep->declBit(c+440,"auto_in_rvalid", false,-1);
    tracep->declBus(c+441,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+443,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+259,"nodeIn_arready", false,-1);
    tracep->declBit(c+257,"nodeIn_awready", false,-1);
    tracep->declBit(c+49,"w_sel0", false,-1);
    tracep->declBit(c+437,"w_full", false,-1);
    tracep->declBus(c+438,"w_id", false,-1, 3,0);
    tracep->declBit(c+444,"r_sel1", false,-1);
    tracep->declBit(c+445,"w_sel1", false,-1);
    tracep->declBit(c+440,"r_full", false,-1);
    tracep->declBus(c+441,"r_id", false,-1, 3,0);
    tracep->declBit(c+261,"ren", false,-1);
    tracep->declBit(c+446,"rdata_REG", false,-1);
    tracep->declBus(c+447,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+448,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+449,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+450,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+50,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+261,"R0_en", false,-1);
    tracep->declBit(c+1231,"R0_clk", false,-1);
    tracep->declBus(c+451,"R0_data", false,-1, 31,0);
    tracep->declBus(c+51,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+262,"W0_en", false,-1);
    tracep->declBit(c+1231,"W0_clk", false,-1);
    tracep->declBus(c+28,"W0_data", false,-1, 31,0);
    tracep->declBus(c+29,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+377,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+378,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_anon_in_awburst", false,-1, 1,0);
    tracep->declBit(c+379,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+380,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+381,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+382,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+238,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+239,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+384,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_in_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_anon_in_arburst", false,-1, 1,0);
    tracep->declBit(c+385,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+240,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+241,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+377,"auto_anon_out_awready", false,-1);
    tracep->declBit(c+378,"auto_anon_out_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_anon_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_out_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_anon_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_anon_out_awburst", false,-1, 1,0);
    tracep->declBit(c+379,"auto_anon_out_wready", false,-1);
    tracep->declBit(c+380,"auto_anon_out_wvalid", false,-1);
    tracep->declBus(c+36,"auto_anon_out_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_anon_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+381,"auto_anon_out_wlast", false,-1);
    tracep->declBit(c+382,"auto_anon_out_bready", false,-1);
    tracep->declBit(c+238,"auto_anon_out_bvalid", false,-1);
    tracep->declBus(c+239,"auto_anon_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_bresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_anon_out_arready", false,-1);
    tracep->declBit(c+384,"auto_anon_out_arvalid", false,-1);
    tracep->declBus(c+1305,"auto_anon_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_anon_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_anon_out_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_anon_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_anon_out_arburst", false,-1, 1,0);
    tracep->declBit(c+385,"auto_anon_out_rready", false,-1);
    tracep->declBit(c+240,"auto_anon_out_rvalid", false,-1);
    tracep->declBus(c+241,"auto_anon_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_anon_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_anon_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+263,"auto_anon_in_awready", false,-1);
    tracep->declBit(c+452,"auto_anon_in_awvalid", false,-1);
    tracep->declBus(c+365,"auto_anon_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_anon_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_in_awsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_anon_in_wready", false,-1);
    tracep->declBit(c+388,"auto_anon_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"auto_anon_in_wlast", false,-1);
    tracep->declBit(c+244,"auto_anon_in_bready", false,-1);
    tracep->declBit(c+245,"auto_anon_in_bvalid", false,-1);
    tracep->declBus(c+239,"auto_anon_in_bid", false,-1, 3,0);
    tracep->declBus(c+246,"auto_anon_in_bresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_anon_in_arready", false,-1);
    tracep->declBit(c+453,"auto_anon_in_arvalid", false,-1);
    tracep->declBus(c+367,"auto_anon_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_in_arsize", false,-1, 2,0);
    tracep->declBit(c+385,"auto_anon_in_rready", false,-1);
    tracep->declBit(c+240,"auto_anon_in_rvalid", false,-1);
    tracep->declBus(c+241,"auto_anon_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_anon_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_anon_in_rresp", false,-1, 1,0);
    tracep->declBit(c+249,"auto_anon_in_rlast", false,-1);
    tracep->declBit(c+257,"auto_anon_out_2_awready", false,-1);
    tracep->declBit(c+44,"auto_anon_out_2_awvalid", false,-1);
    tracep->declBus(c+365,"auto_anon_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+45,"auto_anon_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+130,"auto_anon_out_2_wready", false,-1);
    tracep->declBit(c+46,"auto_anon_out_2_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+258,"auto_anon_out_2_bready", false,-1);
    tracep->declBit(c+437,"auto_anon_out_2_bvalid", false,-1);
    tracep->declBus(c+438,"auto_anon_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+439,"auto_anon_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+259,"auto_anon_out_2_arready", false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_arvalid", false,-1);
    tracep->declBus(c+367,"auto_anon_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+260,"auto_anon_out_2_rready", false,-1);
    tracep->declBit(c+440,"auto_anon_out_2_rvalid", false,-1);
    tracep->declBus(c+441,"auto_anon_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+442,"auto_anon_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+443,"auto_anon_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_anon_out_1_awvalid", false,-1);
    tracep->declBit(c+53,"auto_anon_out_1_wvalid", false,-1);
    tracep->declBit(c+454,"auto_anon_out_1_arready", false,-1);
    tracep->declBit(c+54,"auto_anon_out_1_arvalid", false,-1);
    tracep->declBus(c+367,"auto_anon_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_anon_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+131,"auto_anon_out_1_rready", false,-1);
    tracep->declBit(c+455,"auto_anon_out_1_rvalid", false,-1);
    tracep->declBus(c+456,"auto_anon_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+457,"auto_anon_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+23,"auto_anon_out_0_awready", false,-1);
    tracep->declBit(c+24,"auto_anon_out_0_awvalid", false,-1);
    tracep->declBus(c+365,"auto_anon_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_anon_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_anon_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+23,"auto_anon_out_0_wready", false,-1);
    tracep->declBit(c+27,"auto_anon_out_0_wvalid", false,-1);
    tracep->declBus(c+28,"auto_anon_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_anon_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+234,"auto_anon_out_0_bready", false,-1);
    tracep->declBit(c+235,"auto_anon_out_0_bvalid", false,-1);
    tracep->declBus(c+366,"auto_anon_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+210,"auto_anon_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_0_arready", false,-1);
    tracep->declBit(c+31,"auto_anon_out_0_arvalid", false,-1);
    tracep->declBus(c+367,"auto_anon_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_anon_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_anon_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+236,"auto_anon_out_0_rready", false,-1);
    tracep->declBit(c+237,"auto_anon_out_0_rvalid", false,-1);
    tracep->declBus(c+368,"auto_anon_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_anon_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+210,"auto_anon_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+245,"in_0_bvalid", false,-1);
    tracep->declBit(c+240,"in_0_rvalid", false,-1);
    tracep->declBit(c+265,"in_0_wready", false,-1);
    tracep->declBit(c+266,"in_0_awready", false,-1);
    tracep->declBit(c+264,"in_0_arready", false,-1);
    tracep->declBit(c+263,"anonIn_awready", false,-1);
    tracep->declBit(c+56,"requestARIO_0_0", false,-1);
    tracep->declBit(c+57,"requestARIO_0_1", false,-1);
    tracep->declBit(c+58,"requestARIO_0_2", false,-1);
    tracep->declBit(c+59,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+60,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+61,"requestAWIO_0_2", false,-1);
    tracep->declBus(c+458,"arSel", false,-1, 15,0);
    tracep->declBus(c+459,"awSel", false,-1, 15,0);
    tracep->declBus(c+267,"rSel", false,-1, 15,0);
    tracep->declBus(c+268,"bSel", false,-1, 15,0);
    tracep->declBit(c+460,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+461,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+462,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+463,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+464,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+465,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+466,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+467,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+468,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+469,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+470,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+471,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+472,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+473,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+474,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+475,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+476,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+477,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+478,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+479,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+480,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+481,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+482,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+483,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+484,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+485,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+486,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+487,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+488,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+489,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+490,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+491,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+492,"latched", false,-1);
    tracep->declBit(c+493,"in_0_awvalid", false,-1);
    tracep->declBit(c+494,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+495,"in_0_wvalid", false,-1);
    tracep->declBit(c+496,"idle_3", false,-1);
    tracep->declBit(c+269,"anyValid", false,-1);
    tracep->declBus(c+270,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+497,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+271,"readys_unready", false,-1, 5,0);
    tracep->declBus(c+272,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+273,"prefixOR_1", false,-1);
    tracep->declBit(c+274,"winner_3_1", false,-1);
    tracep->declBit(c+275,"winner_3_2", false,-1);
    tracep->declBit(c+498,"state_3_0", false,-1);
    tracep->declBit(c+499,"state_3_1", false,-1);
    tracep->declBit(c+500,"state_3_2", false,-1);
    tracep->declBit(c+276,"muxState_3_0", false,-1);
    tracep->declBit(c+277,"muxState_3_1", false,-1);
    tracep->declBit(c+278,"muxState_3_2", false,-1);
    tracep->declBit(c+501,"idle_4", false,-1);
    tracep->declBit(c+279,"anyValid_1", false,-1);
    tracep->declBus(c+280,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+502,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+281,"readys_unready_1", false,-1, 5,0);
    tracep->declBus(c+282,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+283,"winner_4_0", false,-1);
    tracep->declBit(c+284,"winner_4_2", false,-1);
    tracep->declBit(c+503,"state_4_0", false,-1);
    tracep->declBit(c+504,"state_4_2", false,-1);
    tracep->declBit(c+285,"muxState_4_0", false,-1);
    tracep->declBit(c+286,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+505,"io_enq_ready", false,-1);
    tracep->declBit(c+494,"io_enq_valid", false,-1);
    tracep->declBus(c+62,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+287,"io_deq_ready", false,-1);
    tracep->declBit(c+506,"io_deq_valid", false,-1);
    tracep->declBus(c+63,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+507,"wrap", false,-1);
    tracep->declBit(c+508,"wrap_1", false,-1);
    tracep->declBit(c+509,"maybe_full", false,-1);
    tracep->declBit(c+510,"ptr_match", false,-1);
    tracep->declBit(c+511,"empty", false,-1);
    tracep->declBit(c+512,"full", false,-1);
    tracep->declBit(c+506,"io_deq_valid_0", false,-1);
    tracep->declBit(c+288,"do_deq", false,-1);
    tracep->declBit(c+289,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+508,"R0_addr", false,-1);
    tracep->declBit(c+1308,"R0_en", false,-1);
    tracep->declBit(c+1231,"R0_clk", false,-1);
    tracep->declBus(c+513,"R0_data", false,-1, 2,0);
    tracep->declBit(c+507,"W0_addr", false,-1);
    tracep->declBit(c+289,"W0_en", false,-1);
    tracep->declBit(c+1231,"W0_clk", false,-1);
    tracep->declBus(c+62,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+514+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+242,"auto_in_awready", false,-1);
    tracep->declBit(c+386,"auto_in_awvalid", false,-1);
    tracep->declBus(c+365,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+387,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+243,"auto_in_wready", false,-1);
    tracep->declBit(c+388,"auto_in_wvalid", false,-1);
    tracep->declBus(c+28,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"auto_in_wlast", false,-1);
    tracep->declBit(c+244,"auto_in_bready", false,-1);
    tracep->declBit(c+245,"auto_in_bvalid", false,-1);
    tracep->declBus(c+239,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+246,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+247,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+248,"auto_in_arready", false,-1);
    tracep->declBit(c+390,"auto_in_arvalid", false,-1);
    tracep->declBus(c+367,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+391,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+385,"auto_in_rready", false,-1);
    tracep->declBit(c+240,"auto_in_rvalid", false,-1);
    tracep->declBus(c+241,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+129,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+249,"auto_in_rlast", false,-1);
    tracep->declBit(c+263,"auto_out_awready", false,-1);
    tracep->declBit(c+452,"auto_out_awvalid", false,-1);
    tracep->declBus(c+365,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+25,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+26,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+243,"auto_out_wready", false,-1);
    tracep->declBit(c+388,"auto_out_wvalid", false,-1);
    tracep->declBus(c+28,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+29,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+389,"auto_out_wlast", false,-1);
    tracep->declBit(c+244,"auto_out_bready", false,-1);
    tracep->declBit(c+245,"auto_out_bvalid", false,-1);
    tracep->declBus(c+239,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+246,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+264,"auto_out_arready", false,-1);
    tracep->declBit(c+453,"auto_out_arvalid", false,-1);
    tracep->declBus(c+367,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+32,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+33,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+385,"auto_out_rready", false,-1);
    tracep->declBit(c+240,"auto_out_rvalid", false,-1);
    tracep->declBus(c+241,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+249,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+516,"io_enq_ready", false,-1);
    tracep->declBit(c+132,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+290,"io_deq_ready", false,-1);
    tracep->declBit(c+517,"io_deq_valid", false,-1);
    tracep->declBit(c+518,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+517,"full", false,-1);
    tracep->declBit(c+518,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+519,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+520,"io_enq_ready", false,-1);
    tracep->declBit(c+133,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+291,"io_deq_ready", false,-1);
    tracep->declBit(c+521,"io_deq_valid", false,-1);
    tracep->declBit(c+522,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+521,"full", false,-1);
    tracep->declBit(c+522,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+523,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+524,"io_enq_ready", false,-1);
    tracep->declBit(c+134,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+292,"io_deq_ready", false,-1);
    tracep->declBit(c+525,"io_deq_valid", false,-1);
    tracep->declBit(c+526,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+525,"full", false,-1);
    tracep->declBit(c+526,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+527,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+528,"io_enq_ready", false,-1);
    tracep->declBit(c+135,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+293,"io_deq_ready", false,-1);
    tracep->declBit(c+529,"io_deq_valid", false,-1);
    tracep->declBit(c+530,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+529,"full", false,-1);
    tracep->declBit(c+530,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+531,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+532,"io_enq_ready", false,-1);
    tracep->declBit(c+136,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+294,"io_deq_ready", false,-1);
    tracep->declBit(c+533,"io_deq_valid", false,-1);
    tracep->declBit(c+534,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+533,"full", false,-1);
    tracep->declBit(c+534,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+535,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+536,"io_enq_ready", false,-1);
    tracep->declBit(c+137,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+295,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBit(c+538,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+537,"full", false,-1);
    tracep->declBit(c+538,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+539,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+540,"io_enq_ready", false,-1);
    tracep->declBit(c+138,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+296,"io_deq_ready", false,-1);
    tracep->declBit(c+541,"io_deq_valid", false,-1);
    tracep->declBit(c+542,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+541,"full", false,-1);
    tracep->declBit(c+542,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+543,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+544,"io_enq_ready", false,-1);
    tracep->declBit(c+139,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+297,"io_deq_ready", false,-1);
    tracep->declBit(c+545,"io_deq_valid", false,-1);
    tracep->declBit(c+546,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+545,"full", false,-1);
    tracep->declBit(c+546,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+547,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+548,"io_enq_ready", false,-1);
    tracep->declBit(c+140,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+298,"io_deq_ready", false,-1);
    tracep->declBit(c+549,"io_deq_valid", false,-1);
    tracep->declBit(c+550,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+549,"full", false,-1);
    tracep->declBit(c+550,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+551,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+552,"io_enq_ready", false,-1);
    tracep->declBit(c+141,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+299,"io_deq_ready", false,-1);
    tracep->declBit(c+553,"io_deq_valid", false,-1);
    tracep->declBit(c+554,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+553,"full", false,-1);
    tracep->declBit(c+554,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+555,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+556,"io_enq_ready", false,-1);
    tracep->declBit(c+142,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+300,"io_deq_ready", false,-1);
    tracep->declBit(c+557,"io_deq_valid", false,-1);
    tracep->declBit(c+558,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+557,"full", false,-1);
    tracep->declBit(c+558,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+559,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+560,"io_enq_ready", false,-1);
    tracep->declBit(c+143,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+301,"io_deq_ready", false,-1);
    tracep->declBit(c+561,"io_deq_valid", false,-1);
    tracep->declBit(c+562,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+561,"full", false,-1);
    tracep->declBit(c+562,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+563,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+564,"io_enq_ready", false,-1);
    tracep->declBit(c+144,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+302,"io_deq_ready", false,-1);
    tracep->declBit(c+565,"io_deq_valid", false,-1);
    tracep->declBit(c+566,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+565,"full", false,-1);
    tracep->declBit(c+566,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+567,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+568,"io_enq_ready", false,-1);
    tracep->declBit(c+145,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+303,"io_deq_ready", false,-1);
    tracep->declBit(c+569,"io_deq_valid", false,-1);
    tracep->declBit(c+570,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+569,"full", false,-1);
    tracep->declBit(c+570,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+571,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+572,"io_enq_ready", false,-1);
    tracep->declBit(c+146,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+304,"io_deq_ready", false,-1);
    tracep->declBit(c+573,"io_deq_valid", false,-1);
    tracep->declBit(c+574,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+573,"full", false,-1);
    tracep->declBit(c+574,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+575,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+576,"io_enq_ready", false,-1);
    tracep->declBit(c+147,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+305,"io_deq_ready", false,-1);
    tracep->declBit(c+577,"io_deq_valid", false,-1);
    tracep->declBit(c+578,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+577,"full", false,-1);
    tracep->declBit(c+578,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+579,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+580,"io_enq_ready", false,-1);
    tracep->declBit(c+148,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+306,"io_deq_ready", false,-1);
    tracep->declBit(c+581,"io_deq_valid", false,-1);
    tracep->declBit(c+582,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+581,"full", false,-1);
    tracep->declBit(c+582,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+583,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+584,"io_enq_ready", false,-1);
    tracep->declBit(c+149,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+307,"io_deq_ready", false,-1);
    tracep->declBit(c+585,"io_deq_valid", false,-1);
    tracep->declBit(c+586,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+585,"full", false,-1);
    tracep->declBit(c+586,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+587,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+588,"io_enq_ready", false,-1);
    tracep->declBit(c+150,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+308,"io_deq_ready", false,-1);
    tracep->declBit(c+589,"io_deq_valid", false,-1);
    tracep->declBit(c+590,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+589,"full", false,-1);
    tracep->declBit(c+590,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+591,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+592,"io_enq_ready", false,-1);
    tracep->declBit(c+151,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+309,"io_deq_ready", false,-1);
    tracep->declBit(c+593,"io_deq_valid", false,-1);
    tracep->declBit(c+594,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+593,"full", false,-1);
    tracep->declBit(c+594,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+595,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+596,"io_enq_ready", false,-1);
    tracep->declBit(c+152,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+310,"io_deq_ready", false,-1);
    tracep->declBit(c+597,"io_deq_valid", false,-1);
    tracep->declBit(c+598,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+597,"full", false,-1);
    tracep->declBit(c+598,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+599,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+600,"io_enq_ready", false,-1);
    tracep->declBit(c+153,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+311,"io_deq_ready", false,-1);
    tracep->declBit(c+601,"io_deq_valid", false,-1);
    tracep->declBit(c+602,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+601,"full", false,-1);
    tracep->declBit(c+602,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+603,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+604,"io_enq_ready", false,-1);
    tracep->declBit(c+154,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+312,"io_deq_ready", false,-1);
    tracep->declBit(c+605,"io_deq_valid", false,-1);
    tracep->declBit(c+606,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+605,"full", false,-1);
    tracep->declBit(c+606,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+607,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+608,"io_enq_ready", false,-1);
    tracep->declBit(c+155,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+313,"io_deq_ready", false,-1);
    tracep->declBit(c+609,"io_deq_valid", false,-1);
    tracep->declBit(c+610,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+609,"full", false,-1);
    tracep->declBit(c+610,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+611,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+612,"io_enq_ready", false,-1);
    tracep->declBit(c+156,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+314,"io_deq_ready", false,-1);
    tracep->declBit(c+613,"io_deq_valid", false,-1);
    tracep->declBit(c+614,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+613,"full", false,-1);
    tracep->declBit(c+614,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+615,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+616,"io_enq_ready", false,-1);
    tracep->declBit(c+157,"io_enq_valid", false,-1);
    tracep->declBit(c+387,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+315,"io_deq_ready", false,-1);
    tracep->declBit(c+617,"io_deq_valid", false,-1);
    tracep->declBit(c+618,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+617,"full", false,-1);
    tracep->declBit(c+618,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+619,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+620,"io_enq_ready", false,-1);
    tracep->declBit(c+158,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+316,"io_deq_ready", false,-1);
    tracep->declBit(c+621,"io_deq_valid", false,-1);
    tracep->declBit(c+622,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+621,"full", false,-1);
    tracep->declBit(c+622,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+623,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+624,"io_enq_ready", false,-1);
    tracep->declBit(c+159,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+317,"io_deq_ready", false,-1);
    tracep->declBit(c+625,"io_deq_valid", false,-1);
    tracep->declBit(c+626,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+625,"full", false,-1);
    tracep->declBit(c+626,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+627,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+628,"io_enq_ready", false,-1);
    tracep->declBit(c+160,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+318,"io_deq_ready", false,-1);
    tracep->declBit(c+629,"io_deq_valid", false,-1);
    tracep->declBit(c+630,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+629,"full", false,-1);
    tracep->declBit(c+630,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+631,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+632,"io_enq_ready", false,-1);
    tracep->declBit(c+161,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+319,"io_deq_ready", false,-1);
    tracep->declBit(c+633,"io_deq_valid", false,-1);
    tracep->declBit(c+634,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+633,"full", false,-1);
    tracep->declBit(c+634,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+635,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+636,"io_enq_ready", false,-1);
    tracep->declBit(c+162,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+320,"io_deq_ready", false,-1);
    tracep->declBit(c+637,"io_deq_valid", false,-1);
    tracep->declBit(c+638,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+637,"full", false,-1);
    tracep->declBit(c+638,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+639,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+640,"io_enq_ready", false,-1);
    tracep->declBit(c+163,"io_enq_valid", false,-1);
    tracep->declBit(c+391,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+321,"io_deq_ready", false,-1);
    tracep->declBit(c+641,"io_deq_valid", false,-1);
    tracep->declBit(c+642,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+641,"full", false,-1);
    tracep->declBit(c+642,"ram_real_last", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+643,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+377,"auto_master_out_awready", false,-1);
    tracep->declBit(c+378,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1305,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+34,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+379,"auto_master_out_wready", false,-1);
    tracep->declBit(c+380,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+36,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+381,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+382,"auto_master_out_bready", false,-1);
    tracep->declBit(c+238,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+239,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+383,"auto_master_out_arready", false,-1);
    tracep->declBit(c+384,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1305,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1306,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+385,"auto_master_out_rready", false,-1);
    tracep->declBit(c+240,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+241,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+128,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1261,"reset", false,-1);
    tracep->declBit(c+1300,"io_interrupt", false,-1);
    tracep->declBit(c+377,"io_master_awready", false,-1);
    tracep->declBit(c+378,"io_master_awvalid", false,-1);
    tracep->declBus(c+34,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+379,"io_master_wready", false,-1);
    tracep->declBit(c+380,"io_master_wvalid", false,-1);
    tracep->declBus(c+36,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+381,"io_master_wlast", false,-1);
    tracep->declBit(c+382,"io_master_bready", false,-1);
    tracep->declBit(c+238,"io_master_bvalid", false,-1);
    tracep->declBus(c+126,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+239,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+383,"io_master_arready", false,-1);
    tracep->declBit(c+384,"io_master_arvalid", false,-1);
    tracep->declBus(c+38,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+385,"io_master_rready", false,-1);
    tracep->declBit(c+240,"io_master_rvalid", false,-1);
    tracep->declBus(c+1260,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+127,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+128,"io_master_rlast", false,-1);
    tracep->declBus(c+241,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1300,"io_slave_awready", false,-1);
    tracep->declBit(c+1300,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1309,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1310,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1300,"io_slave_wready", false,-1);
    tracep->declBit(c+1300,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1309,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"io_slave_wlast", false,-1);
    tracep->declBit(c+1300,"io_slave_bready", false,-1);
    tracep->declBit(c+1300,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1307,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1305,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1300,"io_slave_arready", false,-1);
    tracep->declBit(c+1300,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1309,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1305,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1310,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1300,"io_slave_rready", false,-1);
    tracep->declBit(c+1300,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1307,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1309,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1300,"io_slave_rlast", false,-1);
    tracep->declBus(c+1305,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+64,"dnpc", false,-1, 31,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"func3", false,-1, 2,0);
    tracep->declBus(c+5,"func7", false,-1, 6,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->declBus(c+1311,"rdata", false,-1, 31,0);
    tracep->declBus(c+644,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+645,"pc_add_4_out", false,-1, 31,0);
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
    tracep->declBus(c+646,"a0", false,-1, 31,0);
    tracep->declBus(c+15,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+16,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+75,"w_csr_en", false,-1);
    tracep->declBit(c+76,"r_csr_en", false,-1);
    tracep->declBit(c+77,"w_csr_ecall", false,-1);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+647,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+648,"IFU_valid", false,-1);
    tracep->declBit(c+649,"EXU_valid", false,-1);
    tracep->declBit(c+650,"LSU_valid", false,-1);
    tracep->declBit(c+651,"LSU_ready", false,-1);
    tracep->declBus(c+652,"LSU_valid_int", false,-1, 31,0);
    tracep->declBus(c+647,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+653,"M0_arvalid", false,-1);
    tracep->declBit(c+654,"M0_arready", false,-1);
    tracep->declBus(c+1305,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+322,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1262,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+323,"M0_rvalid", false,-1);
    tracep->declBit(c+648,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1309,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1300,"M0_awvalid", false,-1);
    tracep->declBit(c+655,"M0_awready", false,-1);
    tracep->declBus(c+1305,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1309,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1313,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"M0_wvalid", false,-1);
    tracep->declBit(c+656,"M0_wready", false,-1);
    tracep->declBit(c+1300,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1308,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"M1_arvalid", false,-1);
    tracep->declBit(c+658,"M1_arready", false,-1);
    tracep->declBus(c+1305,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+324,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1263,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+325,"M1_rvalid", false,-1);
    tracep->declBit(c+659,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+660,"M1_awvalid", false,-1);
    tracep->declBit(c+661,"M1_awready", false,-1);
    tracep->declBus(c+1305,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+662,"M1_wvalid", false,-1);
    tracep->declBit(c+663,"M1_wready", false,-1);
    tracep->declBit(c+662,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+664,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+83,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+665,"S0_arvalid", false,-1);
    tracep->declBit(c+666,"S0_arready", false,-1);
    tracep->declBus(c+1305,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+326,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+327,"S0_rvalid", false,-1);
    tracep->declBit(c+667,"S0_rready", false,-1);
    tracep->declBit(c+174,"S0_rlast", false,-1);
    tracep->declBus(c+175,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+85,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+668,"S0_awvalid", false,-1);
    tracep->declBit(c+669,"S0_awready", false,-1);
    tracep->declBus(c+1305,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+670,"S0_wvalid", false,-1);
    tracep->declBit(c+671,"S0_wready", false,-1);
    tracep->declBit(c+670,"S0_wlast", false,-1);
    tracep->declBus(c+176,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+328,"S0_bvalid", false,-1);
    tracep->declBit(c+672,"S0_bready", false,-1);
    tracep->declBus(c+177,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1314,"sram_araddr", false,-1, 31,0);
    tracep->declBit(c+1315,"sram_arvalid", false,-1);
    tracep->declBit(c+1316,"sram_arready", false,-1);
    tracep->declBus(c+1317,"sram_arid", false,-1, 3,0);
    tracep->declBus(c+1318,"sram_arlen", false,-1, 7,0);
    tracep->declBus(c+1319,"sram_arsize", false,-1, 2,0);
    tracep->declBus(c+1320,"sram_arburst", false,-1, 1,0);
    tracep->declBus(c+1321,"sram_rdata", false,-1, 31,0);
    tracep->declBus(c+1322,"sram_rresp", false,-1, 1,0);
    tracep->declBit(c+1323,"sram_rvalid", false,-1);
    tracep->declBit(c+1324,"sram_rready", false,-1);
    tracep->declBit(c+1325,"sram_rlast", false,-1);
    tracep->declBus(c+1326,"sram_rid", false,-1, 3,0);
    tracep->declBus(c+1327,"sram_awaddr", false,-1, 31,0);
    tracep->declBit(c+1328,"sram_awvalid", false,-1);
    tracep->declBit(c+1329,"sram_awready", false,-1);
    tracep->declBus(c+1330,"sram_awid", false,-1, 3,0);
    tracep->declBus(c+1331,"sram_awlen", false,-1, 7,0);
    tracep->declBus(c+1332,"sram_awsize", false,-1, 2,0);
    tracep->declBus(c+1333,"sram_awburst", false,-1, 1,0);
    tracep->declBus(c+1334,"sram_wdata", false,-1, 31,0);
    tracep->declBus(c+1335,"sram_wstrb", false,-1, 3,0);
    tracep->declBit(c+1336,"sram_wvalid", false,-1);
    tracep->declBit(c+1337,"sram_wready", false,-1);
    tracep->declBit(c+1338,"sram_wlast", false,-1);
    tracep->declBus(c+1339,"sram_bresp", false,-1, 1,0);
    tracep->declBit(c+1340,"sram_bvalid", false,-1);
    tracep->declBit(c+1341,"sram_bready", false,-1);
    tracep->declBus(c+1342,"sram_bid", false,-1, 3,0);
    tracep->declBus(c+1343,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1344,"uart_arvalid", false,-1);
    tracep->declBit(c+1345,"uart_arready", false,-1);
    tracep->declBus(c+1346,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1347,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1348,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1349,"uart_arburst", false,-1, 1,0);
    tracep->declBus(c+1350,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1351,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1352,"uart_rvalid", false,-1);
    tracep->declBit(c+1353,"uart_rready", false,-1);
    tracep->declBit(c+1354,"uart_rlast", false,-1);
    tracep->declBus(c+1355,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1356,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1357,"uart_awvalid", false,-1);
    tracep->declBit(c+1358,"uart_awready", false,-1);
    tracep->declBus(c+1359,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1360,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1361,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1362,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1363,"uart_wdata", false,-1, 31,0);
    tracep->declBus(c+1364,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1365,"uart_wvalid", false,-1);
    tracep->declBit(c+1366,"uart_wready", false,-1);
    tracep->declBit(c+1367,"uart_wlast", false,-1);
    tracep->declBus(c+1368,"uart_bresp", false,-1, 1,0);
    tracep->declBit(c+1369,"uart_bvalid", false,-1);
    tracep->declBit(c+1370,"uart_bready", false,-1);
    tracep->declBus(c+1371,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+89,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+673,"clint_arvalid", false,-1);
    tracep->declBit(c+674,"clint_arready", false,-1);
    tracep->declBus(c+1305,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"clint_arburst", false,-1, 1,0);
    tracep->declBus(c+675,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"clint_rvalid", false,-1);
    tracep->declBit(c+677,"clint_rready", false,-1);
    tracep->declBit(c+676,"clint_rlast", false,-1);
    tracep->declBus(c+1305,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+91,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+678,"clint_awvalid", false,-1);
    tracep->declBit(c+679,"clint_awready", false,-1);
    tracep->declBus(c+1305,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+93,"clint_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+680,"clint_wvalid", false,-1);
    tracep->declBit(c+681,"clint_wready", false,-1);
    tracep->declBit(c+682,"clint_wlast", false,-1);
    tracep->declBus(c+1307,"clint_bresp", false,-1, 1,0);
    tracep->declBit(c+683,"clint_bvalid", false,-1);
    tracep->declBit(c+684,"clint_bready", false,-1);
    tracep->declBus(c+1305,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+685,"IFU_valid_delay", false,-1);
    tracep->declBit(c+686,"IFU_valid_rising_edge", false,-1);
    tracep->declBit(c+687,"LSU_rready_delay", false,-1);
    tracep->declBit(c+688,"LSU_rready_rising_edge", false,-1);
    tracep->pushNamePrefix("i_Csr ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+15,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+16,"r_csr_addr", false,-1, 11,0);
    tracep->declBit(c+75,"w_csr_en", false,-1);
    tracep->declBit(c+76,"r_csr_en", false,-1);
    tracep->declBit(c+77,"w_csr_ecall", false,-1);
    tracep->declBus(c+647,"pc", false,-1, 31,0);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+689,"mepc", false,-1, 31,0);
    tracep->declBus(c+690,"mstatus", false,-1, 31,0);
    tracep->declBus(c+691,"mcause", false,-1, 31,0);
    tracep->declBus(c+692,"mtvec", false,-1, 31,0);
    tracep->declBus(c+693,"mvendorid", false,-1, 31,0);
    tracep->declBus(c+694,"marchid", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_CsrProcessor ");
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+14,"w_csr_data_ctrl", false,-1, 3,0);
    tracep->declBus(c+183,"w_csr_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_IFU ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+647,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+648,"IFU_valid", false,-1);
    tracep->declBit(c+651,"LSU_ready", false,-1);
    tracep->declBus(c+647,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+653,"M0_arvalid", false,-1);
    tracep->declBit(c+654,"M0_arready", false,-1);
    tracep->declBus(c+1305,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+322,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1262,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+323,"M0_rvalid", false,-1);
    tracep->declBit(c+648,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1309,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1300,"M0_awvalid", false,-1);
    tracep->declBit(c+655,"M0_awready", false,-1);
    tracep->declBus(c+1305,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1309,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1313,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"M0_wvalid", false,-1);
    tracep->declBit(c+656,"M0_wready", false,-1);
    tracep->declBit(c+1300,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1308,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBit(c+654,"arready", false,-1);
    tracep->declBus(c+1262,"rresp", false,-1, 1,0);
    tracep->declBit(c+655,"awready", false,-1);
    tracep->declBit(c+656,"wready", false,-1);
    tracep->declBus(c+166,"bresp", false,-1, 1,0);
    tracep->declBit(c+167,"bvalid", false,-1);
    tracep->declBit(c+323,"rvalid", false,-1);
    tracep->declBit(c+648,"rready", false,-1);
    tracep->declBit(c+695,"rvalid_prev", false,-1);
    tracep->declBit(c+653,"arvalid", false,-1);
    tracep->declBus(c+696,"state", false,-1, 2,0);
    tracep->declBus(c+329,"next_state", false,-1, 2,0);
    tracep->declBit(c+1372,"start_read_delay", false,-1);
    tracep->declBus(c+697,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+698,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+699,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+700,"random_delay", false,-1, 7,0);
    tracep->declBus(c+1310,"ysyx_24120011_IFU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1299,"ysyx_24120011_IFU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1312,"ysyx_24120011_IFU_M_AXI_RDATA", false,-1, 2,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBus(c+699,"in", false,-1, 7,0);
    tracep->declBus(c+700,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_LSU ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBit(c+649,"EXU_valid", false,-1);
    tracep->declBus(c+70,"w_mem_addr", false,-1, 31,0);
    tracep->declBus(c+70,"r_mem_addr", false,-1, 31,0);
    tracep->declBus(c+11,"w_mem_len", false,-1, 7,0);
    tracep->declBus(c+12,"r_mem_len", false,-1, 7,0);
    tracep->declBit(c+72,"w_mem_en", false,-1);
    tracep->declBit(c+73,"r_mem_en", false,-1);
    tracep->declBit(c+10,"sign_extension", false,-1);
    tracep->declBus(c+67,"w_mem_data", false,-1, 31,0);
    tracep->declBus(c+644,"r_mem_data", false,-1, 31,0);
    tracep->declBit(c+650,"LSU_valid", false,-1);
    tracep->declBit(c+651,"LSU_ready", false,-1);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"M1_arvalid", false,-1);
    tracep->declBit(c+658,"M1_arready", false,-1);
    tracep->declBus(c+1305,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+324,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1263,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+325,"M1_rvalid", false,-1);
    tracep->declBit(c+659,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+660,"M1_awvalid", false,-1);
    tracep->declBit(c+661,"M1_awready", false,-1);
    tracep->declBus(c+1305,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+662,"M1_wvalid", false,-1);
    tracep->declBit(c+663,"M1_wready", false,-1);
    tracep->declBit(c+662,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+664,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+1310,"ysyx_24120011_LSU_M_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1299,"ysyx_24120011_LSU_M_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1312,"ysyx_24120011_LSU_M_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1373,"ysyx_24120011_LSU_M_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1374,"ysyx_24120011_LSU_M_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1375,"ysyx_24120011_LSU_M_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1307,"ysyx_24120011_LSU_M_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+701,"state", false,-1, 2,0);
    tracep->declBus(c+330,"next_state", false,-1, 2,0);
    tracep->declBit(c+702,"start_read_delay", false,-1);
    tracep->declBit(c+703,"start_write_delay", false,-1);
    tracep->declBus(c+70,"araddr", false,-1, 31,0);
    tracep->declBit(c+657,"arvalid", false,-1);
    tracep->declBit(c+658,"arready", false,-1);
    tracep->declBit(c+659,"rready", false,-1);
    tracep->declBus(c+1263,"rresp", false,-1, 1,0);
    tracep->declBit(c+325,"rvalid", false,-1);
    tracep->declBit(c+660,"awvalid", false,-1);
    tracep->declBit(c+661,"awready", false,-1);
    tracep->declBus(c+70,"awaddr", false,-1, 31,0);
    tracep->declBit(c+662,"wvalid", false,-1);
    tracep->declBit(c+663,"wready", false,-1);
    tracep->declBus(c+81,"wdata", false,-1, 31,0);
    tracep->declBus(c+171,"bresp", false,-1, 1,0);
    tracep->declBus(c+82,"wstrb", false,-1, 3,0);
    tracep->declBit(c+664,"bready", false,-1);
    tracep->declBus(c+324,"rdata", false,-1, 31,0);
    tracep->declBit(c+172,"bvalid", false,-1);
    tracep->declBit(c+704,"LSU_working", false,-1);
    tracep->declBus(c+705,"arvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+706,"awvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+707,"wvalid_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+708,"rready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+709,"bready_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+710,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+711,"random_delay", false,-1, 7,0);
    tracep->declBus(c+82,"reg_wstrb", false,-1, 3,0);
    tracep->declBus(c+81,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+95,"wdata_format", false,-1, 5,0);
    tracep->declBus(c+331,"rdata_mask", false,-1, 31,0);
    tracep->pushNamePrefix("i0_LFSR ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBus(c+710,"in", false,-1, 7,0);
    tracep->declBus(c+711,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("i_PCProcessor ");
    tracep->declBus(c+647,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+7,"pc_ctrl", false,-1, 1,0);
    tracep->declBit(c+74,"b_type_enter_if", false,-1);
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+645,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+64,"dnpc", false,-1, 31,0);
    tracep->declBus(c+645,"pc_add_4", false,-1, 31,0);
    tracep->declBus(c+68,"pc_add_imme", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_RegStack ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBit(c+71,"w_en", false,-1);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"rs1", false,-1, 4,0);
    tracep->declBus(c+2,"rs2", false,-1, 4,0);
    tracep->declBus(c+66,"src1", false,-1, 31,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+646,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+712+i*1,"Regs", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+744+i*1,"regout", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_WBU ");
    tracep->declBus(c+68,"pc_add_imme_out", false,-1, 31,0);
    tracep->declBus(c+645,"pc_add_4_out", false,-1, 31,0);
    tracep->declBus(c+70,"alu_result", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+644,"r_mem_data", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+8,"rd_ctrl", false,-1, 3,0);
    tracep->declBit(c+650,"LSU_valid", false,-1);
    tracep->declBit(c+71,"w_en", false,-1);
    tracep->declBus(c+65,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("i_pc ");
    tracep->declBus(c+1376,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1377,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+64,"din", false,-1, 31,0);
    tracep->declBus(c+647,"dout", false,-1, 31,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Arbiter ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+647,"M0_araddr", false,-1, 31,0);
    tracep->declBit(c+653,"M0_arvalid", false,-1);
    tracep->declBit(c+654,"M0_arready", false,-1);
    tracep->declBus(c+1305,"M0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_arlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_arburst", false,-1, 1,0);
    tracep->declBus(c+322,"M0_rdata", false,-1, 31,0);
    tracep->declBus(c+1262,"M0_rresp", false,-1, 1,0);
    tracep->declBit(c+323,"M0_rvalid", false,-1);
    tracep->declBit(c+648,"M0_rready", false,-1);
    tracep->declBit(c+164,"M0_rlast", false,-1);
    tracep->declBus(c+165,"M0_rid", false,-1, 3,0);
    tracep->declBus(c+1309,"M0_awaddr", false,-1, 31,0);
    tracep->declBit(c+1300,"M0_awvalid", false,-1);
    tracep->declBit(c+655,"M0_awready", false,-1);
    tracep->declBus(c+1305,"M0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M0_awlen", false,-1, 7,0);
    tracep->declBus(c+1312,"M0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M0_awburst", false,-1, 1,0);
    tracep->declBus(c+1309,"M0_wdata", false,-1, 31,0);
    tracep->declBus(c+1313,"M0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1300,"M0_wvalid", false,-1);
    tracep->declBit(c+656,"M0_wready", false,-1);
    tracep->declBit(c+1300,"M0_wlast", false,-1);
    tracep->declBus(c+166,"M0_bresp", false,-1, 1,0);
    tracep->declBit(c+167,"M0_bvalid", false,-1);
    tracep->declBit(c+1308,"M0_bready", false,-1);
    tracep->declBus(c+168,"M0_bid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_araddr", false,-1, 31,0);
    tracep->declBit(c+657,"M1_arvalid", false,-1);
    tracep->declBit(c+658,"M1_arready", false,-1);
    tracep->declBus(c+1305,"M1_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_arlen", false,-1, 7,0);
    tracep->declBus(c+79,"M1_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_arburst", false,-1, 1,0);
    tracep->declBus(c+324,"M1_rdata", false,-1, 31,0);
    tracep->declBus(c+1263,"M1_rresp", false,-1, 1,0);
    tracep->declBit(c+325,"M1_rvalid", false,-1);
    tracep->declBit(c+659,"M1_rready", false,-1);
    tracep->declBit(c+169,"M1_rlast", false,-1);
    tracep->declBus(c+170,"M1_rid", false,-1, 3,0);
    tracep->declBus(c+70,"M1_awaddr", false,-1, 31,0);
    tracep->declBit(c+660,"M1_awvalid", false,-1);
    tracep->declBit(c+661,"M1_awready", false,-1);
    tracep->declBus(c+1305,"M1_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"M1_awlen", false,-1, 7,0);
    tracep->declBus(c+80,"M1_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"M1_awburst", false,-1, 1,0);
    tracep->declBus(c+81,"M1_wdata", false,-1, 31,0);
    tracep->declBus(c+82,"M1_wstrb", false,-1, 3,0);
    tracep->declBit(c+662,"M1_wvalid", false,-1);
    tracep->declBit(c+663,"M1_wready", false,-1);
    tracep->declBit(c+662,"M1_wlast", false,-1);
    tracep->declBus(c+171,"M1_bresp", false,-1, 1,0);
    tracep->declBit(c+172,"M1_bvalid", false,-1);
    tracep->declBit(c+664,"M1_bready", false,-1);
    tracep->declBus(c+173,"M1_bid", false,-1, 3,0);
    tracep->declBus(c+83,"S0_araddr", false,-1, 31,0);
    tracep->declBit(c+665,"S0_arvalid", false,-1);
    tracep->declBit(c+666,"S0_arready", false,-1);
    tracep->declBus(c+1305,"S0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"S0_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"S0_arburst", false,-1, 1,0);
    tracep->declBus(c+326,"S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"S0_rresp", false,-1, 1,0);
    tracep->declBit(c+327,"S0_rvalid", false,-1);
    tracep->declBit(c+667,"S0_rready", false,-1);
    tracep->declBit(c+174,"S0_rlast", false,-1);
    tracep->declBus(c+175,"S0_rid", false,-1, 3,0);
    tracep->declBus(c+85,"S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+668,"S0_awvalid", false,-1);
    tracep->declBit(c+669,"S0_awready", false,-1);
    tracep->declBus(c+1305,"S0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"S0_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"S0_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"S0_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+670,"S0_wvalid", false,-1);
    tracep->declBit(c+671,"S0_wready", false,-1);
    tracep->declBit(c+670,"S0_wlast", false,-1);
    tracep->declBus(c+176,"S0_bresp", false,-1, 1,0);
    tracep->declBit(c+328,"S0_bvalid", false,-1);
    tracep->declBit(c+672,"S0_bready", false,-1);
    tracep->declBus(c+177,"S0_bid", false,-1, 3,0);
    tracep->declBus(c+1310,"ysyx_24120011_Arbiter_IDLE", false,-1, 2,0);
    tracep->declBus(c+1299,"ysyx_24120011_Arbiter_M0", false,-1, 2,0);
    tracep->declBus(c+1312,"ysyx_24120011_Arbiter_M1", false,-1, 2,0);
    tracep->declBus(c+776,"read_state", false,-1, 2,0);
    tracep->declBus(c+332,"read_next_state", false,-1, 2,0);
    tracep->declBus(c+777,"write_state", false,-1, 2,0);
    tracep->declBus(c+333,"write_next_state", false,-1, 2,0);
    tracep->declBus(c+778,"last_read_master", false,-1, 2,0);
    tracep->declBus(c+779,"last_write_master", false,-1, 2,0);
    tracep->declBit(c+334,"read_done", false,-1);
    tracep->declBit(c+335,"write_done", false,-1);
    tracep->declBus(c+1378,"read_choose", false,-1, 2,0);
    tracep->declBus(c+1379,"write_choose", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_24120011_Clint ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+89,"araddr", false,-1, 31,0);
    tracep->declBit(c+673,"arvalid", false,-1);
    tracep->declBit(c+674,"arready", false,-1);
    tracep->declBus(c+1305,"arid", false,-1, 3,0);
    tracep->declBus(c+1306,"arlen", false,-1, 7,0);
    tracep->declBus(c+90,"arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"arburst", false,-1, 1,0);
    tracep->declBus(c+675,"rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"rresp", false,-1, 1,0);
    tracep->declBit(c+676,"rvalid", false,-1);
    tracep->declBit(c+677,"rready", false,-1);
    tracep->declBit(c+676,"rlast", false,-1);
    tracep->declBus(c+1305,"rid", false,-1, 3,0);
    tracep->declBus(c+91,"awaddr", false,-1, 31,0);
    tracep->declBit(c+678,"awvalid", false,-1);
    tracep->declBit(c+679,"awready", false,-1);
    tracep->declBus(c+1305,"awid", false,-1, 3,0);
    tracep->declBus(c+1306,"awlen", false,-1, 7,0);
    tracep->declBus(c+92,"awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"awburst", false,-1, 1,0);
    tracep->declBus(c+93,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"wstrb", false,-1, 3,0);
    tracep->declBit(c+680,"wvalid", false,-1);
    tracep->declBit(c+681,"wready", false,-1);
    tracep->declBit(c+682,"wlast", false,-1);
    tracep->declBus(c+1307,"bresp", false,-1, 1,0);
    tracep->declBit(c+683,"bvalid", false,-1);
    tracep->declBit(c+684,"bready", false,-1);
    tracep->declBus(c+1305,"bid", false,-1, 3,0);
    tracep->declBus(c+1310,"ysyx_24120011_S_AXI_IDLE", false,-1, 2,0);
    tracep->declBus(c+1299,"ysyx_24120011_S_AXI_RADDR", false,-1, 2,0);
    tracep->declBus(c+1312,"ysyx_24120011_S_AXI_RDATA", false,-1, 2,0);
    tracep->declBus(c+1373,"ysyx_24120011_S_AXI_WADDR", false,-1, 2,0);
    tracep->declBus(c+1374,"ysyx_24120011_S_AXI_WDATA", false,-1, 2,0);
    tracep->declBus(c+1375,"ysyx_24120011_S_AXI_WRESP", false,-1, 2,0);
    tracep->declBus(c+1307,"ysyx_24120011_S_AXI_RESP_OKAY", false,-1, 1,0);
    tracep->declBus(c+780,"state", false,-1, 2,0);
    tracep->declBus(c+781,"next_state", false,-1, 2,0);
    tracep->declBus(c+782,"addr", false,-1, 31,0);
    tracep->declBus(c+783,"read_delay_cnt", false,-1, 7,0);
    tracep->declBus(c+784,"write_delay_cnt", false,-1, 7,0);
    tracep->declBit(c+785,"pmem_readed", false,-1);
    tracep->declBit(c+786,"pmem_writed", false,-1);
    tracep->declBus(c+787,"LSFR_in", false,-1, 7,0);
    tracep->declBus(c+788,"random_delay", false,-1, 7,0);
    tracep->declBus(c+675,"rdata_reg", false,-1, 31,0);
    tracep->declBit(c+676,"rvalid_reg", false,-1);
    tracep->declBit(c+681,"wready_reg", false,-1);
    tracep->declQuad(c+789,"mtime", false,-1, 63,0);
    tracep->pushNamePrefix("i1_LFSR ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBus(c+787,"in", false,-1, 7,0);
    tracep->declBus(c+788,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_EXU ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBit(c+648,"IFU_valid", false,-1);
    tracep->declBus(c+66,"A", false,-1, 31,0);
    tracep->declBus(c+69,"B", false,-1, 31,0);
    tracep->declBus(c+13,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+9,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+70,"ALUout", false,-1, 31,0);
    tracep->declBus(c+69,"ALUB", false,-1, 31,0);
    tracep->declBit(c+649,"EXU_valid", false,-1);
    tracep->declBit(c+791,"reg_EXU_valid", false,-1);
    tracep->declBit(c+792,"reg_EXU_valid1", false,-1);
    tracep->declBit(c+793,"reg_EXU_valid2", false,-1);
    tracep->declBit(c+794,"reg_EXU_valid3", false,-1);
    tracep->declBit(c+795,"reg_EXU_valid4", false,-1);
    tracep->declBit(c+649,"reg_EXU_valid5", false,-1);
    tracep->pushNamePrefix("u_ysyx_24120011_ALU ");
    tracep->declBus(c+66,"A", false,-1, 31,0);
    tracep->declBus(c+69,"B", false,-1, 31,0);
    tracep->declBus(c+13,"ALU_ctrl", false,-1, 3,0);
    tracep->declBus(c+70,"ALUout", false,-1, 31,0);
    tracep->declBus(c+96,"B_in", false,-1, 31,0);
    tracep->declBus(c+97,"B_in_used_for_overflow", false,-1, 31,0);
    tracep->declBus(c+98,"ALUout_tmp", false,-1, 31,0);
    tracep->declBit(c+99,"carry", false,-1);
    tracep->declBit(c+100,"overflow", false,-1);
    tracep->declBit(c+101,"uless", false,-1);
    tracep->declBit(c+102,"sless", false,-1);
    tracep->declBit(c+103,"a_is_b", false,-1);
    tracep->declBit(c+104,"a_not_b", false,-1);
    tracep->pushNamePrefix("i_Adder ");
    tracep->declBus(c+66,"x", false,-1, 31,0);
    tracep->declBus(c+96,"y", false,-1, 31,0);
    tracep->declBus(c+98,"s", false,-1, 31,0);
    tracep->declBit(c+99,"c", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_ALUCtrl ");
    tracep->declBus(c+9,"ALUBctrl", false,-1, 1,0);
    tracep->declBus(c+67,"src2", false,-1, 31,0);
    tracep->declBus(c+6,"imme", false,-1, 31,0);
    tracep->declBus(c+78,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+69,"ALUB", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_24120011_IDU ");
    tracep->declBus(c+17,"inst", false,-1, 31,0);
    tracep->declBit(c+648,"IFU_valid", false,-1);
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
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1261,"rst", false,-1);
    tracep->declBus(c+83,"Xbar_araddr", false,-1, 31,0);
    tracep->declBit(c+665,"Xbar_arvalid", false,-1);
    tracep->declBit(c+666,"Xbar_arready", false,-1);
    tracep->declBus(c+1305,"Xbar_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_arlen", false,-1, 7,0);
    tracep->declBus(c+84,"Xbar_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_arburst", false,-1, 1,0);
    tracep->declBus(c+326,"Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+327,"Xbar_rvalid", false,-1);
    tracep->declBit(c+667,"Xbar_rready", false,-1);
    tracep->declBit(c+174,"Xbar_rlast", false,-1);
    tracep->declBus(c+175,"Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+85,"Xbar_awaddr", false,-1, 31,0);
    tracep->declBit(c+668,"Xbar_awvalid", false,-1);
    tracep->declBit(c+669,"Xbar_awready", false,-1);
    tracep->declBus(c+1305,"Xbar_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_awlen", false,-1, 7,0);
    tracep->declBus(c+86,"Xbar_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_awburst", false,-1, 1,0);
    tracep->declBus(c+87,"Xbar_wdata", false,-1, 31,0);
    tracep->declBus(c+88,"Xbar_wstrb", false,-1, 3,0);
    tracep->declBit(c+670,"Xbar_wvalid", false,-1);
    tracep->declBit(c+671,"Xbar_wready", false,-1);
    tracep->declBit(c+670,"Xbar_wlast", false,-1);
    tracep->declBus(c+176,"Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+328,"Xbar_bvalid", false,-1);
    tracep->declBit(c+672,"Xbar_bready", false,-1);
    tracep->declBus(c+177,"Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+38,"Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+384,"Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+383,"Xbar_S0_arready", false,-1);
    tracep->declBus(c+1305,"Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+127,"Xbar_S0_rdata", false,-1, 31,0);
    tracep->declBus(c+1260,"Xbar_S0_rresp", false,-1, 1,0);
    tracep->declBit(c+240,"Xbar_S0_rvalid", false,-1);
    tracep->declBit(c+385,"Xbar_S0_rready", false,-1);
    tracep->declBit(c+128,"Xbar_S0_rlast", false,-1);
    tracep->declBus(c+241,"Xbar_S0_rid", false,-1, 3,0);
    tracep->declBus(c+34,"Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+378,"Xbar_S0_awvalid", false,-1);
    tracep->declBit(c+377,"Xbar_S0_awready", false,-1);
    tracep->declBus(c+1305,"Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBus(c+36,"Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+379,"Xbar_S0_wready", false,-1);
    tracep->declBit(c+381,"Xbar_S0_wlast", false,-1);
    tracep->declBus(c+126,"Xbar_S0_bresp", false,-1, 1,0);
    tracep->declBit(c+238,"Xbar_S0_bvalid", false,-1);
    tracep->declBit(c+382,"Xbar_S0_bready", false,-1);
    tracep->declBus(c+239,"Xbar_S0_bid", false,-1, 3,0);
    tracep->declBus(c+105,"Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+796,"Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+1380,"Xbar_S1_arready", false,-1);
    tracep->declBus(c+1305,"Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+106,"Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1381,"Xbar_S1_rdata", false,-1, 31,0);
    tracep->declBus(c+1382,"Xbar_S1_rresp", false,-1, 1,0);
    tracep->declBit(c+1383,"Xbar_S1_rvalid", false,-1);
    tracep->declBit(c+797,"Xbar_S1_rready", false,-1);
    tracep->declBit(c+1384,"Xbar_S1_rlast", false,-1);
    tracep->declBus(c+1385,"Xbar_S1_rid", false,-1, 3,0);
    tracep->declBus(c+107,"Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+798,"Xbar_S1_awvalid", false,-1);
    tracep->declBit(c+1386,"Xbar_S1_awready", false,-1);
    tracep->declBus(c+1305,"Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+108,"Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBus(c+109,"Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+799,"Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+1387,"Xbar_S1_wready", false,-1);
    tracep->declBit(c+800,"Xbar_S1_wlast", false,-1);
    tracep->declBus(c+1388,"Xbar_S1_bresp", false,-1, 1,0);
    tracep->declBit(c+1389,"Xbar_S1_bvalid", false,-1);
    tracep->declBit(c+801,"Xbar_S1_bready", false,-1);
    tracep->declBus(c+1390,"Xbar_S1_bid", false,-1, 3,0);
    tracep->declBus(c+89,"Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+673,"Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+674,"Xbar_S2_arready", false,-1);
    tracep->declBus(c+1305,"Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+675,"Xbar_S2_rdata", false,-1, 31,0);
    tracep->declBus(c+1307,"Xbar_S2_rresp", false,-1, 1,0);
    tracep->declBit(c+676,"Xbar_S2_rvalid", false,-1);
    tracep->declBit(c+677,"Xbar_S2_rready", false,-1);
    tracep->declBit(c+676,"Xbar_S2_rlast", false,-1);
    tracep->declBus(c+1305,"Xbar_S2_rid", false,-1, 3,0);
    tracep->declBus(c+91,"Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+678,"Xbar_S2_awvalid", false,-1);
    tracep->declBit(c+679,"Xbar_S2_awready", false,-1);
    tracep->declBus(c+1305,"Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBus(c+93,"Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+680,"Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+681,"Xbar_S2_wready", false,-1);
    tracep->declBit(c+682,"Xbar_S2_wlast", false,-1);
    tracep->declBus(c+1307,"Xbar_S2_bresp", false,-1, 1,0);
    tracep->declBit(c+683,"Xbar_S2_bvalid", false,-1);
    tracep->declBit(c+684,"Xbar_S2_bready", false,-1);
    tracep->declBus(c+1305,"Xbar_S2_bid", false,-1, 3,0);
    tracep->declBus(c+1310,"ysyx_24120011_Xbar_IDLE", false,-1, 2,0);
    tracep->declBus(c+1299,"ysyx_24120011_Xbar_S0", false,-1, 2,0);
    tracep->declBus(c+1312,"ysyx_24120011_Xbar_S1", false,-1, 2,0);
    tracep->declBus(c+1373,"ysyx_24120011_Xbar_S2", false,-1, 2,0);
    tracep->declBus(c+802,"r_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+178,"r_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+803,"w_Xbar_state", false,-1, 2,0);
    tracep->declBus(c+179,"w_Xbar_next_state", false,-1, 2,0);
    tracep->declBus(c+326,"reg_Xbar_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"reg_Xbar_rresp", false,-1, 1,0);
    tracep->declBit(c+327,"reg_Xbar_rvalid", false,-1);
    tracep->declBit(c+669,"reg_Xbar_awready", false,-1);
    tracep->declBit(c+671,"reg_Xbar_wready", false,-1);
    tracep->declBus(c+176,"reg_Xbar_bresp", false,-1, 1,0);
    tracep->declBit(c+328,"reg_Xbar_bvalid", false,-1);
    tracep->declBit(c+666,"reg_Xbar_arready", false,-1);
    tracep->declBit(c+174,"reg_Xbar_rlast", false,-1);
    tracep->declBus(c+175,"reg_Xbar_rid", false,-1, 3,0);
    tracep->declBus(c+177,"reg_Xbar_bid", false,-1, 3,0);
    tracep->declBus(c+38,"reg_Xbar_S0_araddr", false,-1, 31,0);
    tracep->declBit(c+384,"reg_Xbar_S0_arvalid", false,-1);
    tracep->declBit(c+385,"reg_Xbar_S0_rready", false,-1);
    tracep->declBus(c+34,"reg_Xbar_S0_awaddr", false,-1, 31,0);
    tracep->declBit(c+378,"reg_Xbar_S0_awvalid", false,-1);
    tracep->declBus(c+36,"reg_Xbar_S0_wdata", false,-1, 31,0);
    tracep->declBus(c+37,"reg_Xbar_S0_wstrb", false,-1, 3,0);
    tracep->declBit(c+380,"reg_Xbar_S0_wvalid", false,-1);
    tracep->declBit(c+382,"reg_Xbar_S0_bready", false,-1);
    tracep->declBus(c+1305,"reg_Xbar_S0_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S0_arlen", false,-1, 7,0);
    tracep->declBus(c+39,"reg_Xbar_S0_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S0_arburst", false,-1, 1,0);
    tracep->declBus(c+1305,"reg_Xbar_S0_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S0_awlen", false,-1, 7,0);
    tracep->declBus(c+35,"reg_Xbar_S0_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S0_awburst", false,-1, 1,0);
    tracep->declBit(c+381,"reg_Xbar_S0_wlast", false,-1);
    tracep->declBus(c+105,"reg_Xbar_S1_araddr", false,-1, 31,0);
    tracep->declBit(c+796,"reg_Xbar_S1_arvalid", false,-1);
    tracep->declBit(c+797,"reg_Xbar_S1_rready", false,-1);
    tracep->declBus(c+107,"reg_Xbar_S1_awaddr", false,-1, 31,0);
    tracep->declBit(c+798,"reg_Xbar_S1_awvalid", false,-1);
    tracep->declBus(c+109,"reg_Xbar_S1_wdata", false,-1, 31,0);
    tracep->declBus(c+110,"reg_Xbar_S1_wstrb", false,-1, 3,0);
    tracep->declBit(c+799,"reg_Xbar_S1_wvalid", false,-1);
    tracep->declBit(c+801,"reg_Xbar_S1_bready", false,-1);
    tracep->declBus(c+1305,"reg_Xbar_S1_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S1_arlen", false,-1, 7,0);
    tracep->declBus(c+106,"reg_Xbar_S1_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S1_arburst", false,-1, 1,0);
    tracep->declBus(c+1305,"reg_Xbar_S1_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S1_awlen", false,-1, 7,0);
    tracep->declBus(c+108,"reg_Xbar_S1_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S1_awburst", false,-1, 1,0);
    tracep->declBit(c+800,"reg_Xbar_S1_wlast", false,-1);
    tracep->declBus(c+89,"reg_Xbar_S2_araddr", false,-1, 31,0);
    tracep->declBit(c+673,"reg_Xbar_S2_arvalid", false,-1);
    tracep->declBit(c+677,"reg_Xbar_S2_rready", false,-1);
    tracep->declBus(c+91,"reg_Xbar_S2_awaddr", false,-1, 31,0);
    tracep->declBit(c+678,"reg_Xbar_S2_awvalid", false,-1);
    tracep->declBus(c+93,"reg_Xbar_S2_wdata", false,-1, 31,0);
    tracep->declBus(c+94,"reg_Xbar_S2_wstrb", false,-1, 3,0);
    tracep->declBit(c+680,"reg_Xbar_S2_wvalid", false,-1);
    tracep->declBit(c+684,"reg_Xbar_S2_bready", false,-1);
    tracep->declBus(c+1305,"reg_Xbar_S2_arid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S2_arlen", false,-1, 7,0);
    tracep->declBus(c+90,"reg_Xbar_S2_arsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S2_arburst", false,-1, 1,0);
    tracep->declBus(c+1305,"reg_Xbar_S2_awid", false,-1, 3,0);
    tracep->declBus(c+1306,"reg_Xbar_S2_awlen", false,-1, 7,0);
    tracep->declBus(c+92,"reg_Xbar_S2_awsize", false,-1, 2,0);
    tracep->declBus(c+1307,"reg_Xbar_S2_awburst", false,-1, 1,0);
    tracep->declBit(c+682,"reg_Xbar_S2_wlast", false,-1);
    tracep->declBit(c+180,"read_S0_done", false,-1);
    tracep->declBit(c+181,"write_S0_done", false,-1);
    tracep->declBit(c+804,"read_S1_done", false,-1);
    tracep->declBit(c+805,"write_S1_done", false,-1);
    tracep->declBit(c+806,"read_S2_done", false,-1);
    tracep->declBit(c+807,"write_S2_done", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"io_d", false,-1);
    tracep->declBit(c+808,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"io_d", false,-1);
    tracep->declBit(c+808,"io_q", false,-1);
    tracep->declBit(c+808,"sync_0", false,-1);
    tracep->declBit(c+809,"sync_1", false,-1);
    tracep->declBit(c+810,"sync_2", false,-1);
    tracep->declBit(c+811,"sync_3", false,-1);
    tracep->declBit(c+812,"sync_4", false,-1);
    tracep->declBit(c+813,"sync_5", false,-1);
    tracep->declBit(c+814,"sync_6", false,-1);
    tracep->declBit(c+815,"sync_7", false,-1);
    tracep->declBit(c+816,"sync_8", false,-1);
    tracep->declBit(c+817,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+122,"auto_in_psel", false,-1);
    tracep->declBit(c+123,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+196,"auto_in_pready", false,-1);
    tracep->declBit(c+1304,"auto_in_pslverr", false,-1);
    tracep->declBus(c+363,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1233,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1234,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1235,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1237,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1238,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1239,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1240,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1241,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1242,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+212,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+122,"in_psel", false,-1);
    tracep->declBit(c+123,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+196,"in_pready", false,-1);
    tracep->declBus(c+363,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1304,"in_pslverr", false,-1);
    tracep->declBus(c+1233,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1234,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1235,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1236,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1237,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1238,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1239,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1240,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1241,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1242,"gpio_seg_7", false,-1, 7,0);
    tracep->declBus(c+818,"reg_gpio_out", false,-1, 15,0);
    tracep->declBus(c+363,"reg_in_prdata", false,-1, 31,0);
    tracep->declBus(c+819,"reg_gpio_seg_hex_0", false,-1, 3,0);
    tracep->declBus(c+820,"reg_gpio_seg_hex_1", false,-1, 3,0);
    tracep->declBus(c+821,"reg_gpio_seg_hex_2", false,-1, 3,0);
    tracep->declBus(c+822,"reg_gpio_seg_hex_3", false,-1, 3,0);
    tracep->declBus(c+823,"reg_gpio_seg_hex_4", false,-1, 3,0);
    tracep->declBus(c+824,"reg_gpio_seg_hex_5", false,-1, 3,0);
    tracep->declBus(c+825,"reg_gpio_seg_hex_6", false,-1, 3,0);
    tracep->declBus(c+826,"reg_gpio_seg_hex_7", false,-1, 3,0);
    tracep->pushNamePrefix("u_bcd7seg0 ");
    tracep->declBus(c+819,"b", false,-1, 3,0);
    tracep->declBus(c+1235,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg1 ");
    tracep->declBus(c+820,"b", false,-1, 3,0);
    tracep->declBus(c+1236,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg2 ");
    tracep->declBus(c+821,"b", false,-1, 3,0);
    tracep->declBus(c+1237,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg3 ");
    tracep->declBus(c+822,"b", false,-1, 3,0);
    tracep->declBus(c+1238,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg4 ");
    tracep->declBus(c+823,"b", false,-1, 3,0);
    tracep->declBus(c+1239,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg5 ");
    tracep->declBus(c+824,"b", false,-1, 3,0);
    tracep->declBus(c+1240,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg6 ");
    tracep->declBus(c+825,"b", false,-1, 3,0);
    tracep->declBus(c+1241,"h", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bcd7seg7 ");
    tracep->declBus(c+826,"b", false,-1, 3,0);
    tracep->declBus(c+1242,"h", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+120,"auto_in_psel", false,-1);
    tracep->declBit(c+121,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"auto_in_pready", false,-1);
    tracep->declBit(c+1303,"auto_in_pslverr", false,-1);
    tracep->declBus(c+362,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1243,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1244,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+212,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+120,"in_psel", false,-1);
    tracep->declBit(c+121,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+195,"in_pready", false,-1);
    tracep->declBus(c+362,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1303,"in_pslverr", false,-1);
    tracep->declBit(c+1243,"ps2_clk", false,-1);
    tracep->declBit(c+1244,"ps2_data", false,-1);
    tracep->declBus(c+827,"buffer_out", false,-1, 7,0);
    tracep->declBit(c+828,"ready", false,-1);
    tracep->declBus(c+362,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+829,"nextdata_n", false,-1);
    tracep->pushNamePrefix("u_ps2_keyboard ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1265,"clrn", false,-1);
    tracep->declBit(c+1243,"ps2_clk", false,-1);
    tracep->declBit(c+1244,"ps2_data", false,-1);
    tracep->declBit(c+829,"nextdata_n", false,-1);
    tracep->declBus(c+827,"data", false,-1, 7,0);
    tracep->declBit(c+828,"ready", false,-1);
    tracep->declBit(c+830,"overflow", false,-1);
    tracep->declBus(c+831,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+832+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+840,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+841,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+842,"count", false,-1, 3,0);
    tracep->declBus(c+843,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBit(c+844,"sampling", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+52,"auto_in_awvalid", false,-1);
    tracep->declBit(c+53,"auto_in_wvalid", false,-1);
    tracep->declBit(c+454,"auto_in_arready", false,-1);
    tracep->declBit(c+54,"auto_in_arvalid", false,-1);
    tracep->declBus(c+367,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+55,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+131,"auto_in_rready", false,-1);
    tracep->declBit(c+455,"auto_in_rvalid", false,-1);
    tracep->declBus(c+456,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+457,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+455,"state", false,-1);
    tracep->declBus(c+457,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+456,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+111,"raddr", false,-1, 31,0);
    tracep->declBit(c+112,"ren", false,-1);
    tracep->declBus(c+113,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+197,"auto_in_psel", false,-1);
    tracep->declBit(c+124,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"auto_in_pready", false,-1);
    tracep->declBit(c+1300,"auto_in_pslverr", false,-1);
    tracep->declBus(c+364,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+229,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+230,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1254,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+197,"in_psel", false,-1);
    tracep->declBit(c+124,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"in_pready", false,-1);
    tracep->declBus(c+364,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1300,"in_pslverr", false,-1);
    tracep->declBit(c+229,"qspi_sck", false,-1);
    tracep->declBit(c+230,"qspi_ce_n", false,-1);
    tracep->declBus(c+1254,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1254,"din", false,-1, 3,0);
    tracep->declBus(c+336,"dout", false,-1, 3,0);
    tracep->declBus(c+337,"douten", false,-1, 3,0);
    tracep->declBit(c+1266,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1231,"clk_i", false,-1);
    tracep->declBit(c+1232,"rst_i", false,-1);
    tracep->declBus(c+190,"adr_i", false,-1, 31,0);
    tracep->declBus(c+182,"dat_i", false,-1, 31,0);
    tracep->declBus(c+364,"dat_o", false,-1, 31,0);
    tracep->declBus(c+22,"sel_i", false,-1, 3,0);
    tracep->declBit(c+197,"cyc_i", false,-1);
    tracep->declBit(c+197,"stb_i", false,-1);
    tracep->declBit(c+1266,"ack_o", false,-1);
    tracep->declBit(c+21,"we_i", false,-1);
    tracep->declBit(c+229,"sck", false,-1);
    tracep->declBit(c+230,"ce_n", false,-1);
    tracep->declBus(c+1254,"din", false,-1, 3,0);
    tracep->declBus(c+336,"dout", false,-1, 3,0);
    tracep->declBus(c+337,"douten", false,-1, 3,0);
    tracep->declBus(c+1307,"ST_INIT", false,-1, 1,0);
    tracep->declBus(c+1391,"ST_IDLE", false,-1, 1,0);
    tracep->declBus(c+1392,"ST_WAIT", false,-1, 1,0);
    tracep->declBit(c+899,"mr_sck", false,-1);
    tracep->declBit(c+900,"mr_ce_n", false,-1);
    tracep->declBus(c+1254,"mr_din", false,-1, 3,0);
    tracep->declBus(c+901,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+902,"mr_doe", false,-1);
    tracep->declBit(c+903,"mw_sck", false,-1);
    tracep->declBit(c+904,"mw_ce_n", false,-1);
    tracep->declBus(c+1254,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1267,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+905,"mw_doe", false,-1);
    tracep->declBit(c+906,"init_start", false,-1);
    tracep->declBit(c+907,"init_done", false,-1);
    tracep->declBit(c+908,"init_sck", false,-1);
    tracep->declBit(c+909,"init_ce_n", false,-1);
    tracep->declBus(c+910,"init_dout", false,-1, 3,0);
    tracep->declBit(c+1308,"init_doe", false,-1);
    tracep->declBit(c+338,"mr_rd", false,-1);
    tracep->declBit(c+911,"mr_done", false,-1);
    tracep->declBit(c+339,"mw_wr", false,-1);
    tracep->declBit(c+1268,"mw_done", false,-1);
    tracep->declBit(c+197,"wb_valid", false,-1);
    tracep->declBit(c+213,"wb_we", false,-1);
    tracep->declBit(c+214,"wb_re", false,-1);
    tracep->declBus(c+912,"state", false,-1, 1,0);
    tracep->declBus(c+340,"nstate", false,-1, 1,0);
    tracep->declBus(c+114,"size", false,-1, 2,0);
    tracep->declBus(c+184,"byte0", false,-1, 7,0);
    tracep->declBus(c+185,"byte1", false,-1, 7,0);
    tracep->declBus(c+186,"byte2", false,-1, 7,0);
    tracep->declBus(c+187,"byte3", false,-1, 7,0);
    tracep->declBus(c+188,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("INIT ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1265,"rst_n", false,-1);
    tracep->declBit(c+906,"start", false,-1);
    tracep->declBit(c+907,"done", false,-1);
    tracep->declBit(c+908,"sck", false,-1);
    tracep->declBit(c+909,"ce_n", false,-1);
    tracep->declBus(c+910,"dout", false,-1, 3,0);
    tracep->declBit(c+1308,"douten", false,-1);
    tracep->declBus(c+1393,"CMD_35H", false,-1, 7,0);
    tracep->declBus(c+913,"counter", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1265,"rst_n", false,-1);
    tracep->declBus(c+215,"addr", false,-1, 23,0);
    tracep->declBit(c+338,"rd", false,-1);
    tracep->declBus(c+1374,"size", false,-1, 2,0);
    tracep->declBit(c+911,"done", false,-1);
    tracep->declBus(c+364,"line", false,-1, 31,0);
    tracep->declBit(c+899,"sck", false,-1);
    tracep->declBit(c+900,"ce_n", false,-1);
    tracep->declBus(c+1254,"din", false,-1, 3,0);
    tracep->declBus(c+901,"dout", false,-1, 3,0);
    tracep->declBit(c+902,"douten", false,-1);
    tracep->declBus(c+1394,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1395,"READ", false,-1, 0,0);
    tracep->declBus(c+1396,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+914,"state", false,-1);
    tracep->declBit(c+341,"nstate", false,-1);
    tracep->declBus(c+915,"counter", false,-1, 7,0);
    tracep->declBus(c+916,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+845+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1397,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+917,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1265,"rst_n", false,-1);
    tracep->declBus(c+216,"addr", false,-1, 23,0);
    tracep->declBus(c+188,"line", false,-1, 31,0);
    tracep->declBus(c+114,"size", false,-1, 2,0);
    tracep->declBit(c+339,"wr", false,-1);
    tracep->declBit(c+1268,"done", false,-1);
    tracep->declBit(c+903,"sck", false,-1);
    tracep->declBit(c+904,"ce_n", false,-1);
    tracep->declBus(c+1254,"din", false,-1, 3,0);
    tracep->declBus(c+1267,"dout", false,-1, 3,0);
    tracep->declBit(c+905,"douten", false,-1);
    tracep->declBus(c+1394,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1395,"WRITE", false,-1, 0,0);
    tracep->declBus(c+115,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+918,"state", false,-1);
    tracep->declBit(c+342,"nstate", false,-1);
    tracep->declBus(c+919,"counter", false,-1, 7,0);
    tracep->declBus(c+920,"saddr", false,-1, 23,0);
    tracep->declBus(c+1398,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+116,"auto_in_psel", false,-1);
    tracep->declBit(c+117,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+190,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+897,"auto_in_pready", false,-1);
    tracep->declBit(c+1300,"auto_in_pslverr", false,-1);
    tracep->declBus(c+898,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1255,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+1205,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+1206,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+1207,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+1208,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+1209,"sdram_bundle_we", false,-1);
    tracep->declBus(c+231,"sdram_bundle_a", false,-1, 13,0);
    tracep->declBus(c+1210,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+1211,"sdram_bundle_dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"sdram_bundle_dq", false,-1, 31,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+190,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+116,"in_psel", false,-1);
    tracep->declBit(c+117,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+897,"in_pready", false,-1);
    tracep->declBus(c+898,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1300,"in_pslverr", false,-1);
    tracep->declBit(c+1255,"sdram_clk", false,-1);
    tracep->declBit(c+1205,"sdram_cke", false,-1);
    tracep->declBit(c+1206,"sdram_cs", false,-1);
    tracep->declBit(c+1207,"sdram_ras", false,-1);
    tracep->declBit(c+1208,"sdram_cas", false,-1);
    tracep->declBit(c+1209,"sdram_we", false,-1);
    tracep->declBus(c+231,"sdram_a", false,-1, 13,0);
    tracep->declBus(c+1210,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+1211,"sdram_dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"sdram_dq", false,-1, 31,0);
    tracep->declBit(c+921,"sdram_dout_en", false,-1);
    tracep->declBus(c+922,"sdram_dout", false,-1, 31,0);
    tracep->declBus(c+849,"state", false,-1, 1,0);
    tracep->declBit(c+1212,"req_accept", false,-1);
    tracep->declBit(c+217,"is_read", false,-1);
    tracep->declBit(c+218,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1231,"clk_i", false,-1);
    tracep->declBit(c+1232,"rst_i", false,-1);
    tracep->declBus(c+219,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+217,"inport_rd_i", false,-1);
    tracep->declBus(c+1306,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+190,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+182,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+1223,"sdram_data_input_i", false,-1, 31,0);
    tracep->declBit(c+1212,"inport_accept_o", false,-1);
    tracep->declBit(c+897,"inport_ack_o", false,-1);
    tracep->declBit(c+1300,"inport_error_o", false,-1);
    tracep->declBus(c+898,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1255,"sdram_clk_o", false,-1);
    tracep->declBit(c+1205,"sdram_cke_o", false,-1);
    tracep->declBit(c+1206,"sdram_cs_o", false,-1);
    tracep->declBit(c+1207,"sdram_ras_o", false,-1);
    tracep->declBit(c+1208,"sdram_cas_o", false,-1);
    tracep->declBit(c+1209,"sdram_we_o", false,-1);
    tracep->declBus(c+1211,"sdram_dqm_o", false,-1, 3,0);
    tracep->declBus(c+231,"sdram_addr_o", false,-1, 13,0);
    tracep->declBus(c+1210,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+922,"sdram_data_output_o", false,-1, 31,0);
    tracep->declBit(c+921,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1399,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1400,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1401,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1403,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1404,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1405,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1406,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1407,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1408,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1403,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1409,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1410,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1411,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1412,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1413,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1414,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1415,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1305,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1416,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1403,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1305,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1415,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1414,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1410,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1412,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1411,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1413,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1409,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1417,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1418,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1419,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1419,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1376,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1419,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1402,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1420,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+190,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+219,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+217,"ram_rd_w", false,-1);
    tracep->declBit(c+1212,"ram_accept_w", false,-1);
    tracep->declBus(c+182,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+898,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+897,"ram_ack_w", false,-1);
    tracep->declBit(c+220,"ram_req_w", false,-1);
    tracep->declBus(c+1213,"command_q", false,-1, 3,0);
    tracep->declBus(c+1214,"addr_q", false,-1, 12,0);
    tracep->declBus(c+922,"data_q", false,-1, 31,0);
    tracep->declBit(c+923,"data_rd_en_q", false,-1);
    tracep->declBus(c+1211,"dqm_q", false,-1, 3,0);
    tracep->declBit(c+1205,"cke_q", false,-1);
    tracep->declBus(c+1210,"bank_q", false,-1, 1,0);
    tracep->declBus(c+1223,"sdram_data_in_w", false,-1, 31,0);
    tracep->declBit(c+924,"refresh_q", false,-1);
    tracep->declBus(c+925,"row_open_q", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+926+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+1215,"state_q", false,-1, 3,0);
    tracep->declBus(c+343,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+344,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+934,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+935,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+221,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+222,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+223,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+224,"addr_bank_double", false,-1, 2,0);
    tracep->declBus(c+1403,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+936,"delay_q", false,-1, 3,0);
    tracep->declBus(c+345,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1421,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+1216,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+937,"sample_data0_q", false,-1, 31,0);
    tracep->declBus(c+898,"sample_data_q", false,-1, 31,0);
    tracep->declBus(c+938,"idx", false,-1, 31,0);
    tracep->declBus(c+939,"rd_q", false,-1, 3,0);
    tracep->declBit(c+897,"ack_q", false,-1);
    tracep->declArray(c+1217,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+201,"auto_in_psel", false,-1);
    tracep->declBit(c+202,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+192,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1258,"auto_in_pready", false,-1);
    tracep->declBit(c+1300,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1259,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+894,"spi_bundle_sck", false,-1);
    tracep->declBus(c+895,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+896,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1253,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1377,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1422,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1404,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+201,"in_psel", false,-1);
    tracep->declBit(c+202,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1258,"in_pready", false,-1);
    tracep->declBus(c+1259,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1300,"in_pslverr", false,-1);
    tracep->declBit(c+894,"spi_sck", false,-1);
    tracep->declBus(c+895,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+896,"spi_mosi", false,-1);
    tracep->declBit(c+1253,"spi_miso", false,-1);
    tracep->declBit(c+940,"spi_irq_out", false,-1);
    tracep->declBus(c+1305,"ysyx_24120011_SPITOPAPB_IDLE", false,-1, 3,0);
    tracep->declBus(c+1415,"ysyx_24120011_SPITOPAPB_SPI", false,-1, 3,0);
    tracep->declBus(c+1414,"ysyx_24120011_SPITOPAPB_FLASH_DIV", false,-1, 3,0);
    tracep->declBus(c+1410,"ysyx_24120011_SPITOPAPB_FLASH_TXREG0", false,-1, 3,0);
    tracep->declBus(c+1412,"ysyx_24120011_SPITOPAPB_FLASH_TXREG1", false,-1, 3,0);
    tracep->declBus(c+1411,"ysyx_24120011_SPITOPAPB_FLASH_SS1", false,-1, 3,0);
    tracep->declBus(c+1413,"ysyx_24120011_SPITOPAPB_FLASH_CTRL", false,-1, 3,0);
    tracep->declBus(c+1409,"ysyx_24120011_SPITOPAPB_FLASH_WAIT", false,-1, 3,0);
    tracep->declBus(c+1417,"ysyx_24120011_SPITOPAPB_FLASH_SS0", false,-1, 3,0);
    tracep->declBus(c+1418,"ysyx_24120011_SPITOPAPB_FLASH_RECV", false,-1, 3,0);
    tracep->declBus(c+850,"spi_top_apb_state", false,-1, 3,0);
    tracep->declBus(c+346,"spi_top_apb_nextstate", false,-1, 3,0);
    tracep->declBus(c+347,"reg_in_paddr", false,-1, 31,0);
    tracep->declBus(c+348,"reg_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+189,"reg_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1269,"reg_in_pwrite", false,-1);
    tracep->declBit(c+349,"reg_in_psel", false,-1);
    tracep->declBit(c+350,"reg_in_penable", false,-1);
    tracep->declBus(c+941,"reg_in_prdata", false,-1, 31,0);
    tracep->declBit(c+942,"reg_in_pready", false,-1);
    tracep->declBit(c+1300,"reg_in_pslverr", false,-1);
    tracep->declBit(c+940,"reg_spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1423,"Tp", false,-1, 31,0);
    tracep->declBit(c+1231,"wb_clk_i", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBus(c+351,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+348,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+941,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+189,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1269,"wb_we_i", false,-1);
    tracep->declBit(c+349,"wb_stb_i", false,-1);
    tracep->declBit(c+350,"wb_cyc_i", false,-1);
    tracep->declBit(c+942,"wb_ack_o", false,-1);
    tracep->declBit(c+1300,"wb_err_o", false,-1);
    tracep->declBit(c+940,"wb_int_o", false,-1);
    tracep->declBus(c+895,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+894,"sclk_pad_o", false,-1);
    tracep->declBit(c+896,"mosi_pad_o", false,-1);
    tracep->declBit(c+1253,"miso_pad_i", false,-1);
    tracep->declBus(c+943,"divider", false,-1, 15,0);
    tracep->declBus(c+944,"ctrl", false,-1, 13,0);
    tracep->declBus(c+945,"ss", false,-1, 7,0);
    tracep->declBus(c+352,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+946,"rx", false,-1, 127,0);
    tracep->declBit(c+950,"rx_negedge", false,-1);
    tracep->declBit(c+951,"tx_negedge", false,-1);
    tracep->declBus(c+952,"char_len", false,-1, 6,0);
    tracep->declBit(c+953,"go", false,-1);
    tracep->declBit(c+954,"lsb", false,-1);
    tracep->declBit(c+955,"ie", false,-1);
    tracep->declBit(c+956,"ass", false,-1);
    tracep->declBit(c+353,"spi_divider_sel", false,-1);
    tracep->declBit(c+354,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+355,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+356,"spi_ss_sel", false,-1);
    tracep->declBit(c+957,"tip", false,-1);
    tracep->declBit(c+958,"pos_edge", false,-1);
    tracep->declBit(c+959,"neg_edge", false,-1);
    tracep->declBit(c+960,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1423,"Tp", false,-1, 31,0);
    tracep->declBit(c+1231,"clk_in", false,-1);
    tracep->declBit(c+1232,"rst", false,-1);
    tracep->declBit(c+957,"enable", false,-1);
    tracep->declBit(c+953,"go", false,-1);
    tracep->declBit(c+960,"last_clk", false,-1);
    tracep->declBus(c+943,"divider", false,-1, 15,0);
    tracep->declBit(c+894,"clk_out", false,-1);
    tracep->declBit(c+958,"pos_edge", false,-1);
    tracep->declBit(c+959,"neg_edge", false,-1);
    tracep->declBus(c+961,"cnt", false,-1, 15,0);
    tracep->declBit(c+962,"cnt_zero", false,-1);
    tracep->declBit(c+963,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1423,"Tp", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"rst", false,-1);
    tracep->declBus(c+357,"latch", false,-1, 3,0);
    tracep->declBus(c+189,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+952,"len", false,-1, 6,0);
    tracep->declBit(c+954,"lsb", false,-1);
    tracep->declBit(c+953,"go", false,-1);
    tracep->declBit(c+958,"pos_edge", false,-1);
    tracep->declBit(c+959,"neg_edge", false,-1);
    tracep->declBit(c+950,"rx_negedge", false,-1);
    tracep->declBit(c+951,"tx_negedge", false,-1);
    tracep->declBit(c+957,"tip", false,-1);
    tracep->declBit(c+960,"last", false,-1);
    tracep->declBus(c+348,"p_in", false,-1, 31,0);
    tracep->declArray(c+946,"p_out", false,-1, 127,0);
    tracep->declBit(c+894,"s_clk", false,-1);
    tracep->declBit(c+1253,"s_in", false,-1);
    tracep->declBit(c+896,"s_out", false,-1);
    tracep->declBus(c+964,"cnt", false,-1, 7,0);
    tracep->declArray(c+946,"data", false,-1, 127,0);
    tracep->declBus(c+965,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+966,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+967,"rx_clk", false,-1);
    tracep->declBit(c+968,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+198,"auto_in_psel", false,-1);
    tracep->declBit(c+199,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+194,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+200,"auto_in_pready", false,-1);
    tracep->declBit(c+1300,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1257,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1251,"uart_rx", false,-1);
    tracep->declBit(c+1252,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+198,"in_psel", false,-1);
    tracep->declBit(c+199,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+200,"in_pready", false,-1);
    tracep->declBit(c+1300,"in_pslverr", false,-1);
    tracep->declBus(c+212,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+1257,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1251,"uart_rx", false,-1);
    tracep->declBit(c+1252,"uart_tx", false,-1);
    tracep->declBit(c+969,"rtsn", false,-1);
    tracep->declBit(c+1300,"ctsn", false,-1);
    tracep->declBit(c+970,"dtr_pad_o", false,-1);
    tracep->declBit(c+1300,"dsr_pad_i", false,-1);
    tracep->declBit(c+1300,"ri_pad_i", false,-1);
    tracep->declBit(c+1300,"dcd_pad_i", false,-1);
    tracep->declBit(c+971,"interrupt", false,-1);
    tracep->declBit(c+1270,"reg_we", false,-1);
    tracep->declBit(c+1271,"reg_re", false,-1);
    tracep->declBus(c+226,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+227,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+851,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+358,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+972,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBus(c+226,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+228,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+358,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1270,"wb_we_i", false,-1);
    tracep->declBit(c+1271,"wb_re_i", false,-1);
    tracep->declBit(c+1252,"stx_pad_o", false,-1);
    tracep->declBit(c+1251,"srx_pad_i", false,-1);
    tracep->declBus(c+1417,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+972,"rts_pad_o", false,-1);
    tracep->declBit(c+970,"dtr_pad_o", false,-1);
    tracep->declBit(c+971,"int_o", false,-1);
    tracep->declBit(c+973,"enable", false,-1);
    tracep->declBit(c+974,"srx_pad", false,-1);
    tracep->declBus(c+975,"ier", false,-1, 3,0);
    tracep->declBus(c+976,"iir", false,-1, 3,0);
    tracep->declBus(c+977,"fcr", false,-1, 1,0);
    tracep->declBus(c+978,"mcr", false,-1, 4,0);
    tracep->declBus(c+979,"lcr", false,-1, 7,0);
    tracep->declBus(c+980,"msr", false,-1, 7,0);
    tracep->declBus(c+981,"dl", false,-1, 15,0);
    tracep->declBus(c+982,"scratch", false,-1, 7,0);
    tracep->declBit(c+983,"start_dlc", false,-1);
    tracep->declBit(c+984,"lsr_mask_d", false,-1);
    tracep->declBit(c+985,"msi_reset", false,-1);
    tracep->declBus(c+986,"dlc", false,-1, 15,0);
    tracep->declBus(c+987,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+988,"rx_reset", false,-1);
    tracep->declBit(c+989,"tx_reset", false,-1);
    tracep->declBit(c+990,"dlab", false,-1);
    tracep->declBit(c+1308,"cts_pad_i", false,-1);
    tracep->declBit(c+1300,"dsr_pad_i", false,-1);
    tracep->declBit(c+1300,"ri_pad_i", false,-1);
    tracep->declBit(c+1300,"dcd_pad_i", false,-1);
    tracep->declBit(c+991,"loopback", false,-1);
    tracep->declBit(c+1300,"cts", false,-1);
    tracep->declBit(c+1308,"dsr", false,-1);
    tracep->declBit(c+1308,"ri", false,-1);
    tracep->declBit(c+1308,"dcd", false,-1);
    tracep->declBit(c+992,"cts_c", false,-1);
    tracep->declBit(c+993,"dsr_c", false,-1);
    tracep->declBit(c+994,"ri_c", false,-1);
    tracep->declBit(c+995,"dcd_c", false,-1);
    tracep->declBus(c+996,"lsr", false,-1, 7,0);
    tracep->declBit(c+997,"lsr0", false,-1);
    tracep->declBit(c+998,"lsr1", false,-1);
    tracep->declBit(c+999,"lsr2", false,-1);
    tracep->declBit(c+1000,"lsr3", false,-1);
    tracep->declBit(c+1001,"lsr4", false,-1);
    tracep->declBit(c+1002,"lsr5", false,-1);
    tracep->declBit(c+1003,"lsr6", false,-1);
    tracep->declBit(c+1004,"lsr7", false,-1);
    tracep->declBit(c+1005,"lsr0r", false,-1);
    tracep->declBit(c+1006,"lsr1r", false,-1);
    tracep->declBit(c+1007,"lsr2r", false,-1);
    tracep->declBit(c+1008,"lsr3r", false,-1);
    tracep->declBit(c+1009,"lsr4r", false,-1);
    tracep->declBit(c+1010,"lsr5r", false,-1);
    tracep->declBit(c+1011,"lsr6r", false,-1);
    tracep->declBit(c+1012,"lsr7r", false,-1);
    tracep->declBit(c+1272,"lsr_mask", false,-1);
    tracep->declBit(c+1013,"rls_int", false,-1);
    tracep->declBit(c+1014,"rda_int", false,-1);
    tracep->declBit(c+1015,"ti_int", false,-1);
    tracep->declBit(c+1016,"thre_int", false,-1);
    tracep->declBit(c+1017,"ms_int", false,-1);
    tracep->declBit(c+1018,"tf_push", false,-1);
    tracep->declBit(c+1019,"rf_pop", false,-1);
    tracep->declBus(c+1273,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1020,"rf_error_bit", false,-1);
    tracep->declBit(c+998,"rf_overrun", false,-1);
    tracep->declBit(c+1021,"rf_push_pulse", false,-1);
    tracep->declBus(c+1022,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1023,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1024,"tstate", false,-1, 2,0);
    tracep->declBus(c+1025,"rstate", false,-1, 3,0);
    tracep->declBus(c+1026,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1027,"thre_set_en", false,-1);
    tracep->declBus(c+1028,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1029,"block_value", false,-1, 7,0);
    tracep->declBit(c+1030,"serial_out", false,-1);
    tracep->declBit(c+1031,"serial_in", false,-1);
    tracep->declBit(c+1274,"lsr_mask_condition", false,-1);
    tracep->declBit(c+1275,"iir_read", false,-1);
    tracep->declBit(c+1276,"msr_read", false,-1);
    tracep->declBit(c+1277,"fifo_read", false,-1);
    tracep->declBit(c+1278,"fifo_write", false,-1);
    tracep->declBus(c+1032,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1033,"lsr0_d", false,-1);
    tracep->declBit(c+1034,"lsr1_d", false,-1);
    tracep->declBit(c+1035,"lsr2_d", false,-1);
    tracep->declBit(c+1036,"lsr3_d", false,-1);
    tracep->declBit(c+1037,"lsr4_d", false,-1);
    tracep->declBit(c+1038,"lsr5_d", false,-1);
    tracep->declBit(c+1039,"lsr6_d", false,-1);
    tracep->declBit(c+1040,"lsr7_d", false,-1);
    tracep->declBit(c+1041,"rls_int_d", false,-1);
    tracep->declBit(c+1042,"thre_int_d", false,-1);
    tracep->declBit(c+1043,"ms_int_d", false,-1);
    tracep->declBit(c+1044,"ti_int_d", false,-1);
    tracep->declBit(c+1045,"rda_int_d", false,-1);
    tracep->declBit(c+1046,"rls_int_rise", false,-1);
    tracep->declBit(c+1047,"thre_int_rise", false,-1);
    tracep->declBit(c+1048,"ms_int_rise", false,-1);
    tracep->declBit(c+1049,"ti_int_rise", false,-1);
    tracep->declBit(c+1050,"rda_int_rise", false,-1);
    tracep->declBit(c+1051,"rls_int_pnd", false,-1);
    tracep->declBit(c+1052,"rda_int_pnd", false,-1);
    tracep->declBit(c+1053,"thre_int_pnd", false,-1);
    tracep->declBit(c+1054,"ms_int_pnd", false,-1);
    tracep->declBit(c+1055,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1423,"Tp", false,-1, 31,0);
    tracep->declBus(c+1423,"width", false,-1, 31,0);
    tracep->declBus(c+1395,"init_value", false,-1, 0,0);
    tracep->declBit(c+1232,"rst_i", false,-1);
    tracep->declBit(c+1231,"clk_i", false,-1);
    tracep->declBit(c+1300,"stage1_rst_i", false,-1);
    tracep->declBit(c+1308,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1251,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+974,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1056,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBus(c+979,"lcr", false,-1, 7,0);
    tracep->declBit(c+1019,"rf_pop", false,-1);
    tracep->declBit(c+1031,"srx_pad_i", false,-1);
    tracep->declBit(c+973,"enable", false,-1);
    tracep->declBit(c+988,"rx_reset", false,-1);
    tracep->declBit(c+1272,"lsr_mask", false,-1);
    tracep->declBus(c+1026,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1022,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1273,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+998,"rf_overrun", false,-1);
    tracep->declBit(c+1020,"rf_error_bit", false,-1);
    tracep->declBus(c+1025,"rstate", false,-1, 3,0);
    tracep->declBit(c+1021,"rf_push_pulse", false,-1);
    tracep->declBus(c+1057,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1058,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1059,"rshift", false,-1, 7,0);
    tracep->declBit(c+1060,"rparity", false,-1);
    tracep->declBit(c+1061,"rparity_error", false,-1);
    tracep->declBit(c+1062,"rframing_error", false,-1);
    tracep->declBit(c+1063,"rbit_in", false,-1);
    tracep->declBit(c+1064,"rparity_xor", false,-1);
    tracep->declBus(c+1065,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1066,"rf_push_q", false,-1);
    tracep->declBus(c+1067,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1068,"rf_push", false,-1);
    tracep->declBit(c+1069,"break_error", false,-1);
    tracep->declBit(c+1070,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1071,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1072,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1073,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1305,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1415,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1414,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1410,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1412,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1411,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1413,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1409,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1417,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1418,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1424,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1074,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1075,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1425,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1426,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1403,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1427,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBit(c+1021,"push", false,-1);
    tracep->declBit(c+1019,"pop", false,-1);
    tracep->declBus(c+1067,"data_in", false,-1, 10,0);
    tracep->declBit(c+988,"fifo_reset", false,-1);
    tracep->declBit(c+1272,"reset_status", false,-1);
    tracep->declBus(c+1273,"data_out", false,-1, 10,0);
    tracep->declBit(c+998,"overrun", false,-1);
    tracep->declBus(c+1022,"count", false,-1, 4,0);
    tracep->declBit(c+1020,"error_bit", false,-1);
    tracep->declBus(c+1279,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1076+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1092,"top", false,-1, 3,0);
    tracep->declBus(c+1093,"bottom", false,-1, 3,0);
    tracep->declBus(c+1094,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1095,"word0", false,-1, 2,0);
    tracep->declBus(c+1096,"word1", false,-1, 2,0);
    tracep->declBus(c+1097,"word2", false,-1, 2,0);
    tracep->declBus(c+1098,"word3", false,-1, 2,0);
    tracep->declBus(c+1099,"word4", false,-1, 2,0);
    tracep->declBus(c+1100,"word5", false,-1, 2,0);
    tracep->declBus(c+1101,"word6", false,-1, 2,0);
    tracep->declBus(c+1102,"word7", false,-1, 2,0);
    tracep->declBus(c+1103,"word8", false,-1, 2,0);
    tracep->declBus(c+1104,"word9", false,-1, 2,0);
    tracep->declBus(c+1105,"word10", false,-1, 2,0);
    tracep->declBus(c+1106,"word11", false,-1, 2,0);
    tracep->declBus(c+1107,"word12", false,-1, 2,0);
    tracep->declBus(c+1108,"word13", false,-1, 2,0);
    tracep->declBus(c+1109,"word14", false,-1, 2,0);
    tracep->declBus(c+1110,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1403,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1404,"data_width", false,-1, 31,0);
    tracep->declBus(c+1426,"depth", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1021,"we", false,-1);
    tracep->declBus(c+1092,"a", false,-1, 3,0);
    tracep->declBus(c+1093,"dpra", false,-1, 3,0);
    tracep->declBus(c+1111,"di", false,-1, 7,0);
    tracep->declBus(c+1279,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+852+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBus(c+979,"lcr", false,-1, 7,0);
    tracep->declBit(c+1018,"tf_push", false,-1);
    tracep->declBus(c+228,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+973,"enable", false,-1);
    tracep->declBit(c+989,"tx_reset", false,-1);
    tracep->declBit(c+1272,"lsr_mask", false,-1);
    tracep->declBit(c+1030,"stx_pad_o", false,-1);
    tracep->declBus(c+1024,"tstate", false,-1, 2,0);
    tracep->declBus(c+1023,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1112,"counter", false,-1, 4,0);
    tracep->declBus(c+1113,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1114,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1115,"stx_o_tmp", false,-1);
    tracep->declBit(c+1116,"parity_xor", false,-1);
    tracep->declBit(c+1117,"tf_pop", false,-1);
    tracep->declBit(c+1118,"bit_out", false,-1);
    tracep->declBus(c+228,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1280,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1119,"tf_overrun", false,-1);
    tracep->declBus(c+1310,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1299,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1312,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1373,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1374,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1375,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1404,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1426,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1403,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1427,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1232,"wb_rst_i", false,-1);
    tracep->declBit(c+1018,"push", false,-1);
    tracep->declBit(c+1117,"pop", false,-1);
    tracep->declBus(c+228,"data_in", false,-1, 7,0);
    tracep->declBit(c+989,"fifo_reset", false,-1);
    tracep->declBit(c+1272,"reset_status", false,-1);
    tracep->declBus(c+1280,"data_out", false,-1, 7,0);
    tracep->declBit(c+1119,"overrun", false,-1);
    tracep->declBus(c+1023,"count", false,-1, 4,0);
    tracep->declBus(c+1120,"top", false,-1, 3,0);
    tracep->declBus(c+1121,"bottom", false,-1, 3,0);
    tracep->declBus(c+1122,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1403,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1404,"data_width", false,-1, 31,0);
    tracep->declBus(c+1426,"depth", false,-1, 31,0);
    tracep->declBit(c+1231,"clk", false,-1);
    tracep->declBit(c+1018,"we", false,-1);
    tracep->declBus(c+1120,"a", false,-1, 3,0);
    tracep->declBus(c+1121,"dpra", false,-1, 3,0);
    tracep->declBus(c+228,"di", false,-1, 7,0);
    tracep->declBus(c+1280,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+868+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBit(c+118,"auto_in_psel", false,-1);
    tracep->declBit(c+119,"auto_in_penable", false,-1);
    tracep->declBit(c+21,"auto_in_pwrite", false,-1);
    tracep->declBus(c+192,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1299,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+182,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+193,"auto_in_pready", false,-1);
    tracep->declBit(c+1301,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1302,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1245,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1246,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1247,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1248,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1249,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1250,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1231,"clock", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+225,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+118,"in_psel", false,-1);
    tracep->declBit(c+119,"in_penable", false,-1);
    tracep->declBus(c+1299,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+21,"in_pwrite", false,-1);
    tracep->declBus(c+182,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+22,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+193,"in_pready", false,-1);
    tracep->declBus(c+1302,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1301,"in_pslverr", false,-1);
    tracep->declBus(c+1245,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1246,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1247,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1248,"vga_hsync", false,-1);
    tracep->declBit(c+1249,"vga_vsync", false,-1);
    tracep->declBit(c+1250,"vga_valid", false,-1);
    tracep->declBus(c+884,"h_addr", false,-1, 9,0);
    tracep->declBus(c+885,"v_addr", false,-1, 10,0);
    tracep->declBus(c+886,"vga_data", false,-1, 23,0);
    tracep->pushNamePrefix("my_vga_ctrl ");
    tracep->declBit(c+1231,"pclk", false,-1);
    tracep->declBit(c+1232,"reset", false,-1);
    tracep->declBus(c+886,"vga_data", false,-1, 23,0);
    tracep->declBus(c+884,"h_addr", false,-1, 9,0);
    tracep->declBus(c+885,"v_addr", false,-1, 10,0);
    tracep->declBit(c+1248,"hsync", false,-1);
    tracep->declBit(c+1249,"vsync", false,-1);
    tracep->declBit(c+1250,"valid", false,-1);
    tracep->declBus(c+1245,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1246,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1247,"vga_b", false,-1, 7,0);
    tracep->declBus(c+1428,"h_frontporch", false,-1, 31,0);
    tracep->declBus(c+1429,"h_active", false,-1, 31,0);
    tracep->declBus(c+1430,"h_backporch", false,-1, 31,0);
    tracep->declBus(c+1431,"h_total", false,-1, 31,0);
    tracep->declBus(c+1402,"v_frontporch", false,-1, 31,0);
    tracep->declBus(c+1432,"v_active", false,-1, 31,0);
    tracep->declBus(c+1433,"v_backporch", false,-1, 31,0);
    tracep->declBus(c+1434,"v_total", false,-1, 31,0);
    tracep->declBus(c+887,"x_cnt", false,-1, 9,0);
    tracep->declBus(c+888,"y_cnt", false,-1, 10,0);
    tracep->declBit(c+889,"h_valid", false,-1);
    tracep->declBit(c+890,"v_valid", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+894,"sck", false,-1);
    tracep->declBit(c+1123,"ss", false,-1);
    tracep->declBit(c+896,"mosi", false,-1);
    tracep->declBit(c+1281,"miso", false,-1);
    tracep->declBus(c+891,"data", false,-1, 7,0);
    tracep->declBus(c+892,"bit_cnt", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+894,"sck", false,-1);
    tracep->declBit(c+1124,"ss", false,-1);
    tracep->declBit(c+896,"mosi", false,-1);
    tracep->declBit(c+1282,"miso", false,-1);
    tracep->declBit(c+1124,"reset", false,-1);
    tracep->declBus(c+1201,"state", false,-1, 2,0);
    tracep->declBus(c+1202,"counter", false,-1, 7,0);
    tracep->declBus(c+1283,"cmd", false,-1, 7,0);
    tracep->declBus(c+1284,"addr", false,-1, 23,0);
    tracep->declBus(c+1203,"data", false,-1, 31,0);
    tracep->declBit(c+1204,"ren", false,-1);
    tracep->declBus(c+893,"rdata", false,-1, 31,0);
    tracep->declBus(c+1285,"raddr", false,-1, 31,0);
    tracep->declBus(c+1286,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+894,"clock", false,-1);
    tracep->declBit(c+1204,"valid", false,-1);
    tracep->declBus(c+1283,"cmd", false,-1, 7,0);
    tracep->declBus(c+1285,"addr", false,-1, 31,0);
    tracep->declBus(c+893,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+229,"sck", false,-1);
    tracep->declBit(c+230,"ce_n", false,-1);
    tracep->declBus(c+1254,"dio", false,-1, 3,0);
    tracep->declBus(c+1226,"dout_en", false,-1, 3,0);
    tracep->declBus(c+1287,"dout", false,-1, 3,0);
    tracep->declBus(c+1254,"din", false,-1, 3,0);
    tracep->declBit(c+1288,"QPI_MODE", false,-1);
    tracep->declBus(c+1227,"cmd", false,-1, 7,0);
    tracep->declBus(c+1228,"addr", false,-1, 23,0);
    tracep->declBus(c+1289,"data", false,-1, 31,0);
    tracep->declBus(c+1290,"rdata", false,-1, 31,0);
    tracep->declBus(c+1229,"counter", false,-1, 7,0);
    tracep->declBus(c+1230,"state", false,-1, 3,0);
    tracep->declBus(c+1291,"data_bswap", false,-1, 31,0);
    tracep->declBus(c+1292,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1207,"ras", false,-1);
    tracep->declBit(c+1208,"cas", false,-1);
    tracep->declBit(c+1209,"we", false,-1);
    tracep->declBus(c+231,"a", false,-1, 13,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1211,"dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"dq", false,-1, 31,0);
    tracep->declBus(c+1220,"command", false,-1, 2,0);
    tracep->declBit(c+1293,"ras_u0", false,-1);
    tracep->declBit(c+1294,"cas_u0", false,-1);
    tracep->declBit(c+1295,"we_u0", false,-1);
    tracep->declBit(c+1296,"ras_u1", false,-1);
    tracep->declBit(c+1297,"cas_u1", false,-1);
    tracep->declBit(c+1298,"we_u1", false,-1);
    tracep->pushNamePrefix("sdram_32_u0 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1293,"ras", false,-1);
    tracep->declBit(c+1294,"cas", false,-1);
    tracep->declBit(c+1295,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1211,"dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u0 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1293,"ras", false,-1);
    tracep->declBit(c+1294,"cas", false,-1);
    tracep->declBit(c+1295,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1221,"dqm", false,-1, 1,0);
    tracep->declBus(c+1224,"dq", false,-1, 15,0);
    tracep->declBus(c+1435,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1436,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1373,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1375,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1374,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1437,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1312,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1299,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1310,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1438,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1125+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1129,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1130,"dout", false,-1, 15,0);
    tracep->declBus(c+1224,"din", false,-1, 15,0);
    tracep->declBus(c+1131,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1132,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+359,"command", false,-1, 2,0);
    tracep->declBus(c+1133,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1134,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1135,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1136,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1137,"read_flag", false,-1);
    tracep->declBus(c+1138,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1139,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1140,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1141,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1142,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1143,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1293,"ras", false,-1);
    tracep->declBit(c+1294,"cas", false,-1);
    tracep->declBit(c+1295,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1222,"dqm", false,-1, 1,0);
    tracep->declBus(c+1225,"dq", false,-1, 15,0);
    tracep->declBus(c+1435,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1436,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1373,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1375,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1374,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1437,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1312,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1299,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1310,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1438,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1144+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1148,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1149,"dout", false,-1, 15,0);
    tracep->declBus(c+1225,"din", false,-1, 15,0);
    tracep->declBus(c+1150,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1151,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+359,"command", false,-1, 2,0);
    tracep->declBus(c+1152,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1153,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1154,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1155,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1156,"read_flag", false,-1);
    tracep->declBus(c+1157,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1158,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1159,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1160,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1161,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1162,"Length", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_32_u1 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1296,"ras", false,-1);
    tracep->declBit(c+1297,"cas", false,-1);
    tracep->declBit(c+1298,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1211,"dqm", false,-1, 3,0);
    tracep->declBus(c+1223,"dq", false,-1, 31,0);
    tracep->pushNamePrefix("sdram_16_u0 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1296,"ras", false,-1);
    tracep->declBit(c+1297,"cas", false,-1);
    tracep->declBit(c+1298,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1221,"dqm", false,-1, 1,0);
    tracep->declBus(c+1224,"dq", false,-1, 15,0);
    tracep->declBus(c+1435,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1436,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1373,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1375,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1374,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1437,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1312,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1299,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1310,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1438,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1163+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1167,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1168,"dout", false,-1, 15,0);
    tracep->declBus(c+1224,"din", false,-1, 15,0);
    tracep->declBus(c+1169,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1170,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+360,"command", false,-1, 2,0);
    tracep->declBus(c+1171,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1172,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1173,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1174,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1175,"read_flag", false,-1);
    tracep->declBus(c+1176,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1177,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1178,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1179,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1180,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1181,"Length", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_16_u1 ");
    tracep->declBit(c+1255,"clk", false,-1);
    tracep->declBit(c+1205,"cke", false,-1);
    tracep->declBit(c+1206,"cs", false,-1);
    tracep->declBit(c+1296,"ras", false,-1);
    tracep->declBit(c+1297,"cas", false,-1);
    tracep->declBit(c+1298,"we", false,-1);
    tracep->declBus(c+1214,"a", false,-1, 12,0);
    tracep->declBus(c+1210,"ba", false,-1, 1,0);
    tracep->declBus(c+1222,"dqm", false,-1, 1,0);
    tracep->declBus(c+1225,"dq", false,-1, 15,0);
    tracep->declBus(c+1435,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1436,"CMD_NOP", false,-1, 2,0);
    tracep->declBus(c+1373,"CMD_ACTIVE", false,-1, 2,0);
    tracep->declBus(c+1375,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+1374,"CMD_WRITE", false,-1, 2,0);
    tracep->declBus(c+1437,"CMD_TERMINATE", false,-1, 2,0);
    tracep->declBus(c+1312,"CMD_PRECHARGE", false,-1, 2,0);
    tracep->declBus(c+1299,"CMD_REFRESH", false,-1, 2,0);
    tracep->declBus(c+1310,"CMD_LOAD_MODE", false,-1, 2,0);
    tracep->declBus(c+1438,"BANK_SIZE", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1182+i*1,"Line_Address", true,(i+0), 12,0);
    }
    tracep->declBus(c+1186,"dout_en", false,-1, 15,0);
    tracep->declBus(c+1187,"dout", false,-1, 15,0);
    tracep->declBus(c+1225,"din", false,-1, 15,0);
    tracep->declBus(c+1188,"CAS_Latency", false,-1, 2,0);
    tracep->declBus(c+1189,"Brust_Length", false,-1, 2,0);
    tracep->declBus(c+360,"command", false,-1, 2,0);
    tracep->declBus(c+1190,"L_Bank", false,-1, 1,0);
    tracep->declBus(c+1191,"dqm_buf1", false,-1, 1,0);
    tracep->declBus(c+1192,"R_Counter", false,-1, 3,0);
    tracep->declBus(c+1193,"W_Counter", false,-1, 3,0);
    tracep->declBit(c+1194,"read_flag", false,-1);
    tracep->declBus(c+1195,"R_Address", false,-1, 8,0);
    tracep->declBus(c+1196,"W_Address", false,-1, 8,0);
    tracep->declBus(c+1197,"W_Data", false,-1, 15,0);
    tracep->declBus(c+1198,"r_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1199,"w_sdram_address", false,-1, 21,0);
    tracep->declBus(c+1200,"Length", false,-1, 3,0);
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
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wdata_format),6);
    bufp->fullIData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__B_in),32);
    bufp->fullIData(oldp+97,(((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgTmp_h6c4bfc22__0
                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp),32);
    bufp->fullBit(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry));
    bufp->fullBit(oldp+100,((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                               >> 0x1fU) == (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU_ctrl))
                                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT____VdfgTmp_h6c4bfc22__0
                                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB) 
                                             >> 0x1fU)) 
                             & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                                 >> 0x1fU) != (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__ALUout_tmp 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+101,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__carry)))));
    bufp->fullBit(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__u_ysyx_24120011_ALU__DOT__sless));
    bufp->fullBit(oldp+103,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
    bufp->fullBit(oldp+104,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__src1 
                             != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALUB)));
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
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullIData(oldp+194,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold),2);
    bufp->fullCData(oldp+211,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+212,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullIData(oldp+215,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+216,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_read));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+221,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+222,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+223,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_bank_double),3);
    bufp->fullIData(oldp+225,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+226,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullSData(oldp+231,(vlSelf->ysyxSoCFull__DOT___asic_sdram_a),14);
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_bvalid));
    bufp->fullCData(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20),4);
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_arready));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wready));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awready));
    bufp->fullSData(oldp+267,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)))),16);
    bufp->fullSData(oldp+268,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))),16);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready),6);
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_unready_1),6);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+290,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)))));
    bufp->fullBit(oldp+291,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 1U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+292,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+293,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+294,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                     & ((((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                         >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+295,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+296,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                   & ((((IData)(1U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                       >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+297,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5)) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+298,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+299,((0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 1U)))));
    bufp->fullBit(oldp+300,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 2U)))));
    bufp->fullBit(oldp+301,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                        & (((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                           >> 3U)))));
    bufp->fullBit(oldp+302,((0x3fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 2U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+303,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 4U)))));
    bufp->fullBit(oldp+304,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 5U)))));
    bufp->fullBit(oldp+305,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 6U)))));
    bufp->fullBit(oldp+306,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                       & (((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                          >> 7U)))));
    bufp->fullBit(oldp+307,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 8U)))));
    bufp->fullBit(oldp+308,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 9U)))));
    bufp->fullBit(oldp+309,((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xaU)))));
    bufp->fullBit(oldp+310,((0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                      & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                         >> 0xbU)))));
    bufp->fullBit(oldp+311,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                     & (((IData)(1U) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                        >> 0xcU)))));
    bufp->fullBit(oldp+312,((7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+313,((0x1fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                        & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+314,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+315,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)) 
                                >> 0xfU))));
    bufp->fullBit(oldp+316,((0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+317,((0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+318,((0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+319,((0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                       & ((((IData)(1U) 
                                            << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                           >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+320,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullBit(oldp+321,((0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                                      & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_20)) 
                                          >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_5))))));
    bufp->fullIData(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rdata),32);
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_rvalid));
    bufp->fullIData(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rdata),32);
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_rvalid));
    bufp->fullIData(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rdata),32);
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_rvalid));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_bvalid));
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__next_state),3);
    bufp->fullCData(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__next_state),3);
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rdata_mask),32);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_next_state),3);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_next_state),3);
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_done));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_done));
    bufp->fullCData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate),2);
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_nextstate),4);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwdata),32);
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_psel));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_penable));
    bufp->fullCData(oldp+351,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)),5);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+353,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullBit(oldp+354,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+355,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+356,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_paddr)))));
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__command),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__command),3);
    bufp->fullBit(oldp+361,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__reg_in_prdata),32);
    bufp->fullIData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_in_prdata),32);
    bufp->fullIData(oldp+364,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+374,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+377,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_awvalid));
    bufp->fullBit(oldp+379,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wvalid));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_bready));
    bufp->fullBit(oldp+383,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_arvalid));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_rready));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+387,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+389,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+391,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+392,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+433,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram)
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S0_wlast)))));
    bufp->fullQData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+439,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+442,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+443,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+454,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullSData(oldp+458,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))),16);
    bufp->fullSData(oldp+459,((0xffffU & ((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))),16);
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+505,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+516,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+520,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+524,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+528,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+532,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+536,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+540,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+544,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+548,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+552,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+556,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+560,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+564,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+568,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+580,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+584,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+588,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+592,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+596,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+600,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+604,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+608,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+612,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+616,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+620,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+624,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+628,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+632,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+636,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+640,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_mem_data),32);
    bufp->fullIData(oldp+645,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs
                              [0xaU]),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid5));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready));
    bufp->fullIData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_valid),32);
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M0_arready));
    bufp->fullBit(oldp+655,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+656,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state)) 
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
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_arready));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_awready));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_wready));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__M1_bready));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_arvalid));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_arready));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_rready));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_awvalid));
    bufp->fullBit(oldp+669,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_wvalid));
    bufp->fullBit(oldp+671,((1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state) 
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
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__S0_bready));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_arvalid));
    bufp->fullBit(oldp+674,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullIData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rdata_reg),32);
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_awvalid));
    bufp->fullBit(oldp+679,((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wvalid));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__wready_reg));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_wlast));
    bufp->fullBit(oldp+683,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state))));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_valid_delay));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU_valid_rising_edge));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_rready_delay));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_rready_rising_edge));
    bufp->fullIData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mepc),32);
    bufp->fullIData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mstatus),32);
    bufp->fullIData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mcause),32);
    bufp->fullIData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mtvec),32);
    bufp->fullIData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__mvendorid),32);
    bufp->fullIData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_Csr__DOT__marchid),32);
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rvalid_prev));
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__state),3);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__random_delay),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__state),3);
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_read_delay));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__start_write_delay));
    bufp->fullBit(oldp+704,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU_ready)))));
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__arvalid_delay_cnt),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__awvalid_delay_cnt),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__wvalid_delay_cnt),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__rready_delay_cnt),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__bready_delay_cnt),8);
    bufp->fullCData(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__LSFR_in),8);
    bufp->fullCData(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_LSU__DOT__random_delay),8);
    bufp->fullIData(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[0]),32);
    bufp->fullIData(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[1]),32);
    bufp->fullIData(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[2]),32);
    bufp->fullIData(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[3]),32);
    bufp->fullIData(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[4]),32);
    bufp->fullIData(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[5]),32);
    bufp->fullIData(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[6]),32);
    bufp->fullIData(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[7]),32);
    bufp->fullIData(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[8]),32);
    bufp->fullIData(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[9]),32);
    bufp->fullIData(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[10]),32);
    bufp->fullIData(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[11]),32);
    bufp->fullIData(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[12]),32);
    bufp->fullIData(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[13]),32);
    bufp->fullIData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[14]),32);
    bufp->fullIData(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[15]),32);
    bufp->fullIData(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[16]),32);
    bufp->fullIData(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[17]),32);
    bufp->fullIData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[18]),32);
    bufp->fullIData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[19]),32);
    bufp->fullIData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[20]),32);
    bufp->fullIData(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[21]),32);
    bufp->fullIData(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[22]),32);
    bufp->fullIData(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[23]),32);
    bufp->fullIData(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[24]),32);
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[25]),32);
    bufp->fullIData(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[26]),32);
    bufp->fullIData(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[27]),32);
    bufp->fullIData(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[28]),32);
    bufp->fullIData(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[29]),32);
    bufp->fullIData(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[30]),32);
    bufp->fullIData(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__Regs[31]),32);
    bufp->fullIData(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[0]),32);
    bufp->fullIData(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[1]),32);
    bufp->fullIData(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[2]),32);
    bufp->fullIData(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[3]),32);
    bufp->fullIData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[4]),32);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[5]),32);
    bufp->fullIData(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[6]),32);
    bufp->fullIData(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[7]),32);
    bufp->fullIData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[8]),32);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[9]),32);
    bufp->fullIData(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[10]),32);
    bufp->fullIData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[11]),32);
    bufp->fullIData(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[12]),32);
    bufp->fullIData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[13]),32);
    bufp->fullIData(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[14]),32);
    bufp->fullIData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[15]),32);
    bufp->fullIData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[16]),32);
    bufp->fullIData(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[17]),32);
    bufp->fullIData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[18]),32);
    bufp->fullIData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[19]),32);
    bufp->fullIData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[20]),32);
    bufp->fullIData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[21]),32);
    bufp->fullIData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[22]),32);
    bufp->fullIData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[23]),32);
    bufp->fullIData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[24]),32);
    bufp->fullIData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[25]),32);
    bufp->fullIData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[26]),32);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[27]),32);
    bufp->fullIData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[28]),32);
    bufp->fullIData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[29]),32);
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[30]),32);
    bufp->fullIData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_RegStack__DOT__regout[31]),32);
    bufp->fullCData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state),3);
    bufp->fullCData(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_state),3);
    bufp->fullCData(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_read_master),3);
    bufp->fullCData(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__last_write_master),3);
    bufp->fullCData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state),3);
    bufp->fullCData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__next_state),3);
    bufp->fullIData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__addr),32);
    bufp->fullCData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__read_delay_cnt),8);
    bufp->fullCData(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__write_delay_cnt),8);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_readed));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__pmem_writed));
    bufp->fullCData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__LSFR_in),8);
    bufp->fullCData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__random_delay),8);
    bufp->fullQData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__mtime),64);
    bufp->fullBit(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid));
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid1));
    bufp->fullBit(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid2));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid3));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_EXU__DOT__reg_EXU_valid4));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_arvalid));
    bufp->fullBit(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready));
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_awvalid));
    bufp->fullBit(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wvalid));
    bufp->fullBit(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_wlast));
    bufp->fullBit(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready));
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state),3);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__w_Xbar_state),3);
    bufp->fullBit(oldp+804,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_rready))));
    bufp->fullBit(oldp+805,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S1_bready))));
    bufp->fullBit(oldp+806,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__rvalid_reg) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_rready))));
    bufp->fullBit(oldp+807,(((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Clint__DOT__state)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__reg_Xbar_S2_bready))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_out),16);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_0),4);
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_1),4);
    bufp->fullCData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_2),4);
    bufp->fullCData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_3),4);
    bufp->fullCData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_4),4);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_5),4);
    bufp->fullCData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_6),4);
    bufp->fullCData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__reg_gpio_seg_hex_7),4);
    bufp->fullCData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__r_ptr]),8);
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ready));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__nextdata_n));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__overflow));
    bufp->fullSData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__count),4);
    bufp->fullCData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+844,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__u_ps2_keyboard__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state),4);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullSData(oldp+884,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid)
                                ? (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt) 
                                             - (IData)(0x49U)))
                                : 0U)),10);
    bufp->fullSData(oldp+885,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid)
                                ? (0x7ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt) 
                                             - (IData)(0x24U)))
                                : 0U)),11);
    bufp->fullIData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__vga_data),24);
    bufp->fullSData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__x_cnt),10);
    bufp->fullSData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__y_cnt),11);
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__h_valid));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__my_vga_ctrl__DOT__v_valid));
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__data),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__bit_cnt),8);
    bufp->fullIData(oldp+893,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullBit(oldp+894,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),32);
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+901,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+902,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+905,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+906,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))));
    bufp->fullBit(oldp+907,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_sck));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__init_ce_n));
    bufp->fullCData(oldp+910,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+911,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__INIT__DOT__counter),8);
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+917,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(3U)))),2);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+921,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),32);
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),8);
    bufp->fullSData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullSData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[4]),13);
    bufp->fullSData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[5]),13);
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[6]),13);
    bufp->fullSData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[7]),13);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),32);
    bufp->fullIData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_spi_irq_out));
    bufp->fullIData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_prdata),32);
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready));
    bufp->fullSData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+950,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+951,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+952,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+953,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+954,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+955,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+956,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+960,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+962,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+963,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+965,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+969,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+970,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+972,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+990,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+991,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+992,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+993,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+994,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+995,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+996,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+999,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+1000,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1001,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1020,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1027,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1046,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1047,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1048,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1049,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1050,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1069,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1070,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1071,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1072,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1073,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1075,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1094,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1111,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1122,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1123,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1124,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullSData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+1137,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+1141,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1148,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u0__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullSData(oldp+1163,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1164,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1165,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1166,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1167,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dout),16);
    bufp->fullCData(oldp+1169,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__L_Bank),2);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Counter),4);
    bufp->fullCData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Counter),4);
    bufp->fullBit(oldp+1175,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__read_flag));
    bufp->fullSData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__R_Address),9);
    bufp->fullSData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Address),9);
    bufp->fullSData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__W_Data),16);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u0__DOT__Length),4);
    bufp->fullSData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[0]),13);
    bufp->fullSData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[1]),13);
    bufp->fullSData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[2]),13);
    bufp->fullSData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Line_Address[3]),13);
    bufp->fullSData(oldp+1186,(((IData)(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag)
                                 ? 0xffffU : 0U)),16);
    bufp->fullSData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dout),16);
    bufp->fullCData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__CAS_Latency),3);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Brust_Length),3);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__L_Bank),2);
    bufp->fullCData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__dqm_buf1),2);
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Counter),4);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Counter),4);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__read_flag));
    bufp->fullSData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__R_Address),9);
    bufp->fullSData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Address),9);
    bufp->fullSData(oldp+1197,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__W_Data),16);
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__r_sdram_address),22);
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__w_sdram_address),22);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__sdram__DOT__sdram_32_u1__DOT__sdram_16_u1__DOT__Length),4);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullIData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1204,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+1206,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1207,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 2U))));
    bufp->fullBit(oldp+1208,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                    >> 1U))));
    bufp->fullBit(oldp+1209,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),4);
    bufp->fullBit(oldp+1212,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullSData(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullIData(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullWData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullCData(oldp+1220,((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))),3);
    bufp->fullCData(oldp+1221,((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q))),2);
    bufp->fullCData(oldp+1222,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q) 
                                      >> 2U))),2);
    bufp->fullIData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w),32);
    bufp->fullSData(oldp+1224,((0xffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w)),16);
    bufp->fullSData(oldp+1225,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sdram_data_in_w 
                                >> 0x10U)),16);
    bufp->fullCData(oldp+1226,(((IData)(vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h299493e7__0)
                                 ? 0xfU : 0U)),4);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__psram__DOT__cmd),8);
    bufp->fullIData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__psram__DOT__addr),24);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),4);
    bufp->fullBit(oldp+1231,(vlSelf->clock));
    bufp->fullBit(oldp+1232,(vlSelf->reset));
    bufp->fullSData(oldp+1233,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1234,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1235,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1236,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1237,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1238,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1239,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1240,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1241,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1242,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1243,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1244,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1245,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1246,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1247,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1248,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1249,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1250,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1251,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1252,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1253,(((IData)(vlSelf->ysyxSoCFull__DOT___bitrev_miso) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__din),4);
    bufp->fullBit(oldp+1255,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1256,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullBit(oldp+1258,((((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state)) 
                               | (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pready))));
    bufp->fullIData(oldp+1259,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_top_apb_state))
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
    bufp->fullCData(oldp+1260,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold)
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullCData(oldp+1262,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1263,(((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_state))
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
    bufp->fullCData(oldp+1264,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__r_Xbar_state))
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
    bufp->fullBit(oldp+1265,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__reg_in_pwrite));
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullSData(oldp+1273,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullBit(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT___bitrev_miso));
    bufp->fullBit(oldp+1282,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1285,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1287,((vlSelf->ysyxSoCFull__DOT__psram__DOT____VdfgTmp_h6b154942__0 
                                >> 0x1cU)),4);
    bufp->fullBit(oldp+1288,(vlSelf->ysyxSoCFull__DOT__psram__DOT__QPI_MODE));
    bufp->fullIData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data),32);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rdata),32);
    bufp->fullIData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__psram__DOT__data_bswap),32);
    bufp->fullIData(oldp+1292,(((vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                 << 0x18U) | ((0xff0000U 
                                               & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                  << 8U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                     >> 8U)) 
                                                 | (vlSelf->ysyxSoCFull__DOT__psram__DOT__data 
                                                    >> 0x18U))))),32);
    bufp->fullBit(oldp+1293,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
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
    bufp->fullBit(oldp+1294,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
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
    bufp->fullBit(oldp+1295,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? 7U : (7U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)))))));
    bufp->fullBit(oldp+1296,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
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
    bufp->fullBit(oldp+1297,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
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
    bufp->fullBit(oldp+1298,((1U & (((0U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))) 
                                     | (7U == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))))
                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q)
                                     : ((0x2000U & (IData)(vlSelf->ysyxSoCFull__DOT___asic_sdram_a))
                                         ? (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))
                                         : 7U)))));
    bufp->fullCData(oldp+1299,(1U),3);
    bufp->fullBit(oldp+1300,(0U));
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullCData(oldp+1305,(0U),4);
    bufp->fullCData(oldp+1306,(0U),8);
    bufp->fullCData(oldp+1307,(0U),2);
    bufp->fullBit(oldp+1308,(1U));
    bufp->fullIData(oldp+1309,(0U),32);
    bufp->fullCData(oldp+1310,(0U),3);
    bufp->fullIData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rdata),32);
    bufp->fullCData(oldp+1312,(2U),3);
    bufp->fullCData(oldp+1313,(0xfU),4);
    bufp->fullIData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_araddr),32);
    bufp->fullBit(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arvalid));
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arready));
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arid),4);
    bufp->fullCData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arlen),8);
    bufp->fullCData(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arsize),3);
    bufp->fullCData(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_arburst),2);
    bufp->fullIData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rdata),32);
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rresp),2);
    bufp->fullBit(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rvalid));
    bufp->fullBit(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rready));
    bufp->fullBit(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rlast));
    bufp->fullCData(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_rid),4);
    bufp->fullIData(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awaddr),32);
    bufp->fullBit(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awvalid));
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awready));
    bufp->fullCData(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awid),4);
    bufp->fullCData(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awlen),8);
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awsize),3);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_awburst),2);
    bufp->fullIData(oldp+1334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wdata),32);
    bufp->fullCData(oldp+1335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wstrb),4);
    bufp->fullBit(oldp+1336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wvalid));
    bufp->fullBit(oldp+1337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wready));
    bufp->fullBit(oldp+1338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_wlast));
    bufp->fullCData(oldp+1339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bresp),2);
    bufp->fullBit(oldp+1340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bvalid));
    bufp->fullBit(oldp+1341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bready));
    bufp->fullCData(oldp+1342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__sram_bid),4);
    bufp->fullIData(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullIData(oldp+1350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullBit(oldp+1353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+1358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullCData(oldp+1359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullCData(oldp+1364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+1366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+1367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullCData(oldp+1368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullBit(oldp+1369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+1370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullBit(oldp+1372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__i_IFU__DOT__start_read_delay));
    bufp->fullCData(oldp+1373,(3U),3);
    bufp->fullCData(oldp+1374,(4U),3);
    bufp->fullCData(oldp+1375,(5U),3);
    bufp->fullIData(oldp+1376,(0x20U),32);
    bufp->fullIData(oldp+1377,(0x30000000U),32);
    bufp->fullCData(oldp+1378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__read_choose),3);
    bufp->fullCData(oldp+1379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Arbiter__DOT__write_choose),3);
    bufp->fullBit(oldp+1380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_arready));
    bufp->fullIData(oldp+1381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rdata),32);
    bufp->fullCData(oldp+1382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rresp),2);
    bufp->fullBit(oldp+1383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rvalid));
    bufp->fullBit(oldp+1384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rlast));
    bufp->fullCData(oldp+1385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_rid),4);
    bufp->fullBit(oldp+1386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_awready));
    bufp->fullBit(oldp+1387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_wready));
    bufp->fullCData(oldp+1388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bresp),2);
    bufp->fullBit(oldp+1389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bvalid));
    bufp->fullCData(oldp+1390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_ysyx_24120011_Xbar__DOT__Xbar_S1_bid),4);
    bufp->fullCData(oldp+1391,(1U),2);
    bufp->fullCData(oldp+1392,(2U),2);
    bufp->fullCData(oldp+1393,(0x35U),8);
    bufp->fullBit(oldp+1394,(0U));
    bufp->fullBit(oldp+1395,(1U));
    bufp->fullCData(oldp+1396,(0x15U),8);
    bufp->fullCData(oldp+1397,(0xebU),8);
    bufp->fullCData(oldp+1398,(0x38U),8);
    bufp->fullIData(oldp+1399,(0x64U),32);
    bufp->fullIData(oldp+1400,(0x18U),32);
    bufp->fullIData(oldp+1401,(9U),32);
    bufp->fullIData(oldp+1402,(2U),32);
    bufp->fullIData(oldp+1403,(4U),32);
    bufp->fullIData(oldp+1404,(8U),32);
    bufp->fullIData(oldp+1405,(0xdU),32);
    bufp->fullIData(oldp+1406,(0x2000U),32);
    bufp->fullIData(oldp+1407,(0x2710U),32);
    bufp->fullIData(oldp+1408,(0x30cU),32);
    bufp->fullCData(oldp+1409,(7U),4);
    bufp->fullCData(oldp+1410,(3U),4);
    bufp->fullCData(oldp+1411,(5U),4);
    bufp->fullCData(oldp+1412,(4U),4);
    bufp->fullCData(oldp+1413,(6U),4);
    bufp->fullCData(oldp+1414,(2U),4);
    bufp->fullCData(oldp+1415,(1U),4);
    bufp->fullSData(oldp+1416,(0x20U),13);
    bufp->fullCData(oldp+1417,(8U),4);
    bufp->fullCData(oldp+1418,(9U),4);
    bufp->fullIData(oldp+1419,(0xaU),32);
    bufp->fullIData(oldp+1420,(6U),32);
    bufp->fullIData(oldp+1421,(0x11U),32);
    bufp->fullIData(oldp+1422,(0x3fffffffU),32);
    bufp->fullIData(oldp+1423,(1U),32);
    bufp->fullCData(oldp+1424,(0xaU),4);
    bufp->fullIData(oldp+1425,(0xbU),32);
    bufp->fullIData(oldp+1426,(0x10U),32);
    bufp->fullIData(oldp+1427,(5U),32);
    bufp->fullIData(oldp+1428,(0x30U),32);
    bufp->fullIData(oldp+1429,(0x48U),32);
    bufp->fullIData(oldp+1430,(0x188U),32);
    bufp->fullIData(oldp+1431,(0x190U),32);
    bufp->fullIData(oldp+1432,(0x23U),32);
    bufp->fullIData(oldp+1433,(0x203U),32);
    bufp->fullIData(oldp+1434,(0x20dU),32);
    bufp->fullIData(oldp+1435,(3U),32);
    bufp->fullCData(oldp+1436,(7U),3);
    bufp->fullCData(oldp+1437,(6U),3);
    bufp->fullIData(oldp+1438,(0x400000U),32);
}
