module ysyx_24120011_CsrProcessor(
    input [31:0] alu_result,
    input [31:0] src1,
    input [3:0] w_csr_data_ctrl,
    output reg [31:0] w_csr_data
);
//4'd0 => 32'b0
//4'd1 => src1
//4'd2 => alu_result
always@(*)begin
    case(w_csr_data_ctrl)
        4'd0:    w_csr_data = 32'b0;
        4'd1:    w_csr_data = src1;
        4'd2:    w_csr_data = alu_result;
        default: w_csr_data = 32'b0;
    endcase
end
endmodule