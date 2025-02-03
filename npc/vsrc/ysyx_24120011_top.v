import "DPI-C" function void ebreak ();

module ysyx_24120011_top (
    input clk,
    input rst,
    input [31:0] inst,
    output [31:0] pc
);

wire [31:0] dnpc;
wire [4:0]  rs1;
wire [4:0]  rs2;
wire [4:0]  rd;
wire [2:0]  func3;
wire [6:0]  func7;
wire [31:0] imme;
wire [31:0] wdata;
wire [31:0] src1;
wire [31:0] src2;
wire [31:0] pc_add_imme_out;
wire [31:0] pc_add_4_out;
wire [31:0] alu_result;
wire [1:0]  pc_ctrl;
wire [2:0]  rd_ctrl;
wire        ALUBctrl;

always@(posedge clk)begin
    if (inst == 32'b00000000000100000000000001110011)begin
        ebreak();
    end
end

ysyx_24120011_PCProcessor i_PCProcessor(
    .pc              ( pc              ),
    .imme            ( imme            ),
    .alu_result      ( alu_result      ),
    .pc_ctrl         ( pc_ctrl         ),
    .pc_add_imme_out ( pc_add_imme_out ),
    .pc_add_4_out    ( pc_add_4_out    ),
    .dnpc            ( dnpc            )
);


ysyx_24120011_Reg #(32, 32'h8000_0000) i_pc (
    .clk   ( clk ), 
    .rst   ( rst ), 
    .din   ( dnpc ), 
    .dout  ( pc ), 
    .wen   ( 1'b1 )
);

ysyx_24120011_IDU i_IDU(
    .inst    ( inst    ),
    .rd      ( rd      ),
    .rs1     ( rs1     ),
    .rs2     ( rs2     ),
    .imme    ( imme    ),
    .func3   ( func3   ),
    .func7   ( func7   ),
    .pc_ctrl ( pc_ctrl ),
    .rd_ctrl ( rd_ctrl ),
    .ALUBctrl  ( ALUBctrl  )
);


ysyx_24120011_ALU i_ALU(
    .A          ( src1       ),
    .B          ( ALUB       ),
    .sub_or_add ( 1'b0       ),
    .ALUout     ( wdata      )
);

ysyx_24120011_RdProcessor i_RdProcessor(
    .pc_add_imme_out ( pc_add_imme_out ),
    .pc_add_4_out    ( pc_add_4_out    ),
    .alu_result      ( alu_result      ),
    .imme            ( imme            ),
    .rd_ctrl         ( rd_ctrl         ),
    .wdata           ( wdata           )
);

ysyx_24120011_RegStack i_RegStack(
    .clk   ( clk   ),
    .rst   ( rst   ),
    .wdata ( wdata ),
    .rd    ( rd    ),
    .rs1   ( rs1   ),
    .rs2   ( rs2   ),
    .src1  ( src1  ),
    .src2  ( src2  )
);

ysyx_24120011_ALUCtrl u_ysyx_24120011_ALUCtrl(
    .ALUBctrl ( ALUBctrl ),
    .scr2     ( scr2     ),
    .imme     ( imme     ),
    .ALUB     ( ALUB     )
);



endmodule
