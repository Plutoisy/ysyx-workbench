module ysyx_24120011_EXU(
    input  clk,
    input  rst,
    input  IFU_valid,
    input  [31:0] A,
    input  [31:0] B,
    input  [3:0]  ALU_ctrl,
    input  [1:0] ALUBctrl,
    input  [31:0] src2,
    input  [31:0] imme,
    input  [31:0] r_csr_data,
    output [31:0] ALUout,
    output [31:0] ALUB,
    output EXU_valid
);

ysyx_24120011_ALU u_ysyx_24120011_ALU(
    .A        ( A        ),
    .B        ( B        ),
    .ALU_ctrl ( ALU_ctrl ),
    .ALUout   ( ALUout   )
);
ysyx_24120011_ALUCtrl u_ysyx_24120011_ALUCtrl(
    .ALUBctrl   ( ALUBctrl   ),
    .src2       ( src2       ),
    .imme       ( imme       ),
    .r_csr_data ( r_csr_data ),
    .ALUB       ( ALUB       )
);

reg reg_EXU_valid;
assign EXU_valid = reg_EXU_valid;

always@(posedge clk) begin
    if(rst) begin
        reg_EXU_valid <= 'd0;
    end
    else begin
        if(IFU_valid) begin
            reg_EXU_valid <= 'd1;
        end
        else begin
            reg_EXU_valid <= 'd0;
        end
    end
end

endmodule

