
// ALUctr[3]     ALUctr[2:0]     ALU操作
// 0             000             选择加法器输出，做加法
// 1             000             A==B
// 0             001             选择加法器输出，做减法
// 1             001             A!=B
// 0             010             选择异或输出
// 1             010             
// 0             011             做减法，选择带符号小于置位结果输出, Less按带符号结果设置
// 1             011             做减法，选择无符号小于置位结果输出, Less按无符号结果设置
// 0             100             选择移位器输出，逻辑右移
// 1             100             选择移位器输出，算术右移
// 0             101             选择逻辑或输出
// 1             101             选择逻辑与输出
// 0             110             选择移位器输出，左移
// 1             110             
// 0             111             做减法，选择带符号大于等于置位结果输出, Less按带符号结果设置
// 1             111             做减法，选择无符号大于等于置位结果输出, Less按无符号结果设置

module ysyx_24120011_ALU(
    input  [31:0] A,
    input  [31:0] B,
    input  [3:0]  ALU_ctrl,
    output reg [31:0] ALUout
);

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
                ALUout = ALUout_tmp;
            end

            else begin
                ALUout = {31'b0,a_is_b};
            end
        end
        3'b001:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = ALUout_tmp;
            end

            else begin
                ALUout = {31'b0,a_not_b};
            end
        end
        3'b011:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = {31'b0,sless};
            end
            else begin
                if(B == 32'b0)begin
                    ALUout = {31'b0,1'b0};
                end
                else begin
                    ALUout = {31'b0,uless};
                end
            end
        end
        3'b111:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = {31'b0,~sless};
            end
            else begin
                if(B == 32'b0)begin
                    ALUout = {31'b0,1'b1};
                end
                else begin
                    ALUout = {31'b0,~uless};
                end
            end
        end
        3'b010:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = A^B;
            end
            else begin
                ALUout = ALUout_tmp;//useless
            end
        end
        3'b100:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = A >> B[4:0]; //逻辑右移
            end
            else begin
                if(B[4:0] == 0)begin
                    ALUout = A;
                end
                else begin
                    ALUout = (A >> B[4:0]) | ({32{A[31]}} << (32-B[4:0]));//算术右移
                end
            end
        end
        3'b101:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = A | B;//or
            end
            else begin
                ALUout = A & B;//and
            end
        end
        3'b110:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = A << B[4:0]; //逻辑左移
            end
            else begin
                ALUout = ALUout_tmp;//useless
            end
        end
        default: ALUout = ALUout_tmp;
    endcase
end
endmodule
