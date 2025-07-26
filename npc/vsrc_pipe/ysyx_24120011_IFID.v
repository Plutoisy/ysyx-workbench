module ysyx_24120011_IFID (
    input  clk,
    input  rst,
    //数据
    input  [31:0] i_pc,
    input  [31:0] i_inst,
    output [31:0] o_pc,
    output [31:0] o_inst,
    //握手
    input  i_IFU_valid,
    output o_IFID_ready,
    input  i_IDU_ready,
    output o_IFID_valid
);
reg [31:0] inst;
reg [31:0] pc;
reg full;

assign o_IFID_ready = ~full;
assign o_IFID_valid = full;

assign o_pc         = pc;
assign o_inst       = inst;

always @(posedge clk) begin
    if(rst) begin
        inst <= 32'h0000_0000;
        pc   <= 32'h0000_0000;
        full <= 1'b0;
    end
    else begin
        //输入握手
        if(i_IFU_valid && o_IFID_ready) begin
            inst <= i_inst;
            pc   <= i_pc;
            full <= 1'b1;
        end
        //输出握手
        if(o_IFID_valid && i_IDU_ready) begin
            //inst不复位为0以保持低功耗
            full <= 1'b0;
        end
    end
end

endmodule