module ysyx_24120011_ALU(
    input  [31:0] A,
    input  [31:0] B,
    input  [3:0]  ALU_ctrl,
    output [31:0] ALUout
);

wire [31:0] B_in;
wire [31:0] B_in_used_for_overflow;
wire [31:0] ALUout_tmp;
wire carry;
wire overflow;
wire uless;
wire sless;

assign B_in = ALU_ctrl[0] ? B^{32{ALU_ctrl[0]}} + 1 : B;
assign B_in_used_for_overflow = ALU_ctrl[0] ? B^{32{ALU_ctrl[0]}} : B;
assign uless = ~carry;//无符号a<b标志
assign sless = ALUout_tmp[31] ^ overflow;
assign overflow = (A[31]==B_in_used_for_overflow[31]) && (A[31]!=ALUout_tmp[31]);

ysyx_24120011_Adder i_Adder(
    .x ( A ),
    .y ( B_in ),
    .s ( ALUout_tmp ),
    .c ( carry  )
);

always@(*)begin
    case(ALU_ctrl[2:0])
        3'b000: ALUout = ALUout_tmp;
        3'b010:begin
            if(ALU_ctrl[3] == 1'b0)begin
                ALUout = {31'b0,sless};
            end

            else begin
                ALUout = {31'b0,uless};
            end
        end
    endcase
end
endmodule
