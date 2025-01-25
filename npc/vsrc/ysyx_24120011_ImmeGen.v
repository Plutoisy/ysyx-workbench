module ysyx_24120011_ImmeGen(
    input  [31:0] inst,
    input  [2:0] opcode_type,
    output reg [31:0] imme
);
always@(*)begin
    case(opcode_type)
        3'd0      : imme = {{20{inst[31]}},inst[31:20]};//I-Type
        default   : imme = inst;//Unknown
    endcase
end
endmodule
