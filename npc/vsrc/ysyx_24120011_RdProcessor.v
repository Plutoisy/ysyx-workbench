module ysyx_24120011_RdProcessor(
    input [31:0] pc_add_imme_out,
    input [31:0] pc_add_4_out,
    input [31:0] alu_result,
    input [31:0] imme,
    input [3:0]  rd_ctrl,
    output reg [31:0] wdata
);

always@(*)begin
    case(rd_ctrl)
        4'd0: wdata = pc_add_4_out;
        4'd1: wdata = pc_add_imme_out;
        4'd2: wdata = alu_result;
        4'd3: wdata = imme;
        default: wdata = 32'h0000_0000;
    endcase
end

endmodule