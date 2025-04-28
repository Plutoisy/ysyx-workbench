module sum (
    input [15:0] a0,
    input [15:0] a1,
    input [15:0] a2,
    input [15:0] a3,
    input [15:0] a4,
    input [15:0] a5,
    input [15:0] a6,
    input [15:0] a7,
    output [3:0] sum
);

    wire [18:0] total;  
    reg [3:0] sumreg;
    assign total = {3'b0,a0} + {3'b0,a1} + {3'b0,a2} + {3'b0,a3} + {3'b0,a4} + {3'b0,a5} + {3'b0,a6} + {3'b0,a7};
    assign sum = sumreg;
    //[0.1, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 6, 7, 8, 9, 10]
    always @ (*) begin
        case(total[18:15])
            4'b0000    : sumreg = 4'd0;//0
            4'b0001    : sumreg = 4'd1;//0.5
            4'b0010    : sumreg = 4'd2;//1
            4'b0011    : sumreg = 4'd3;//1.5
            4'b0100    : sumreg = 4'd4;//2
            4'b0101    : sumreg = 4'd5;//2.5
            4'b0110    : sumreg = 4'd6;//3
            4'b0111    : sumreg = 4'd7;//3.5
            4'b1000    : sumreg = 4'd8;//4
            4'b1001    : sumreg = 4'd9;//4.5
            4'b1010    : sumreg = 4'd10;//5
            4'b1011    : sumreg = 4'd11;//5.5
            4'b1100    : sumreg = 4'd12;//6
            4'b1101    : sumreg = 4'd13;//6.5
            4'b1110    : sumreg = 4'd14;//7
            4'b1111    : sumreg = 4'd15;//7.5
            // 5'b10000    : sumreg = 4'd13;//8
            // 5'b10001    : sumreg = 4'd14;//8.5
            // 5'b10010    : sumreg = 4'd14;//9
            // 5'b10011    : sumreg = 4'd15;//9.5
            // 5'b10100    : sumreg = 4'd15;//10
            // 5'b10101    : sumreg = 4'd0;//10.5
            // 5'b10110    : sumreg = 4'd0;//11
            // 5'b10111    : sumreg = 4'd0;//11.5
            // 5'b11000    : sumreg = 4'd0;//12
            // 5'b11001    : sumreg = 4'd0;//12.5
            // 5'b11010    : sumreg = 4'd0;//13
            // 5'b11011    : sumreg = 4'd0;//13.5
            // 5'b11100    : sumreg = 4'd0;//14
            // 5'b11101    : sumreg = 4'd0;//14.5
            // 5'b11110    : sumreg = 4'd0;//15
            // 5'b11111    : sumreg = 4'd0;//15.5
            default     : sumreg = 4'd0; 		
        endcase
    end


endmodule

