module e_recip(
    input [3:0] e_recip_in,
    output reg [15:0] e_recip_out,
    output reg [3:0] e_recip_out_index
    );
    always @(*) begin
        if(e_recip_in[3:1] >= 'd5) begin
            e_recip_out = 16'b0000_0000_0000_0000;
            e_recip_out_index = 4'd10;
        end
        else if(e_recip_in[3:0] == 4'b0000) begin //0
            e_recip_out = 16'b1111_1111_1111_1111;
            e_recip_out_index = 4'd0;
        end
        else if(e_recip_in[3:0] == 4'b0001) begin //0.5
            e_recip_out = 16'b1001_1011_0100_0101;
            e_recip_out_index = 4'd1;
        end
        else if(e_recip_in[3:0] == 4'b0010) begin //1.0
            e_recip_out = 16'b0101_1110_0010_1101;
            e_recip_out_index = 4'd2;
        end
        else if(e_recip_in[3:0] == 4'b0011) begin //1.5
            e_recip_out = 16'b0011_1001_0001_1111;
            e_recip_out_index = 4'd3;
        end
        else if(e_recip_in[3:0] == 4'b0100) begin //2.0
            e_recip_out = 16'b0010_0010_1010_0101;
            e_recip_out_index = 4'd4;
        end
        else if(e_recip_in[3:0] == 4'b0101) begin //2.5
            e_recip_out = 16'b0001_0101_0000_0011;
            e_recip_out_index = 4'd5;
        end
        else if(e_recip_in[3:0] == 4'b0110) begin //3
            e_recip_out = 16'b0000_1100_1011_1110;
            e_recip_out_index = 4'd6;
        end
        else if(e_recip_in[3:0] == 4'b0111) begin //3.5
            e_recip_out = 16'b0000_0111_1011_1011;
            e_recip_out_index = 4'd7;
        end
        else if(e_recip_in[3:0] == 4'b1000) begin //4
            e_recip_out = 16'b0000_0100_1011_0000;
            e_recip_out_index = 4'd8;
        end
        else if(e_recip_in[3:0] == 4'b1001) begin //4.5
            e_recip_out = 16'b0000_0010_1101_1000;
            e_recip_out_index = 4'd9;
        end
        else begin
            e_recip_out = 16'b0000_0000_0000_0000;
            e_recip_out_index = 4'd10;
        end
        
    end

endmodule