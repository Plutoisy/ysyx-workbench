module ysyx_24120011_top (
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc,
    output [31:0] inst_out
);

ysyx_24120011_Reg #(32, 32'h8000_0000) i_pc (clk, rst, dnpc, pc, 1'b1);

wire [31:0] dnpc;

assign dnpc = rst ? 32'h8000_0000 : pc + 32'h0000_0004;

assign inst_out = inst;

endmodule
