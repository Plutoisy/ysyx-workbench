module ysyx_24120011_top (
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc,
    output [31:0] inst_out
);

wire [31:0] dnpc;
wire [4:0] rs1;
wire [4:0] rd;
wire [31:0] imme;
wire [31:0] wdata;

assign dnpc = pc + 32'h0000_0004;
assign inst_out = inst;

ysyx_24120011_Reg #(32, 32'h8000_0000) i_pc (
    .clk   ( clk ), 
    .rst   ( rst ), 
    .din   ( dnpc ), 
    .dout  ( pc ), 
    .wen   ( 1'b1 )
);

ysyx_24120011_IDU i_IDU(
    .inst ( inst ),
    .rd   ( rd   ),
    .rs1  ( rs1  ),
    .imme  ( imme  )
);

ysyx_24120011_ALU i_ALU(
    .A          ( src1       ),
    .B          ( imme       ),
    .sub_or_add ( 1'b0       ),
    .ALUout     ( wdata      )
);

ysyx_24120011_RegStack i_RegStack(
    .clk   ( clk   ),
    .rst   ( rst   ),
    .wdata ( wdata ),
    .rd    ( rd    ),
    .rs1   ( rs1   ),
    .src1  ( src1  )
);




endmodule
