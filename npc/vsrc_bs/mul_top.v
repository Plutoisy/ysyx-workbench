module mul_top(
    input  wire [7:0]  in0,
    input  wire [7:0]  in1,
    output wire [7:0]  out8,
    output wire [15:0] out16
);
    wire [15:0] mult_out;

    mult_8_8_top mult_8_8_top_inst(
        .A_NUM  (in0),    
        .B_NUM  (in1),    
        .C_NUM  (mult_out)     
    );

    //assign out8 = (mult_out[15:7] == 9'b0000_0000_0 || mult_out[15:7] == 9'b1111_1111_1) ? mult_out[7:0] : ((mult_out[15]) ? 8'b1000_0000 : 8'b0111_1111);
    assign out8 = (mult_out[15:12] == 4'b0000 || mult_out[15:12] == 4'b1111) 
    ? {mult_out[15], mult_out[11:5]} 
    : (mult_out[15])
    ? 8'b1000_0000
    : 8'b0111_1111;
    assign out16 = mult_out;

endmodule