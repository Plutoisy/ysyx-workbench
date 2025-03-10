
module ysyx_24120011_LFSR(
  input clk,
  input  [7:0] in,
  output reg [7:0] out
);

always@(posedge clk) begin
    out <= 'd0;
end

endmodule