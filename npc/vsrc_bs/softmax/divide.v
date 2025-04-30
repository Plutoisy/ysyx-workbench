module divide(
    input [15:0] a,
    input [15:0] b,
    output wire [7:0] y_quotient
    // output reg [15:0] y_last
);
    assign y_quotient = a[7:0];
    // reg [15:0] tempa;
    // reg [15:0] tempb;
    // reg [31:0] temp_a;
    // reg [31:0] temp_b;

    // reg [7:0] y_quotient_temp;

    // integer i;

    // always @* begin
    //     tempa = a;
    //     tempb = b>>3;
    //     temp_a = {16'h0000, tempa};
    //     temp_b = {tempb, 16'h0000};

    //     for(i = 0; i < 16; i = i + 1) begin
    //         temp_a = {temp_a[30:0], 1'b0};
    //         if (temp_a[31:16] >= tempb)
    //             temp_a = temp_a - temp_b + 1'b1;
    //     end

    //     y_quotient_temp = (temp_a[7:0] == 8'b1000_0000 ? 8'b0111_1111 : temp_a[7:0]);
    //     // y_last = temp_a[31:16];
    // end

    // assign y_quotient = {3'b000, y_quotient_temp[6:2]};

endmodule
