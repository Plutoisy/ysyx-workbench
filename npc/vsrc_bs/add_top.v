module add_top(
    input [15:0] in0,
    input [15:0] in1,
    output [15:0] out16,
    output [7:0] out8
);

    wire [15:0] temp_out;
    wire overflow;
    
    assign temp_out = in0 + in1;
    // 溢出检测：两个输入符号相同但与结果符号不同
    assign overflow = (in0[15] == in1[15]) && (in0[15] != temp_out[15]);

    // 如果没有溢出，直接输出结果
    // 如果溢出，根据符号位输出最大正值或最小负值
    assign out16 = ~overflow ? temp_out[15:0] : (in0[15] ? 16'b1000_0000_0000_0000 : 16'b0111_1111_1111_1111);
    //assign out8 = (out16[15:7] == 9'b0000_0000_0 || out16[15:7] == 9'b1111_1111_1) ? out16[7:0] : ((out16[15]) ? 8'b1000_0000 : 8'b0111_1111);
    assign out8 = (out16[15:12] == 4'b0000 || out16[15:12] == 4'b1111) 
    ? {out16[15], out16[11:5]} 
    : (out16[15])
    ? 8'b1000_0000
    : 8'b0111_1111;
endmodule
