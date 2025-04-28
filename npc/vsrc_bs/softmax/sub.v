module sub (
    input signed [7:0] A, 
    input signed [7:0] B, 
    output signed [8:0] Result 
);

    wire signed [7:0] B_complement;
    wire [8:0] count_adder_in0in1;

    assign B_complement = ~B + 1; 
    assign count_adder_in0in1[0] = 1'b0;
    genvar i;
    generate
        for(i=0;i<=7;i=i+1) begin
            compressor_3_2 full_adder(
                        .i0 (A[i]),
                        .i1 (B_complement[i]),
                        .ci (count_adder_in0in1[i]),
                        .co (count_adder_in0in1[i+1]), 
                        .d  (Result[i])
            );          
        end
    endgenerate

    //assign Result[8] = (count_adder_in0in1[8]^count_adder_in0in1[7]) ? count_adder_in0in1[8] : Result[7];
    
endmodule
