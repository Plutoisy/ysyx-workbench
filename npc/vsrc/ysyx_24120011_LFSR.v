module ysyx_24120011_LFSR(
  input clk,
  input  [7:0] in,
  output reg [7:0] out
);

always@(posedge clk) begin
    out <= {in[4]^in[3]^in[2]^in[0],in[7:1]};
end

endmodule