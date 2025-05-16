// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VysyxSoCFull.h for the primary calling header

#ifndef VERILATED_VYSYXSOCFULL_MUL_TOP_H_
#define VERILATED_VYSYXSOCFULL_MUL_TOP_H_  // guard

#include "verilated.h"


class VysyxSoCFull__Syms;

class alignas(VL_CACHE_LINE_BYTES) VysyxSoCFull_mul_top final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(in0,7,0);
        VL_IN8(in1,7,0);
        VL_OUT8(out8,7,0);
        CData/*3:0*/ __VdfgRegularize_h60c5f4dd_0_0;
        CData/*0:0*/ __VdfgRegularize_h60c5f4dd_0_1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__not_o;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__inv_unit_bit1__DOT__aORb;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__2__KET____DOT__inv_unit_inst__DOT__aORb;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__3__KET____DOT__inv_unit_inst__DOT__aORb;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__4__KET____DOT__inv_unit_inst__DOT__aORb;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inv_converter_8_inst__DOT__genblk1__BRA__5__KET____DOT__inv_unit_inst__DOT__aORb;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_and_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__c1_nor_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__flag_2x;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_and_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__c1_nor_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__flag_2x;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_and_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__c1_nor_c0;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__flag_2x;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__cout_class1_ppc12__BRA__0__KET__;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__in_0_1_compressor_4_2_class1_ppc12_19__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__c;
        CData/*0:0*/ mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT____Vcellout__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__co;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__wire_d;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_1__DOT__half_adder_class__DOT__a_and_b;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__in_0_1_compressor_4_2_class1_ppc12_19__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_20__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__4__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_3_2_class1_ppc12_inst__BRA__5__KET____DOT__compressor_3_2_class1_ppc12_i__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__7__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d;
    };
    struct {
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__8__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__9__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__10__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__wire_d;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class1__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_compressor_inst__DOT__compressor_4_2_class1_ppc12_inst__BRA__11__KET____DOT__compressor_4_2_class1_ppc12_i__DOT__compressor_3_2_class2__DOT__xoro1_nand_ci;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__full_adder_c3__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__5__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i1;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__full_adder_c7_5__i0;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__6__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i1;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__full_adder_c7_5__i0;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__7__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__8__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__9__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__10__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__11__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__12__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__13__KET____DOT__full_adder_c7_5__co;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__full_adder_c7_5__i0;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellout__genblk1__BRA__14__KET____DOT__full_adder_c7_5__d;
        CData/*0:0*/ mult_8_8_top_inst__DOT__adder_16_inst__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__full_adder_c7_5__i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c2__DOT__a_and_b;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__full_adder_c3__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__half_adder_c4__DOT__a_and_b;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__5__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__6__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
    };
    struct {
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__7__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__8__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__9__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__10__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__11__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__12__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__13__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__i0_nand_i1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xor_o1;
        CData/*0:0*/ __PVT__mult_8_8_top_inst__DOT__adder_16_inst__DOT__genblk1__BRA__14__KET____DOT__full_adder_c7_5__DOT__xoro1_nand_ci;
        VL_OUT16(out16,15,0);
        SData/*8:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__inversed_A;
        SData/*8:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp1__DOT__pp_source;
        SData/*8:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp2__DOT__pp_source;
        SData/*8:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp3__DOT__pp_source;
        SData/*8:0*/ __PVT__mult_8_8_top_inst__DOT__booth2_pp_gen_inst__DOT__booth2_pp_decoder_pp4__DOT__pp_source;
        SData/*8:0*/ __VdfgRegularize_h0309defd_0_0;
        SData/*8:0*/ __VdfgRegularize_h0309defd_0_2;
        SData/*8:0*/ __VdfgRegularize_h0309defd_0_3;
        SData/*8:0*/ __VdfgRegularize_h0309defd_0_5;
    };

    // INTERNAL VARIABLES
    VysyxSoCFull__Syms* const vlSymsp;

    // CONSTRUCTORS
    VysyxSoCFull_mul_top(VysyxSoCFull__Syms* symsp, const char* v__name);
    ~VysyxSoCFull_mul_top();
    VL_UNCOPYABLE(VysyxSoCFull_mul_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
