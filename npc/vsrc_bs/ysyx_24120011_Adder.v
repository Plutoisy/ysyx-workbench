
module ysyx_24120011_Adder(
    input  [31:0] x,
    input  [31:0] y,
    output [31:0] s,
    output c
);
    assign {c, s} = x + y;
endmodule
