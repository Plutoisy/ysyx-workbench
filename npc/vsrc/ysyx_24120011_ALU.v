module ysyx_24120011_ALU(
    input  [31:0] A,
    input  [31:0] B,
    input         sub_or_add,
    output [31:0] ALUout
);
wire [31:0] B_in;
assign B_in = sub_or_add ? B ^ {32{sub_or_add}} + 1 : B;
ysyx_24120011_Adder i_Adder(
    .x ( A ),
    .y ( B_in ),
    .s ( ALUout )
);

endmodule
