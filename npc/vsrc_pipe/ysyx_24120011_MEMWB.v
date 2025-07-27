module ysyx_24120011_MEMWB (
    input  clk,
    input  rst,
    //数据
    input  [31:0] i_r_mem_data,
    input  [3:0]  i_rd_ctrl,
    input  [4:0]  i_csr_ctrl,
    input  [31:0] i_pc,
    input  [31:0] i_src1,
    input  [31:0] i_r_csr_data,
    input  [31:0] i_imm,
    input  [4:0]  i_rd,
    input  [11:0] i_w_csr_addr,
    input  [31:0] i_ALU_result,

    output [31:0] o_r_mem_data,
    output [3:0]  o_rd_ctrl,
    output [4:0]  o_csr_ctrl,
    output [31:0] o_pc,
    output [31:0] o_src1,
    output [31:0] o_r_csr_data,
    output [31:0] o_imm,
    output [4:0]  o_rd,
    output [11:0] o_w_csr_addr,
    output [31:0] o_ALU_result,
    //握手
    input  i_MEM_valid,
    output o_MEMWB_ready,
    input  i_WBU_ready,
    output o_MEMWB_valid
);
reg [31:0] r_mem_data;
reg [3:0]  rd_ctrl;
reg [4:0]  csr_ctrl;
reg [31:0] pc;
reg [31:0] src1;
reg [31:0] r_csr_data;
reg [31:0] imm;
reg [4:0]  rd;
reg [11:0] w_csr_addr;
reg [31:0] ALU_result;
reg full;

assign o_MEMWB_ready = ~full;
assign o_MEMWB_valid = full;

assign o_r_mem_data = r_mem_data;
assign o_rd_ctrl    = rd_ctrl;
assign o_csr_ctrl   = csr_ctrl;
assign o_pc         = pc;
assign o_src1       = src1;
assign o_r_csr_data = r_csr_data;
assign o_imm        = imm;
assign o_rd         = rd;
assign o_w_csr_addr = w_csr_addr;
assign o_ALU_result = ALU_result;

always @(posedge clk) begin
    if(rst) begin
        r_mem_data <=  'd0;
        rd_ctrl    <=  'd0;
        csr_ctrl   <=  'd0;
        pc         <=  'd0;
        src1       <=  'd0;
        r_csr_data <=  'd0;
        imm        <=  'd0;
        rd         <=  'd0;
        w_csr_addr <=  'd0;
        ALU_result <=  'd0;
        full       <= 1'b0;
    end
    else begin
        //输入握手
        if(i_MEM_valid && o_MEMWB_ready) begin
            r_mem_data <=  i_r_mem_data;
            rd_ctrl    <=  i_rd_ctrl   ;
            csr_ctrl   <=  i_csr_ctrl  ;
            pc         <=  i_pc        ;
            src1       <=  i_src1      ;
            r_csr_data <=  i_r_csr_data;
            imm        <=  i_imm       ;
            rd         <=  i_rd        ;
            w_csr_addr <=  i_w_csr_addr;
            ALU_result <=  i_ALU_result;
            full       <=  1'b1        ;
        end
        //输出握手
        if(o_MEMWB_valid && i_WBU_ready) begin
            //不复位为0以保持低功耗
            full <= 1'b0;
        end
    end
end
endmodule