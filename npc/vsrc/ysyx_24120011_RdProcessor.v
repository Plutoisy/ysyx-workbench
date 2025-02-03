module ysyx_24120011_RdProcessor(
    input [31:0] pc_add_imme_out,
    input [31:0] pc_add_4_out,
    input [31:0] alu_result,
    input [31:0] imme,
    input [2:0]  rd_ctrl,
    output reg [31:0] wdata
);

always@(*)begin
    case(rd_ctrl)
        3'd0: wdata = pc_add_4_out;
        3'd1: wdata = pc_add_imme_out;
        3'd2: wdata = alu_result;
        3'd3: wdata = imme;
        default: wdata = 32'h0000_0000;
    endcase
end

endmodule