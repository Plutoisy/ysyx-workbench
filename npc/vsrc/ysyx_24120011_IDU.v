module ysyx_24120011_IDU (
    input [31:0]  inst,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [31:0] imme,
    output [2:0]  func3,
    output [6:0]  func7,
    output reg [1:0]  pc_ctrl,
    output reg [3:0]  rd_ctrl,
    output reg ALUBctrl,
    output reg w_mem_en,
    output reg [7:0] w_mem_len,
    output reg r_mem_en,
    output reg sign_extension,
    output reg [3:0] ALU_ctrl,
    output reg [7:0] r_mem_len
);

wire [6:0] opcode;
wire [2:0] opcode_type;

assign opcode   = inst[6:0];
assign rd       = inst[11:7];
assign rs1      = inst[19:15];
assign rs2      = inst[24:20];
assign func3    = inst[14:12];
assign func7    = inst[31:25];

ysyx_24120011_TypeFinder i_TypeFinder(
    .opcode ( opcode ),
    .opcode_type   ( opcode_type   )
);

ysyx_24120011_ImmeGen i_ImmeGen(
    .inst ( inst ),
    .opcode_type ( opcode_type ),
    .imme  ( imme  )
);

// 3'd0; I-Type
// 3'd1; U-Type
// 3'd2; J-Type
// 3'd3; S-Type
// 3'd4; R-Type
// 3'd5; B-Type
// 3'd7; Unknown

//--------------------PC---------------------//

//2'd0: pc_add_4;
//2'd1: pc_add_imme;
//2'd2: alu_result;
always@(*)begin
    case(opcode_type)
        3'd0:begin //I-Type
            if(opcode == 7'b1100111 && func3 == 3'b000)begin//jalr
                 pc_ctrl = 2'd2;
            end
            else begin
                 pc_ctrl = 2'd0;
            end
        end
        3'd2:    pc_ctrl = 2'd1;//J-Type jal
        3'd3:    pc_ctrl = 2'd0;//S-Type sw
        3'd4:    pc_ctrl = 2'd0;//R-Type
        3'd5:    pc_ctrl = 2'd0;//B-Type
        default: pc_ctrl = 2'd0;
    endcase
end

//---------------------Rd----------------------//

