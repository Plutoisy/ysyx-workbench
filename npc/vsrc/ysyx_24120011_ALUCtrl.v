module ysyx_24120011_ALUCtrl(
    input ALUBctrl,
    input [31:0] src2,
    input [31:0] imme,
    output [31:0] ALUB
);
//ALUBctrl == 1'd0 -> imme
//ALUBctrl == 1'd1 -> src2
assign ALUB = ALUBctrl ? src2 : imme;
endmodule