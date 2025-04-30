module max (
    input signed [7:0] in0,
    input signed [7:0] in1,
    input signed [7:0] in2,
    input signed [7:0] in3,
    input signed [7:0] in4,
    input signed [7:0] in5,
    input signed [7:0] in6,
    input signed [7:0] in7,
    
    output signed [7:0] max_out
);
    wire signed [7:0] max_01;
    wire signed [7:0] max_23;
    wire signed [7:0] max_45;
    wire signed [7:0] max_67;

    assign max_01 = (in0 > in1) ? in0 : in1;
    assign max_23 = (in2 > in3) ? in2 : in3;
    assign max_45 = (in4 > in5) ? in4 : in5;
    assign max_67 = (in6 > in7) ? in6 : in7;

    wire signed [7:0] max_0123;
    wire signed [7:0] max_4567;

    assign max_0123 = (max_01 > max_23) ? max_01 : max_23;
    assign max_4567 = (max_45 > max_67) ? max_45 : max_67;

    
    assign max_out = (max_0123 > max_4567) ? max_0123 : max_4567;

endmodule

