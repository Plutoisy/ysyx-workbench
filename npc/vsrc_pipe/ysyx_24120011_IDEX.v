module ysyx_24120011_IDEX (
    input  clk,
    input  rst,
    //数据
    input  [2:0]  i_pc_ctrl,
    input  [3:0]  i_rd_ctrl,
    input  [5:0]  i_ALU_ctrl,
    input  [18:0] i_mem_ctrl,
    input  [4:0]  i_csr_ctrl,
    input  [31:0] i_pc,
    input  [31:0] i_src1,
    input  [31:0] i_src2,
    input  [31:0] i_r_csr_data,
    input  [31:0] i_imm,
    input  [4:0]  i_rd,
    input  [11:0] i_w_csr_addr,
    output [2:0]  o_pc_ctrl,
    output [3:0]  o_rd_ctrl,
    output [5:0]  o_ALU_ctrl,
    output [18:0] o_mem_ctrl,
    output [4:0]  o_csr_ctrl,
    output [31:0] o_pc,
    output [31:0] o_src1,
    output [31:0] o_src2,
    output [31:0] o_r_csr_data,
    output [31:0] o_imm,
    output [4:0]  o_rd,
    output [11:0] o_w_csr_addr,
    //握手
    input  i_IDU_valid,
    output o_IDEX_ready,
    input  i_EXU_ready,
    output o_IDEX_valid
);
reg [2:0]  pc_ctrl;
reg [3:0]  rd_ctrl;
reg [5:0]  ALU_ctrl;
reg [18:0] mem_ctrl;
reg [4:0]  csr_ctrl;
reg [31:0] pc;
reg [31:0] src1;
reg [31:0] src2;
reg [31:0] r_csr_data;
reg [31:0] imm;
reg [4:0]  rd;
reg [11:0] w_csr_addr;
reg full;

assign o_IDEX_ready = ~full;
assign o_IDEX_valid = full;

assign o_pc_ctrl    = pc_ctrl;
assign o_rd_ctrl    = rd_ctrl;
assign o_ALU_ctrl   = ALU_ctrl;
assign o_mem_ctrl   = mem_ctrl;
assign o_csr_ctrl   = csr_ctrl;
assign o_pc         = pc;
assign o_src1       = src1;
assign o_src2       = src2;
assign o_r_csr_data = r_csr_data;
assign o_imm        = imm;

always @(posedge clk) begin
    if(rst) begin
        pc_ctrl    <=  'd0;
        rd_ctrl    <=  'd0;
        ALU_ctrl   <=  'd0;
        mem_ctrl   <=  'd0;
        csr_ctrl   <=  'd0;
        pc         <=  'd0;
        src1       <=  'd0;
        src2       <=  'd0;
        r_csr_data <=  'd0;
        imm        <=  'd0;
        rd         <=  'd0;
        w_csr_addr <=  'd0;
        full       <= 1'b0;
    end
    else begin
        //输入握手
        if(i_IDU_valid && o_IDEX_ready) begin
            pc_ctrl    <=  i_pc_ctrl   ;
            rd_ctrl    <=  i_rd_ctrl   ;
            ALU_ctrl   <=  i_ALU_ctrl  ;
            mem_ctrl   <=  i_mem_ctrl  ;
            csr_ctrl   <=  i_csr_ctrl  ;
            pc         <=  i_pc        ;
            src1       <=  i_src1      ;
            src2       <=  i_src2      ;
            r_csr_data <=  i_r_csr_data;
            imm        <=  i_imm       ;
            rd         <=  i_rd        ;
            w_csr_addr <=  i_w_csr_addr;
            full       <=  1'b1        ;
        end
        //输出握手
        if(o_IDEX_valid && i_EXU_ready) begin
            //不复位为0以保持低功耗
            full <= 1'b0;
        end
    end
end
endmodule