`timescale 1ns / 1ps
module softmax (
        input signed [7:0] softmax_in0,
        input signed [7:0] softmax_in1,
        input signed [7:0] softmax_in2,
        input signed [7:0] softmax_in3,
        input signed [7:0] softmax_in4,
        input signed [7:0] softmax_in5,
        input signed [7:0] softmax_in6,
        input signed [7:0] softmax_in7,
        
        output  [7:0] softmax_out0,
        output  [7:0] softmax_out1,
        output  [7:0] softmax_out2,
        output  [7:0] softmax_out3,
        output  [7:0] softmax_out4,
        output  [7:0] softmax_out5,
        output  [7:0] softmax_out6,
        output  [7:0] softmax_out7
    );
    
    wire signed [7:0] max_out;

    wire signed [8:0] sub_out0;
    wire signed [8:0] sub_out1;
    wire signed [8:0] sub_out2;
    wire signed [8:0] sub_out3;
    wire signed [8:0] sub_out4;
    wire signed [8:0] sub_out5;
    wire signed [8:0] sub_out6;
    wire signed [8:0] sub_out7;

    wire [15:0] e_recip_out0;
    wire [15:0] e_recip_out1;
    wire [15:0] e_recip_out2;
    wire [15:0] e_recip_out3;
    wire [15:0] e_recip_out4;
    wire [15:0] e_recip_out5;
    wire [15:0] e_recip_out6;
    wire [15:0] e_recip_out7;

    wire [3:0] e_recip_out_index0;
    wire [3:0] e_recip_out_index1;
    wire [3:0] e_recip_out_index2;
    wire [3:0] e_recip_out_index3;
    wire [3:0] e_recip_out_index4;
    wire [3:0] e_recip_out_index5;
    wire [3:0] e_recip_out_index6;
    wire [3:0] e_recip_out_index7;

    wire [3:0] sum;

    
    max max_inst (
        .in0(softmax_in0),
        .in1(softmax_in1),
        .in2(softmax_in2),
        .in3(softmax_in3),
        .in4(softmax_in4),
        .in5(softmax_in5),
        .in6(softmax_in6),
        .in7(softmax_in7),
        .max_out(max_out)
    );

    
    sub sub_inst_0(
        .A (max_out),
        .B (softmax_in0),
        .Result (sub_out0)
    );  
    sub sub_inst_1(
        .A (max_out),
        .B (softmax_in1),
        .Result (sub_out1)
    );  
    sub sub_inst_2(
        .A (max_out),
        .B (softmax_in2),
        .Result (sub_out2)
    );  
    sub sub_inst_3(
        .A (max_out),
        .B (softmax_in3),
        .Result (sub_out3)
    );  
    sub sub_inst_4(
        .A (max_out),
        .B (softmax_in4),
        .Result (sub_out4)
    );  
    sub sub_inst_5(
        .A (max_out),
        .B (softmax_in5),
        .Result (sub_out5)
    );  
    sub sub_inst_6(
        .A (max_out),
        .B (softmax_in6),
        .Result (sub_out6)
    );  
    sub sub_inst_7(
        .A (max_out),
        .B (softmax_in7),
        .Result (sub_out7)
    );  


    e_recip e_recip_inst_0(
        .e_recip_in(sub_out0[7:4]),
        .e_recip_out(e_recip_out0),
        .e_recip_out_index(e_recip_out_index0)
    );
    e_recip e_recip_inst_1(
        .e_recip_in(sub_out1[7:4]),
        .e_recip_out(e_recip_out1),
        .e_recip_out_index(e_recip_out_index1)
    );
    e_recip e_recip_inst_2(
        .e_recip_in(sub_out2[7:4]),
        .e_recip_out(e_recip_out2),
        .e_recip_out_index(e_recip_out_index2)
    );
    e_recip e_recip_inst_3(
        .e_recip_in(sub_out3[7:4]),
        .e_recip_out(e_recip_out3),
        .e_recip_out_index(e_recip_out_index3)
    );
    e_recip e_recip_inst_4(
        .e_recip_in(sub_out4[7:4]),
        .e_recip_out(e_recip_out4),
        .e_recip_out_index(e_recip_out_index4)
    );
    e_recip e_recip_inst_5(
        .e_recip_in(sub_out5[7:4]),
        .e_recip_out(e_recip_out5),
        .e_recip_out_index(e_recip_out_index5)
    );
    e_recip e_recip_inst_6(
        .e_recip_in(sub_out6[7:4]),
        .e_recip_out(e_recip_out6),
        .e_recip_out_index(e_recip_out_index6)
    );
    e_recip e_recip_inst_7(
        .e_recip_in(sub_out7[7:4]),
        .e_recip_out(e_recip_out7),
        .e_recip_out_index(e_recip_out_index7)
    );

    sum sum_inst(
        .a0(e_recip_out0),
        .a1(e_recip_out1),
        .a2(e_recip_out2),
        .a3(e_recip_out3),
        .a4(e_recip_out4),
        .a5(e_recip_out5),
        .a6(e_recip_out6),
        .a7(e_recip_out7),
        .sum(sum)
    );

    LUT2D LUT2D_inst0(
        .e_recip_out_index(e_recip_out_index0),
        .sum(sum),
        .LUT2D_out(softmax_out0)
    );
    LUT2D LUT2D_inst1(
        .e_recip_out_index(e_recip_out_index1),
        .sum(sum),
        .LUT2D_out(softmax_out1)
    );
    LUT2D LUT2D_inst2(
        .e_recip_out_index(e_recip_out_index2),
        .sum(sum),
        .LUT2D_out(softmax_out2)
    );
    LUT2D LUT2D_inst3(
        .e_recip_out_index(e_recip_out_index3),
        .sum(sum),
        .LUT2D_out(softmax_out3)
    );
    LUT2D LUT2D_inst4(
        .e_recip_out_index(e_recip_out_index4),
        .sum(sum),
        .LUT2D_out(softmax_out4)
    );
    LUT2D LUT2D_inst5(
        .e_recip_out_index(e_recip_out_index5),
        .sum(sum),
        .LUT2D_out(softmax_out5)
    );
    LUT2D LUT2D_inst6(
        .e_recip_out_index(e_recip_out_index6),
        .sum(sum),
        .LUT2D_out(softmax_out6)
    );
    LUT2D LUT2D_inst7(
        .e_recip_out_index(e_recip_out_index7),
        .sum(sum),
        .LUT2D_out(softmax_out7)
    );
    





    
endmodule
