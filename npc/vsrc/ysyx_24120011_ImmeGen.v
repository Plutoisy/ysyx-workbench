module ysyx_24120011_ImmeGen(
    input  [31:0] inst,
    input  [2:0] opcode_type,
    output reg [31:0] imme
);
wire [31:0] recv_inst;
assign recv_inst = inst;

always@(*)begin
    case(opcode_type)
        3'd0      : imme = {{20{recv_inst[31]}},recv_inst[31:20]};//I-Type
        default   : imme = 32'h0000_0000;//Unknown
    endcase
end
endmodule
