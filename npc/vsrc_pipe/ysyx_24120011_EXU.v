import "DPI-C" function void branch_count(input int all_counter_branch,input int miss_counter_branch);
module ysyx_24120011_EXU (
    input  clk,
    input  rst,
    //数据
    input  [2:0]  i_pc_ctrl,
    input  [2:0]  i_rd_ctrl,
    input  [5:0]  i_ALU_ctrl,
    input  [18:0] i_mem_ctrl,
    input  [2:0]  i_csr_ctrl,
    input  [31:0] i_pc,
    input  [31:0] i_src1,
    input  [31:0] i_src2,
    input  [31:0] i_r_csr_data,
    input  [31:0] i_imm,
    input  [4:0]  i_rd,
    input  [11:0] i_w_csr_addr,

    output [2:0]  o_rd_ctrl,
    output [18:0] o_mem_ctrl,
    output [2:0]  o_csr_ctrl,
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
    input  i_IDU_valid,
    output o_EXU_ready,
    input  i_MEM_ready,
    output o_EXU_valid,
    //flush
    output o_flush,
    input [31:0] i_IFU_pc,
    input  i_IDU_empty
);
//======================dpic========================//
reg [31:0] miss_counter_branch;
reg [31:0] all_counter_branch;
always @(posedge clk ) begin
    branch_count(all_counter_branch,miss_counter_branch);
end
always @(posedge clk) begin
    if (rst) begin
        miss_counter_branch <= 'd0;
        all_counter_branch  <= 'd0;
    end else begin
        if(o_EXU_valid) begin
            all_counter_branch <= all_counter_branch + 1;
            if (i_IDU_empty) begin
                if (i_IFU_pc != npc) begin
                    miss_counter_branch <= miss_counter_branch + 1;
                end 
            end else begin
                if (i_pc != npc) begin
                    miss_counter_branch <= miss_counter_branch + 1;
                end 
            end
        end
    end
end
//======================dpic========================//
parameter ysyx_24120011_EXU_IDLE_EMPTY = 2'd0;
parameter ysyx_24120011_EXU_IDLE_FULL  = 2'd1;
parameter ysyx_24120011_EXU_WORKING    = 2'd2;

reg [2:0]  pc_ctrl;
reg [2:0]  rd_ctrl;
reg [5:0]  ALU_ctrl;
reg [18:0] mem_ctrl;
reg [2:0]  csr_ctrl;
reg [31:0] pc;
reg [31:0] src1;
reg [31:0] src2;
reg [31:0] r_csr_data;
reg [31:0] imm;
reg [4:0]  rd;
reg [11:0] w_csr_addr;

reg [1:0] state;
reg [1:0] next_state;

assign o_flush = flush;
reg flush;
always @(posedge clk) begin
    if(o_EXU_valid) begin
        if (i_IDU_empty) begin
            if (i_IFU_pc != npc) begin
                flush <= 1'b1;
            end else begin
                flush <= 1'b0;
            end
        end else begin
            if (i_pc != npc) begin
                flush <= 1'b1;
            end else begin
                flush <= 1'b0;
            end
        end
    end
    else begin
        flush <= 1'b0;
    end
end
//assign o_flush = !o_EXU_valid ? 1'b0 : (i_IDU_empty ? (i_IFU_pc != npc ? 1'b1 : 1'b0) : (i_pc != npc ? 1'b1 : 1'b0));

assign o_EXU_ready  = (state == ysyx_24120011_EXU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_EXU_valid  = (state == ysyx_24120011_EXU_IDLE_FULL && next_state == ysyx_24120011_EXU_IDLE_EMPTY) ? 1'b1 : 1'b0;

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
    end
    else begin
        //输入握手
        if(i_IDU_valid && o_EXU_ready) begin
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
        end
    end
end
// always @(*) begin
//             pc_ctrl    =  i_pc_ctrl   ;
//             rd_ctrl    =  i_rd_ctrl   ;
//             ALU_ctrl   =  i_ALU_ctrl  ;
//             mem_ctrl   =  i_mem_ctrl  ;
//             csr_ctrl   =  i_csr_ctrl  ;
//             pc         =  i_pc        ;
//             src1       =  i_src1      ;
//             src2       =  i_src2      ;
//             r_csr_data =  i_r_csr_data;
//             imm        =  i_imm       ;
//             rd         =  i_rd        ;
//             w_csr_addr =  i_w_csr_addr;
// end

//状态机跳转
always@(*)begin
    case(state)
        ysyx_24120011_EXU_IDLE_EMPTY : next_state = (i_IDU_valid && o_EXU_ready) ? ysyx_24120011_EXU_IDLE_FULL : ysyx_24120011_EXU_IDLE_EMPTY;
        ysyx_24120011_EXU_IDLE_FULL  : next_state = (i_MEM_ready) ? ysyx_24120011_EXU_IDLE_EMPTY : ysyx_24120011_EXU_IDLE_FULL;
        ysyx_24120011_EXU_WORKING    : next_state = ysyx_24120011_EXU_IDLE_EMPTY;
        default                      : next_state = ysyx_24120011_EXU_IDLE_EMPTY;
    endcase
end
always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_EXU_IDLE_EMPTY;
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
wire [31:0] B_in;
wire [31:0] B_in_used_for_overflow;
wire [31:0] ALUout_tmp;
wire carry;
wire overflow;
wire uless;
wire sless;
wire a_is_b;
wire a_not_b;
assign B_in = ALU_ctrl[0] ? ((B^{32{ALU_ctrl[0]}}) + 1'b1) : B;
assign B_in_used_for_overflow = ALU_ctrl[0] ? B^{32{ALU_ctrl[0]}} : B;
assign uless = ~carry;//无符号a<b标志
assign sless = ALUout_tmp[31] ^ overflow;
assign overflow = (A[31]==B_in_used_for_overflow[31]) && (A[31]!=ALUout_tmp[31]);
assign a_is_b  = A == B ? 1 : 0;
assign a_not_b = A != B ? 1 : 0;

assign {carry, ALUout_tmp} = A + B_in;

always@(*)begin
    case(ALU_ctrl[2:0])
        3'b000: begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = ALUout_tmp;
            end

            else begin
                ALU_result = {31'b0,a_is_b};
            end
        end
        3'b001:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = ALUout_tmp;
            end

            else begin
                ALU_result = {31'b0,a_not_b};
            end
        end
        3'b011:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = {31'b0,sless};
            end
            else begin
                if(B == 32'b0)begin
                    ALU_result = {31'b0,1'b0};
                end
                else begin
                    ALU_result = {31'b0,uless};
                end
            end
        end
        3'b111:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = {31'b0,~sless};
            end
            else begin
                if(B == 32'b0)begin
                    ALU_result = {31'b0,1'b1};
                end
                else begin
                    ALU_result = {31'b0,~uless};
                end
            end
        end
        3'b010:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = A^B;
            end
            else begin
                ALU_result = ALUout_tmp;//useless
            end
        end
        3'b100:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = A >> B[4:0]; //逻辑右移
            end
            else begin
                if(B[4:0] == 0)begin
                    ALU_result = A;
                end
                else begin
                    ALU_result = (A >> B[4:0]) | ({32{A[31]}} << (32-B[4:0]));//算术右移
                end
            end
        end
        3'b101:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = A | B;//or
            end
            else begin
                ALU_result = A & B;//and
            end
        end
        3'b110:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALU_result = A << B[4:0]; //逻辑左移
            end
            else begin
                ALU_result = ALUout_tmp;//useless
            end
        end
        default: ALU_result = ALUout_tmp;
    endcase
end


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