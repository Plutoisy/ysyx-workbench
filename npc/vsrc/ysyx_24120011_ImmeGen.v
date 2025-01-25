module ysyx_24120011_ImmeGen(
    input  [31:0] inst,
    input  [2:0] type,
    output [31:0] imme
);
always@(*)begin
    case(type)
        3'd0      : imme = {{20{inst[31]}},inst[31:20]};//I-Type
        default   : imme = 32'h0000_0000;//Unknown
    endcase
end
endmodule