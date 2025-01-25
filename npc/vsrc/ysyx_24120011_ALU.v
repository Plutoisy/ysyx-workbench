module ysyx_24120011_ALU(
    input  [31:0] A,
    input  [31:0] B,
    input         sub_or_add,
    output [31:0] ALUout
);

ysyx_24120011_Adder i_Adder(
    .x ( A ),
    .y ( B ^ {32{sub_or_add}} ),
    .s ( ALUout )
);

endmodule