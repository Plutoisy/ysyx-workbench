// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull_mul_top.h"

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[0].u_mul0")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[0].u_mul1")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[0].u_mul2")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[0].u_mul3")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[1].u_mul0")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[1].u_mul1")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[1].u_mul2")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[1].u_mul3")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[2].u_mul0")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[2].u_mul1")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[2].u_mul2")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[2].u_mul3")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[3].u_mul0")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[3].u_mul1")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[3].u_mul2")}
    , TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3{this, Verilated::catName(namep, "ysyxSoCFull.asic.cpu.cpu.u_PE_ctrl.pe_blocks[3].u_mul3")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2;
    TOP.__PVT__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3 = &TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul0.__Vconfigure(true);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul1.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul2.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__0__KET____DOT__u_mul3.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul0.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul1.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul2.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__1__KET____DOT__u_mul3.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul0.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul1.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul2.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__2__KET____DOT__u_mul3.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul0.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul1.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul2.__Vconfigure(false);
    TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__u_PE_ctrl__DOT__pe_blocks__BRA__3__KET____DOT__u_mul3.__Vconfigure(false);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4frag.configure(this, name(), "ysyxSoCFull.asic.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar_1.configure(this, name(), "ysyxSoCFull.asic.axi4xbar_1", "axi4xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank.configure(this, name(), "ysyxSoCFull.asic.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4yank__unnamedblk1.configure(this, name(), "ysyxSoCFull.asic.axi4yank.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lmrom.configure(this, name(), "ysyxSoCFull.asic.lmrom", "lmrom", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash.configure(this, name(), "ysyxSoCFull.flash", "flash", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__flash__flash_cmd_i.configure(this, name(), "ysyxSoCFull.flash.flash_cmd_i", "flash_cmd_i", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__psram.configure(this, name(), "ysyxSoCFull.psram", "psram", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
