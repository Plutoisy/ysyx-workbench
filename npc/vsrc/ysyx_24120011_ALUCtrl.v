module ysyx_24120011_ALUCtrl(
    input [1:0] ALUBctrl,
    input [31:0] src2,
    input [31:0] imme,
    input [31:0] r_csr_data,
    output [31:0] ALUB
);
//ALUBctrl == 2'd0 -> imme
//ALUBctrl == 2'd1 -> src2
//ALUBctrl == 2'd2 -> r_csr_data
always@(*)begin
    case(ALUBctrl)
        2'd0: ALUB = imme;
        2'd1: ALUB = src2;
        2'd2: ALUB = r_csr_data;
        default: ALUB = 32'b0;
    endcase
end
endmodule