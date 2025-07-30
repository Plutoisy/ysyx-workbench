module ysyx_24120011_EXMEM (
    input  clk,
    input  rst,
    //数据
    input  [3:0]  i_rd_ctrl,
    input  [18:0] i_mem_ctrl,
    input  [4:0]  i_csr_ctrl,
    input  [31:0] i_pc,
    input  [31:0] i_src1,
    input  [31:0] i_src2,
    input  [31:0] i_r_csr_data,
    input  [31:0] i_imm,
    input  [4:0]  i_rd,
    input  [11:0] i_w_csr_addr,
    input  [31:0] i_ALU_result,

    output [3:0]  o_rd_ctrl,
    output [18:0] o_mem_ctrl,
    output [4:0]  o_csr_ctrl,
    output [31:0] o_pc,
    output [31:0] o_src1,
    output [31:0] o_src2,
    output [31:0] o_r_csr_data,
    output [31:0] o_imm,
    output [4:0]  o_rd,
    output [11:0] o_w_csr_addr,
    output [31:0] o_ALU_result,
    //握手
    input  i_EXU_valid,
    output o_EXMEM_ready,
    input  i_MEM_ready,
    output o_EXMEM_valid
);
reg [3:0]  rd_ctrl;
reg [18:0] mem_ctrl;
reg [4:0]  csr_ctrl;
reg [31:0] pc;
reg [31:0] src1;
reg [31:0] src2;
reg [31:0] r_csr_data;
reg [31:0] imm;
reg [4:0]  rd;
reg [11:0] w_csr_addr;
reg [31:0] ALU_result;
reg full;

assign o_EXMEM_ready = ~full && i_MEM_ready;
assign o_EXMEM_valid = full;

assign o_rd_ctrl    = rd_ctrl;
assign o_mem_ctrl   = mem_ctrl;
assign o_csr_ctrl   = csr_ctrl;
assign o_pc         = pc;
assign o_src1       = src1;
assign o_src2       = src2;
assign o_r_csr_data = r_csr_data;
assign o_imm        = imm;
assign o_rd         = rd;
assign o_w_csr_addr = w_csr_addr;
assign o_ALU_result = ALU_result;

always @(posedge clk) begin
    if(rst) begin
        rd_ctrl    <=  'd0;
        mem_ctrl   <=  'd0;
        csr_ctrl   <=  'd0;
        pc         <=  'd0;
        src1       <=  'd0;
        src2       <=  'd0;
        r_csr_data <=  'd0;
        imm        <=  'd0;
        rd         <=  'd0;
        w_csr_addr <=  'd0;
        ALU_result <=  'd0;
        full       <= 1'b0;
    end
    else begin
        //输入握手
        if(i_EXU_valid && o_EXMEM_ready) begin
            rd_ctrl    <=  i_rd_ctrl   ;
            mem_ctrl   <=  i_mem_ctrl  ;
            csr_ctrl   <=  i_csr_ctrl  ;
            pc         <=  i_pc        ;
            src1       <=  i_src1      ;
            src2       <=  i_src2      ;
            r_csr_data <=  i_r_csr_data;
            imm        <=  i_imm       ;
            rd         <=  i_rd        ;
            w_csr_addr <=  i_w_csr_addr;
            ALU_result <=  i_ALU_result;
            full       <=  1'b1        ;
        end
        //输出握手
        if(o_EXMEM_valid && i_MEM_ready) begin
            //不复位为0以保持低功耗
            full <= 1'b0;
        end
    end
end
endmodule