//4'd0: pc_add_4;
//4'd1: pc_add_imme;
//4'd2: alu_result;
//4'd3: imme;
//4'd4: w_en = 1'd0;
//4'd5: rdata;
always@(*)begin
    if(rd == 5'b00000) begin
        rd_ctrl = 4'd4;
    end
    else begin
        case(opcode_type)
            3'd0:begin //I-Type
                if(opcode == 7'b1100111 && func3 == 3'b000)begin//jalr
                    rd_ctrl = 4'd0;
                end
                else if(opcode == 7'b0010011 && func3 == 3'b000)begin//addi
                    rd_ctrl = 4'd2;
                end
                else if(opcode == 7'b0010011 && func3 == 3'b011)begin//sltiu
                    rd_ctrl = 4'd2;
                end
                else if(opcode == 7'b0000011)begin//lb lbu lh lhu lw
                    rd_ctrl = 4'd5;
                end
                else begin
                    rd_ctrl = 4'd0;
                end
            end
            3'd1:begin //U-Type
                if(opcode == 7'b0010111)begin//auipc
                    rd_ctrl = 4'd1;
                end
                else if(opcode == 7'b0110111)begin//lui
                    rd_ctrl = 4'd3;
                end
                else begin
                    rd_ctrl = 4'd0;
                end
            end
            3'd2:    rd_ctrl = 4'd0;//J-Type jal
            3'd3:    rd_ctrl = 4'd4;//S-Type sw
            3'd4:    rd_ctrl = 4'd2;//R-Type
            3'd5:    rd_ctrl = 4'd4;//B-Type
            default: rd_ctrl = 4'd0;
        endcase
    end
end

//---------------------ALUB----------------------//

//ALUBctrl == 1'd0 -> imme
//ALUBctrl == 1'd1 -> src2
always@(*)begin
    case(opcode_type)
        3'd0:begin //I-Type
            if(opcode == 7'b0010011 && func3 == 3'b000)begin//addi
                 ALUBctrl = 1'd0;
            end
            else if(opcode == 7'b0010011 && func3 == 3'b011)begin//sltiu
                 ALUBctrl = 1'd0;
            end
            else if(opcode == 7'b0000011)begin//lb lbu lh lhu lw
                 ALUBctrl = 1'd0;
            end
            else begin
                 ALUBctrl = 1'd1;
            end
        end
        3'd3:    ALUBctrl = 1'd0;//S-Type sw
        3'd4:    ALUBctrl = 1'd1;//R-Type
        3'd4:    ALUBctrl = 1'd1;//B-Type
        default: ALUBctrl = 1'd1;
    endcase
end

//---------------------ALU_ctrl----------------------//
// ALUctr[3]     ALUctr[2:0]     ALU操作
// 0             000             选择加法器输出，做加法
// 1             000             选择加法器输出，做减法
// x             001             选择移位器输出，左移
// 0             010             做减法，选择带符号小于置位结果输出, Less按带符号结果设置
// 1             010             做减法，选择无符号小于置位结果输出, Less按无符号结果设置
// 0             011             A==B
// 1             011             A!=B
// x             100             选择异或输出
// 0             101             选择移位器输出，逻辑右移
// 1             101             选择移位器输出，算术右移
// 0             110             选择逻辑或输出
// 1             110             选择逻辑与输出
// 0             111             做减法，选择带符号大于等于置位结果输出, Less按带符号结果设置
// 1             111             做减法，选择无符号大于等于置位结果输出, Less按无符号结果设置
always@(*)begin
    case(opcode_type)
        3'd0:begin//I-Type
            if(func3 == 3'b011 && func7 == 7'b0010011)begin//addi
                ALU_ctrl = 4'b0000;
            end
            else if(func3 == 3'b000 && func7 == 7'b0010011)begin//sltiu
                ALU_ctrl = 4'b1010;
            end
            else begin
                ALU_ctrl = 4'b0000;
            end
        end
        3'd3:   ALU_ctrl = 4'd0;//S-Type
        3'd4:begin//R-Type
            if(func3 == 3'b000 && func7 == 7'b0000000)begin//add
                ALU_ctrl = 4'b0000;
            end
            else if(func3 == 3'b000 && func7 == 7'b0100000)begin//sub
                ALU_ctrl = 4'b0001;
            end
            else begin
                ALU_ctrl = 4'b0000;
            end
        end
        3'd5:begin//B-Type
            if(func3 == 3'b000)begin//beq
                ALU_ctrl = 4'b0011;
            end
            else begin
                ALU_ctrl = 4'b0000;
            end
        end
        default: ALU_ctrl = 4'd0;
    endcase
end

//---------------------w_mem----------------------//

always@(*)begin
    case(opcode_type)
        3'd3:begin //S-Type
            w_mem_en = 1'd1;
            if(func3 == 3'b000)begin//sb
                 w_mem_len = 8'd1;
            end
            else if(func3 == 3'b001)begin//sh
                 w_mem_len = 8'd2;
            end
            else if(func3 == 3'b010)begin//sw
                 w_mem_len = 8'd4;
            end
            else begin
                 w_mem_len = 8'd1;
            end
        end
        default: begin 
            w_mem_en = 1'd0;
            w_mem_len = 8'd1;
        end
    endcase
end

//---------------------r_mem----------------------//

always@(*)begin
    case(opcode_type)
        3'd0:begin //I-Type
            if(opcode == 7'b0000011)begin//lb lbu lh lhu lw
                r_mem_en = 1'd1;
                if(func3 == 3'b000)begin//lb
                    r_mem_len = 8'd1;
                    sign_extension = 1'd1;
                end
                else if(func3 == 3'b001)begin//lh
                    r_mem_len = 8'd2;
                    sign_extension = 1'd1;
                end
                else if(func3 == 3'b010)begin//lw
                    r_mem_len = 8'd4;
                    sign_extension = 1'd1;
                end
                else if(func3 == 3'b100)begin//lbu
                    r_mem_len = 8'd1;
                    sign_extension = 1'd0;
                end
                else if(func3 == 3'b101)begin//lhu
                    r_mem_len = 8'd2;
                    sign_extension = 1'd0;
                end
                else begin
                    r_mem_len = 8'd1;
                    sign_extension = 1'd0;
                end
            end
            else begin
                r_mem_en = 1'd0;
            end
        end
        default: begin 
            r_mem_en = 1'd0;
            r_mem_len = 8'd1;
            sign_extension = 1'd0;
        end
    endcase
end
endmodule
