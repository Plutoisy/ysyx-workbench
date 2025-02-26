module ysyx_24120011_WBU(
    input [31:0] pc_add_imme_out,
    input [31:0] pc_add_4_out,
    input [31:0] alu_result,
    input [31:0] imme,
    input [31:0] r_mem_data,
    input [31:0] r_csr_data,
    input [3:0]  rd_ctrl,
    input LSU_valid,
    output w_en,
    output reg [31:0] wdata
);
assign w_en = LSU_valid ? (rd_ctrl == 4'd4 ? 1'd0 : 1'd1) : 1'd0;
always@(*)begin
    case(rd_ctrl)
        4'd0: wdata = pc_add_4_out;
        4'd1: wdata = pc_add_imme_out;
        4'd2: wdata = alu_result;
        4'd3: wdata = imme;
        4'd4: wdata = 32'h0000_0000;
        4'd5: wdata = r_mem_data;
        4'd6: wdata = r_csr_data;
        default: wdata = 32'h0000_0000;
    endcase
end

endmodule