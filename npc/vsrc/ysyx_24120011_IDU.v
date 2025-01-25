module ysyx_24120011_IDU (
    input [31:0] inst,
    output [4:0] rd,
    output [4:0] rs1,
    output [31:0] imme
);

wire [6:0] opcode;
wire [2:0] opcode_type;

assign opcode = inst[6:0];
assign rd     = inst[11:7];
assign rs1    = inst[19:15];

ysyx_24120011_TypeFinder i_TypeFinder(
    .opcode ( opcode ),
    .opcode_type   ( opcode_type   )
);

ysyx_24120011_ImmeGen i_ImmeGen(
    .inst ( inst ),
    .opcode_type ( opcode_type ),
    .imme  ( imme  )
);


endmodule
