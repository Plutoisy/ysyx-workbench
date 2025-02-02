module ysyx_24120011_ImmeGen(
    input  [31:0] inst,
    input  [2:0] opcode_type,
    output reg [31:0] imme
);

// 3'd0; I-Type
// 3'd1; U-Type
// 3'd2; J-Type
// 3'd3; S-Type
// 3'd7; Unknown

always@(*)begin
    case(opcode_type)
        3'd0      : imme = {{20{inst[31]}},inst[31:20]};//I-Type
        3'd1      : imme = {{12{inst[31]}},inst[31:12]};//U-Type
        3'd2      : imme = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};//J-Type
        3'd3      : imme = {{20{inst[31]}},inst[31:25],inst[11:7]};//S-Type
        default   : imme = 32'h0000_0000;//Unknown
    endcase
end
endmodule
