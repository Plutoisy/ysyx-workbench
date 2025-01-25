module ysyx_24120011_TypeFinder(
    input [6:0] opcode,
    output [2:0] type
);
    always@(*)begin
        case(opcode) 
            7'b0010011:type = 3'd0;//I-Type
            default   :type = 3'd7;//Unknown
        endcase
    end
endmodule
