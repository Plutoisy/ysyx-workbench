module ysyx_24120011_PCProcessor(
    input  [31:0] pc,
    input  [31:0] imme,
    input  [31:0] alu_result,
    input  [1:0]  pc_ctrl,
    output [31:0] pc_add_imme_out,
    output [31:0] pc_add_4_out,
    output [31:0] dnpc
);

wire [31:0] pc_add_4;
wire [31:0] pc_add_imme;

assign pc_add_imme_out = pc_add_imme;
assign pc_add_4_out    = pc_add_4;

always@(*)begin
    case(pc_ctrl)
        2'd0: dnpc = pc_add_4;
        2'd1: dnpc = pc_add_imme;
        2'd2: dnpc = alu_result;
    endcase
end

ysyx_24120011_Adder i0_Adder(
    .x ( pc ),
    .y ( 32'd4 ),
    .s  ( pc_add_4  )
);

ysyx_24120011_Adder i1_Adder(
    .x ( pc ),
    .y ( imme ),
    .s  ( pc_add_imme  )
);


endmodule
