module ysyx_24120011_ALUCtrl(
    input ALUBctrl,
    input [32:0] scr2,
    input [32:0] imme,
    output ALUB
);
//ALUBctrl == 1'd0 -> imme
//ALUBctrl == 1'd1 -> scr2
assign ALUB = ALUBctrl ? scr2 : imme;
endmodule