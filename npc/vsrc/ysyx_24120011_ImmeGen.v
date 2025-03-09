`timescale 1ns/1ps
module ysyx_24120011_ImmeGen(
    input  [31:0] inst,
    input  [2:0] opcode_type,
    output reg [31:0] imme
);

// 3'd0; I-Type
// 3'd1; U-Type
// 3'd2; J-Type
// 3'd3; S-Type
// 3'd4; R-Type
// 3'd5; B-Type
// 3'd7; Unknown

always@(*)begin
    case(opcode_type)
        3'd0      : imme = {{20{inst[31]}},inst[31:20]};//I-Type
        3'd1      : imme = {inst[31:12],12'b0};//U-Type
        3'd2      : imme = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};//J-Type
        3'd3      : imme = {{20{inst[31]}},inst[31:25],inst[11:7]};//S-Type
        3'd5      : imme = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};//B-Type
        default   : imme = 32'h0000_0000;//Unknown/R-Type
    endcase
end
endmodule
