module ysyx_24120011_EXU (
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

    output [31:0] o_npc,
    //握手
    input  i_IDEX_valid,
    output o_EXU_ready,
    input  i_EXMEM_ready,
    input  i_PC_ready,
    output o_EXU_valid
);

parameter ysyx_24120011_EXU_IDLE      = 1'b0;
parameter ysyx_24120011_EXU_WORKING   = 1'b1;

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

reg state;
reg next_state;

assign o_EXU_ready  = ((state == ysyx_24120011_EXU_IDLE) && i_EXMEM_ready /*&& i_PC_ready*/) ? 1'b1 : 1'b0;
assign o_EXU_valid  = (state == ysyx_24120011_EXU_WORKING && next_state == ysyx_24120011_EXU_IDLE) ? 1'b1 : 1'b0;

assign o_rd_ctrl    = rd_ctrl     ;
assign o_mem_ctrl   = mem_ctrl    ;
assign o_csr_ctrl   = csr_ctrl    ;
assign o_pc         = pc          ;
assign o_src1       = src1        ;
assign o_src2       = src2        ;
assign o_r_csr_data = r_csr_data  ;
assign o_imm        = imm         ;
assign o_rd         = rd          ;
assign o_w_csr_addr = w_csr_addr  ;
assign o_ALU_result = ALU_result  ;
assign o_npc        = npc         ;

//指令锁存
// always @(posedge clk) begin
//     if(rst) begin
//         pc_ctrl    <=  'd0;
//         rd_ctrl    <=  'd0;
//         ALU_ctrl   <=  'd0;
//         mem_ctrl   <=  'd0;
//         csr_ctrl   <=  'd0;
//         pc         <=  'd0;
//         src1       <=  'd0;
//         src2       <=  'd0;
//         r_csr_data <=  'd0;
//         imm        <=  'd0;
//         rd         <=  'd0;
//         w_csr_addr <=  'd0;
//     end
//     else begin
//         //输入握手
//         if(i_IDEX_valid && o_EXU_ready) begin
//             pc_ctrl    <=  i_pc_ctrl   ;
//             rd_ctrl    <=  i_rd_ctrl   ;
//             ALU_ctrl   <=  i_ALU_ctrl  ;
//             mem_ctrl   <=  i_mem_ctrl  ;
//             csr_ctrl   <=  i_csr_ctrl  ;
//             pc         <=  i_pc        ;
//             src1       <=  i_src1      ;
//             src2       <=  i_src2      ;
//             r_csr_data <=  i_r_csr_data;
//             imm        <=  i_imm       ;
//             rd         <=  i_rd        ;
//             w_csr_addr <=  i_w_csr_addr;
//         end
//     end
// end
always @(*) begin
            pc_ctrl    =  i_pc_ctrl   ;
            rd_ctrl    =  i_rd_ctrl   ;
            ALU_ctrl   =  i_ALU_ctrl  ;
            mem_ctrl   =  i_mem_ctrl  ;
            csr_ctrl   =  i_csr_ctrl  ;
            pc         =  i_pc        ;
            src1       =  i_src1      ;
            src2       =  i_src2      ;
            r_csr_data =  i_r_csr_data;
            imm        =  i_imm       ;
            rd         =  i_rd        ;
            w_csr_addr =  i_w_csr_addr;
end
//状态机跳转
always@(*)begin
    case(state)
        ysyx_24120011_EXU_IDLE:    next_state = (i_IDEX_valid && o_EXU_ready) ? ysyx_24120011_EXU_WORKING : ysyx_24120011_EXU_IDLE;
        ysyx_24120011_EXU_WORKING: next_state = ysyx_24120011_EXU_IDLE;
        default : next_state = ysyx_24120011_EXU_IDLE;
    endcase
end
always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_EXU_IDLE;
    end
    else begin
        state <= next_state;
    end
end

//ALU逻辑
wire [31:0] A;
reg  [31:0] B;
reg  [31:0] ALU_result;

assign A = src1;
//多路选择器，选择B
always@(*)begin
    case(ALU_ctrl[5:4])
        2'd0: B = imm;
        2'd1: B = src2;
        2'd2: B = r_csr_data;
        default: B = 32'b0;
    endcase
end
//ALU
ysyx_24120011_ALU u_ysyx_24120011_ALU(
    .A        ( A                   ),
    .B        ( B                   ),
    .ALU_ctrl ( ALU_ctrl[3:0]       ),
    .ALUout   ( ALU_result          )
);


//pc逻辑
reg  [31:0] npc;
always@(*)begin
    case(pc_ctrl)
        3'd0: npc = pc + 32'd4;
        3'd1: npc = pc + imm;
        3'd2: npc = ALU_result;
        3'd3: npc = r_csr_data;
        3'd4: begin
            if(ALU_result[0] == 1'b1)begin
                npc = pc + imm;
            end
            else begin
                npc = pc + 32'd4;
            end
        end
        default: npc = 32'h3000_0000;
    endcase
end
endmodule