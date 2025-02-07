module ysyx_24120011_ALU(
    input  [31:0] A,
    input  [31:0] B,
    input  [3:0]  ALU_ctrl,
    output [31:0] ALUout
);
wire [31:0] B_in;
assign B_in = sub_or_add ? B ^ {32{ALU_ctrl[0]}} + 1 : B;
ysyx_24120011_Adder i_Adder(
    .x ( A ),
    .y ( B_in ),
    .s ( ALUout )
);

endmodule
