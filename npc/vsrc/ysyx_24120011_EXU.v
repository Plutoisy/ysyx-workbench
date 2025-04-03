module ysyx_24120011_EXU(
    input  [31:0] A,
    input  [31:0] B,
    input  [3:0]  ALU_ctrl,
    input  [1:0] ALUBctrl,
    input  [31:0] src2,
    input  [31:0] imme,
    input  [31:0] r_csr_data,
    output [31:0] ALUout,
    output [31:0] ALUB
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

endmodule

