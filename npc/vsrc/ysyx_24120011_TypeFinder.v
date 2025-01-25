module ysyx_24120011_TypeFinder(
    input [6:0] opcode,
    output [2:0] opcode_type
);
    always@(*)begin
        case(opcode) 
            7'b0010011:opcode_type = 3'd0;//I-Type
            default   :opcode_type = 3'd7;//Unknown
        endcase
    end
endmodule
