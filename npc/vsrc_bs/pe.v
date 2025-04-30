//mode            PE操作
//000             点加
//001             点乘
//010             乘累加
//011             乘立即数
//100             softmax
module PE_ctrl(
    input  [2:0]  mode,
    input  [7:0]  imm,
    input  [31:0] source_data0,
    input  [31:0] source_data1,
    input  [31:0] source_data2,
    input  [31:0] source_data3,
    input  [31:0] weight_data0,
    input  [31:0] weight_data1,
    input  [31:0] weight_data2,
    input  [31:0] weight_data3,
    output reg [31:0] out0,
    output reg [31:0] out1,
    output reg [31:0] out2,
    output reg [31:0] out3
);

wire [31:0] addout0;
wire [31:0] addout1;
wire [31:0] addout2;
wire [31:0] addout3;
wire [31:0] mulout0;
wire [31:0] mulout1;
wire [31:0] mulout2;
wire [31:0] mulout3;
wire [31:0] softmaxout0;
wire [31:0] softmaxout1;
wire [63:0] mulout0_16;
wire [63:0] mulout1_16;
wire [63:0] mulout2_16;
wire [63:0] mulout3_16;

wire [15:0] mac01;
wire [15:0] mac23;
wire [15:0] mac45;
wire [15:0] mac67;
wire [15:0] mac89;
wire [15:0] mac1011;
wire [15:0] mac1213;
wire [15:0] mac1415;
wire [15:0] mac0123;
wire [15:0] mac4567;
wire [15:0] mac891011;
wire [15:0] mac12131415;
wire [15:0] mac01234567;
wire [15:0] mac89101112131415;
wire [15:0] macout16;
wire [7:0] macout8;

//assign macout8 = (macout16[15:7] == 9'b0000_0000_0 || macout16[15:7] == 9'b1111_1111_1) ? macout16[7:0] : ((macout16[15]) ? 8'b1000_0000 : 8'b0111_1111);
assign macout8 = (macout16[15:12] == 4'b0000 || macout16[15:12] == 4'b1111) 
    ? {macout16[15], macout16[11:5]} 
    : (macout16[15])
    ? 8'b1000_0000
    : 8'b0111_1111;
