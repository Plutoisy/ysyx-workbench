module ysyx_24120011_Adder(
    input  [31:0] x,
    input  [31:0] y,
    output [31:0] s
);
    assign s = x + y;
endmodule