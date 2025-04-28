
import "DPI-C" function void reg_out(input int array[31:0]);

module ysyx_24120011_RegStack(
    input clk,
    input rst,
    input w_en,
    input w_pe_en,
    input [31:0] wdata,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    output reg [31:0] src1,
    output reg [31:0] src2,
    output reg [31:0] source_data0,
    output reg [31:0] source_data1,
    output reg [31:0] source_data2,
    output reg [31:0] source_data3,
    output reg [31:0] weight_data0,
    output reg [31:0] weight_data1,
    output reg [31:0] weight_data2,
    output reg [31:0] weight_data3,
    output reg [2:0]  mode,
    output reg [7:0]  imm,
    input [31:0] out0,
    input [31:0] out1,
    input [31:0] out2,
    input [31:0] out3,
    output [31:0] a0
);

reg [31:0] Regs [31:0];

assign src1 = Regs[rs1];
assign src2 = Regs[rs2];
assign a0 = Regs[10];

assign source_data0 = Regs[16];
assign source_data1 = Regs[17];
assign source_data2 = Regs[18];
assign source_data3 = Regs[19];
assign weight_data0 = Regs[20];
assign weight_data1 = Regs[21];
assign weight_data2 = Regs[22];
assign weight_data3 = Regs[23];
assign mode         = Regs[24][2:0];
assign imm          = Regs[25][7:0];

int regout[31:0];

genvar i, j;
generate
  for (i = 0; i < 32; i = i + 1) begin : outer
      always @(*) begin
        regout[i] = Regs[i];
      end
  end
endgenerate

always@(*)begin
    reg_out(regout);
end

always@(posedge clk)begin
    if(rst)begin
        Regs[0]  <= 32'h0000_0000;
        Regs[1]  <= 32'h0000_0000;
        Regs[2]  <= 32'h0000_0000;
        Regs[3]  <= 32'h0000_0000;
        Regs[4]  <= 32'h0000_0000;
        Regs[5]  <= 32'h0000_0000;
        Regs[6]  <= 32'h0000_0000;
        Regs[7]  <= 32'h0000_0000;
        Regs[8]  <= 32'h0000_0000;
        Regs[9]  <= 32'h0000_0000;
        Regs[10] <= 32'h0000_0000;
        Regs[11] <= 32'h0000_0000;
        Regs[12] <= 32'h0000_0000;
        Regs[13] <= 32'h0000_0000;
        Regs[14] <= 32'h0000_0000;
        Regs[15] <= 32'h0000_0000;
        Regs[16] <= 32'h0000_0000;
        Regs[17] <= 32'h0000_0000;
        Regs[18] <= 32'h0000_0000;
        Regs[19] <= 32'h0000_0000;
        Regs[20] <= 32'h0000_0000;
        Regs[21] <= 32'h0000_0000;
        Regs[22] <= 32'h0000_0000;
        Regs[23] <= 32'h0000_0000;
        Regs[24] <= 32'h0000_0000;
        Regs[25] <= 32'h0000_0000;
        Regs[26] <= 32'h0000_0000;
        Regs[27] <= 32'h0000_0000;
        Regs[28] <= 32'h0000_0000;
        Regs[29] <= 32'h0000_0000;
        Regs[30] <= 32'h0000_0000;
        Regs[31] <= 32'h0000_0000;
    end
    else begin
        Regs[0]  <= 32'h0000_0000;
        if(w_en)begin
            Regs[rd] <= wdata;
        end
        if(w_pe_en)begin
            Regs[26] <= out0;
            Regs[27] <= out1;
            Regs[28] <= out2;
            Regs[29] <= out3;
        end
    end
end

endmodule