genvar i;
generate
    for (i = 0; i < 4; i = i + 1) begin : pe_blocks
        mul_top u_mul0 (
            .in0( source_data0[i*8 +: 8] ),
            .in1( mode == 3'b011 ? imm : weight_data0[i*8 +: 8] ),
            .out8( mulout0[i*8 +: 8] ),
            .out16( mulout0_16[i*16 +: 16] )
        );
        mul_top u_mul1 (
            .in0( source_data1[i*8 +: 8] ),
            .in1( mode == 3'b011 ? imm : weight_data1[i*8 +: 8] ),
            .out8( mulout1[i*8 +: 8] ),
            .out16( mulout1_16[i*16 +: 16] )
        );
        mul_top u_mul2 (
            .in0( source_data2[i*8 +: 8] ),
            .in1( mode == 3'b011 ? imm : weight_data2[i*8 +: 8] ),
            .out8( mulout2[i*8 +: 8] ),
            .out16( mulout2_16[i*16 +: 16] )
        );
        mul_top u_mul3 (
            .in0( source_data3[i*8 +: 8] ),
            .in1( mode == 3'b011 ? imm : weight_data3[i*8 +: 8] ),
            .out8( mulout3[i*8 +: 8] ),
            .out16( mulout3_16[i*16 +: 16] )
        );
    end
endgenerate

add_top u_add0 (
    .in0( mode == 3'b010 ? mulout0_16[15:0]  :{source_data0[7],{3{source_data0[7]}},source_data0[6:0],5'b0} ),
    .in1( mode == 3'b010 ? mulout0_16[31:16] :{weight_data0[7],{3{weight_data0[7]}},weight_data0[6:0],5'b0} ),
    .out8( addout0[7:0] ),
    .out16(mac01)
);
add_top u_add1 (
    .in0( mode == 3'b010 ? mulout0_16[47:32] :{source_data1[7],{3{source_data1[7]}},source_data1[6:0],5'b0} ),
    .in1( mode == 3'b010 ? mulout0_16[63:48] :{weight_data1[7],{3{weight_data1[7]}},weight_data1[6:0],5'b0} ),
    .out8( addout1[7:0] ),
    .out16(mac23)
);
add_top u_add2 (
    .in0( mode == 3'b010 ? mulout1_16[15:0]  :{source_data2[7],{3{source_data2[7]}},source_data2[6:0],5'b0} ),
    .in1( mode == 3'b010 ? mulout1_16[31:16] :{weight_data2[7],{3{weight_data2[7]}},weight_data2[6:0],5'b0} ),
    .out8( addout2[7:0] ),
    .out16(mac45)
);
add_top u_add3 (
    .in0( mode == 3'b010 ? mulout1_16[47:32] :{source_data3[7],{3{source_data3[7]}},source_data3[6:0],5'b0} ),
    .in1( mode == 3'b010 ? mulout1_16[63:48] :{weight_data3[7],{3{weight_data3[7]}},weight_data3[6:0],5'b0} ),
    .out8( addout3[7:0] ),
    .out16(mac67)
);
add_top u_add4 (
    .in0( mode == 3'b010 ? mulout2_16[15:0]  :{source_data0[15],{3{source_data0[15]}},source_data0[14:8],5'b0} ),
    .in1( mode == 3'b010 ? mulout2_16[31:16] :{weight_data0[15],{3{weight_data0[15]}},weight_data0[14:8],5'b0} ),
    .out8( addout0[15:8] ),
    .out16(mac89)
);
add_top u_add5 (
    .in0( mode == 3'b010 ? mulout2_16[47:32] :{source_data1[15],{3{source_data1[15]}},source_data1[14:8],5'b0} ),
    .in1( mode == 3'b010 ? mulout2_16[63:48] :{weight_data1[15],{3{weight_data1[15]}},weight_data1[14:8],5'b0} ),
    .out8( addout1[15:8] ),
    .out16(mac1011)
);
add_top u_add6 (
    .in0( mode == 3'b010 ? mulout3_16[15:0]   :{source_data2[15],{3{source_data2[15]}},source_data2[14:8],5'b0} ),
    .in1( mode == 3'b010 ? mulout3_16[31:16]  :{weight_data2[15],{3{weight_data2[15]}},weight_data2[14:8],5'b0} ),
    .out8( addout2[15:8] ),
    .out16(mac1213)
);
add_top u_add7 (
    .in0( mode == 3'b010 ? mulout3_16[47:32] :{source_data3[15],{3{source_data3[15]}},source_data3[14:8],5'b0} ),
    .in1( mode == 3'b010 ? mulout3_16[63:48] :{weight_data3[15],{3{weight_data3[15]}},weight_data3[14:8],5'b0} ),
    .out8( addout3[15:8] ),
    .out16(mac1415)
);
add_top u_add8 (
    .in0( mode == 3'b010 ? mac01 :{source_data0[23],{3{source_data0[23]}},source_data0[22:16],5'b0} ),
    .in1( mode == 3'b010 ? mac23 :{weight_data0[23],{3{weight_data0[23]}},weight_data0[22:16],5'b0} ),
    .out8( addout0[23:16] ),
    .out16(mac0123)
);
add_top u_add9 (
    .in0( mode == 3'b010 ? mac45 :{source_data1[23],{3{source_data1[23]}},source_data1[22:16],5'b0} ),
    .in1( mode == 3'b010 ? mac67 :{weight_data1[23],{3{weight_data1[23]}},weight_data1[22:16],5'b0} ),
    .out8( addout1[23:16] ),
    .out16(mac4567)
);
add_top u_add10 (
    .in0( mode == 3'b010 ? mac89   :{source_data2[23],{3{source_data2[23]}},source_data2[22:16],5'b0} ),
    .in1( mode == 3'b010 ? mac1011 :{weight_data2[23],{3{weight_data2[23]}},weight_data2[22:16],5'b0} ),
    .out8( addout2[23:16] ),
    .out16(mac891011)
);
add_top u_add11 (
    .in0( mode == 3'b010 ? mac1213 :{source_data3[23],{3{source_data3[23]}},source_data3[22:16],5'b0} ),
    .in1( mode == 3'b010 ? mac1415 :{weight_data3[23],{3{weight_data3[23]}},weight_data3[22:16],5'b0} ),
    .out8( addout3[23:16] ),
    .out16(mac12131415)
);
add_top u_add12 (
    .in0( mode == 3'b010 ? mac0123 :{source_data0[31],{3{source_data0[31]}},source_data0[30:24],5'b0}),
    .in1( mode == 3'b010 ? mac4567 :{weight_data0[31],{3{weight_data0[31]}},weight_data0[30:24],5'b0}),
    .out8( addout0[31:24] ),
    .out16(mac01234567)
);
add_top u_add13 (
    .in0( mode == 3'b010 ? mac891011   :{source_data1[31],{3{source_data1[31]}},source_data1[30:24],5'b0} ),
    .in1( mode == 3'b010 ? mac12131415 :{weight_data1[31],{3{weight_data1[31]}},weight_data1[30:24],5'b0} ),
    .out8( addout1[31:24] ),
    .out16(mac89101112131415)
);
add_top u_add14 (
    .in0( mode == 3'b010 ? mac01234567       :{source_data2[31],{3{source_data2[31]}},source_data2[30:24],5'b0} ),
    .in1( mode == 3'b010 ? mac89101112131415 :{weight_data2[31],{3{weight_data2[31]}},weight_data2[30:24],5'b0} ),
    .out8( addout2[31:24] ),
    .out16(macout16)
);
add_top u_add15 (
    .in0({source_data3[31],{3{source_data3[31]}},source_data3[30:24],5'b0} ),
    .in1({weight_data3[31],{3{weight_data3[31]}},weight_data3[30:24],5'b0} ),
    .out8( addout3[31:24] ),
    .out16()
);
softmax u_softmax(
    .softmax_in0  ( source_data0[31:24]  ),
    .softmax_in1  ( source_data0[23:16]  ),
    .softmax_in2  ( source_data0[15:8]   ),
    .softmax_in3  ( source_data0[7:0]    ),
    .softmax_in4  ( source_data1[31:24]  ),
    .softmax_in5  ( source_data1[23:16]  ),
    .softmax_in6  ( source_data1[15:8]   ),
    .softmax_in7  ( source_data1[7:0]    ),
    .softmax_out0 ( softmaxout0 [31:24]  ),
    .softmax_out1 ( softmaxout0 [23:16]  ),
    .softmax_out2 ( softmaxout0 [15:8]   ),
    .softmax_out3 ( softmaxout0 [7:0]    ),
    .softmax_out4 ( softmaxout1 [31:24]  ),
    .softmax_out5 ( softmaxout1 [23:16]  ),
    .softmax_out6 ( softmaxout1 [15:8]   ),
    .softmax_out7 ( softmaxout1 [7:0]    )
);

always @(*) begin
    case(mode)
        3'b000:begin
            out0 = addout0;
            out1 = addout1;
            out2 = addout2;
            out3 = addout3;
        end
        3'b001,3'b011:begin
            out0 = mulout0;
            out1 = mulout1;
            out2 = mulout2;
            out3 = mulout3;
        end
        3'b010:begin
            out0 = {24'b0,macout8};
            out1 = 'b0;
            out2 = 'b0;
            out3 = 'b0;
        end
        3'b100:begin
            out0 = softmaxout0;
            out1 = softmaxout1;
            out2 = 'b0;
            out3 = 'b0;
        end
        default:begin
            out0 = 'b0;
            out1 = 'b0;
            out2 = 'b0;
            out3 = 'b0;
        end
    endcase
end

endmodule
