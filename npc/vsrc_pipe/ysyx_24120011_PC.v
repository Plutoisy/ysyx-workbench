module ysyx_24120011_PC (
    input  clk,
    input  rst,
    //数据
    input  [31:0]  i_npc,
    output [31:0]  o_pc,
    // input  [31:0]  i_IFU_pc,
    // input  [31:0]  i_IFU_inst,
    //握手
    input  i_EXU_valid,
    output o_PC_ready,
    input  i_IFU_ready,
    output o_PC_valid
);
reg [31:0] npc;
reg full;

assign o_PC_ready = ~full;
assign o_PC_valid = full;

assign o_pc = npc;

always @(posedge clk) begin
    if(rst) begin
        npc   <= 32'h3000_0000;
        full  <= 1'b1;
    end
    else begin
        //输入握手
        if(i_EXU_valid && o_PC_ready) begin
            npc   <= i_npc;
            full <= 1'b1;
        end
        //输出握手
        if(o_PC_valid && i_IFU_ready) begin
            //inst不复位为0以保持低功耗
            full <= 1'b0;
        end
    end
end
endmodule