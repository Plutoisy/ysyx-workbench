module ysyx_24120011_TypeFinder(
    input [6:0] opcode,
    output reg [2:0] opcode_type
);
    always@(*)begin
        case(opcode) 
            7'b0010011:opcode_type = 3'd0;//I-Type
            7'b1100111:opcode_type = 3'd0;//I-Type
            7'b0000011:opcode_type = 3'd0;//I-Type
            7'b1110011:opcode_type = 3'd0;//I-Type
            
            7'b0010111:opcode_type = 3'd1;//U-Type
            7'b0110111:opcode_type = 3'd1;//U-Type

            7'b1101111:opcode_type = 3'd2;//J-Type

            7'b0100011:opcode_type = 3'd3;//S-Type

            7'b0110011:opcode_type = 3'd4;//R-Type

            7'b1100011:opcode_type = 3'd5;//B-Type
            default   :opcode_type = 3'd7;//Unknown
        endcase
    end
endmodule
