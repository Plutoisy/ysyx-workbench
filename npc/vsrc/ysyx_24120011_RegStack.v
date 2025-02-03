module ysyx_24120011_RegStack(
    input clk,
    input rst,
    input [31:0] wdata,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    output [31:0] src1,
    output [31:0] src2
    output [31:0] a0;
);

reg [31:0] Regs [31:0];

assign src1 = Regs[rs1];
assign src2 = Regs[rs2];
assign a0 = Regs[10];

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
        Regs[rd] <= wdata;
    end
end

endmodule
