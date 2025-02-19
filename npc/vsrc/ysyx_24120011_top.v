import "DPI-C" function void ebreak ();
import "DPI-C" function void npc_trap(input int pc, input int ret);


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
wire [31:0] rdata;
wire [31:0] r_mem_data;
wire [31:0] src1;
wire [31:0] src2;
wire [31:0] pc_add_imme_out;
wire [31:0] pc_add_4_out;
wire [31:0] ALUB;
wire [31:0] alu_result;
wire [1:0]  pc_ctrl;
wire [3:0]  rd_ctrl;
wire [1:0]  ALUBctrl;
wire        w_en;
wire        w_mem_en;
wire        r_mem_en;
wire        sign_extension;
wire        b_type_enter_if;
wire [7:0]  w_mem_len;
wire [7:0]  r_mem_len;
wire [3:0]  ALU_ctrl;
wire [3:0]  w_csr_data_ctrl;
wire [31:0] a0;
wire [11:0] w_csr_addr;
wire [11:0] r_csr_addr;
wire w_csr_en;  
wire r_csr_en;  
wire w_csr_ecall;
wire [31:0] w_csr_data;
wire [31:0] r_csr_data;

always@(posedge clk)begin
    if (inst == 32'b00000000000100000000000001110011)begin
        npc_trap(pc,a0);
        ebreak();
    end
end

assign b_type_enter_if = (inst[6:0] == 7'b1100011 && alu_result[0] == 1'b1) ? 1 : 0;

ysyx_24120011_PCProcessor i_PCProcessor(
    .pc              ( pc              ),
    .imme            ( imme            ),
    .alu_result      ( alu_result      ),
    .r_csr_data      ( r_csr_data      ),
    .pc_ctrl         ( pc_ctrl         ),
    .b_type_enter_if ( b_type_enter_if ),
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

ysyx_24120011_IDU u_ysyx_24120011_IDU(
    .inst           ( inst           ),
    .rd             ( rd             ),
    .rs1            ( rs1            ),
    .rs2            ( rs2            ),
    .imme           ( imme           ),
    .func3          ( func3          ),
    .func7          ( func7          ),
    .pc_ctrl        ( pc_ctrl        ),
    .rd_ctrl        ( rd_ctrl        ),
    .ALUBctrl       ( ALUBctrl       ),
    .w_mem_en       ( w_mem_en       ),
    .w_mem_len      ( w_mem_len      ),
    .r_mem_en       ( r_mem_en       ),
    .sign_extension ( sign_extension ),
    .ALU_ctrl       ( ALU_ctrl       ),
    .r_mem_len      ( r_mem_len      ),
    .w_csr_addr     ( w_csr_addr     ),
    .w_csr_en       ( w_csr_en       ),
    .w_csr_data_ctrl( w_csr_data_ctrl),
    .w_csr_ecall    ( w_csr_ecall    ),
    .r_csr_addr     ( r_csr_addr     ),
    .r_csr_en       ( r_csr_en       )
);


ysyx_24120011_ALU i_ALU(
    .A          ( src1       ),
    .B          ( ALUB       ),
    .ALU_ctrl   ( ALU_ctrl   ),
    .ALUout     ( alu_result      )
);

ysyx_24120011_RdProcessor i_RdProcessor(
    .pc_add_imme_out ( pc_add_imme_out ),
    .pc_add_4_out    ( pc_add_4_out    ),
    .alu_result      ( alu_result      ),
    .imme            ( imme            ),
    .r_mem_data      ( r_mem_data      ),
    .rd_ctrl         ( rd_ctrl         ),
    .w_en            ( w_en            ),
    .wdata           ( wdata           )
);

ysyx_24120011_RegStack i_RegStack(
    .clk   ( clk   ),
    .rst   ( rst   ),
    .w_en  ( w_en  ),
    .wdata ( wdata ),
    .rd    ( rd    ),
    .rs1   ( rs1   ),
    .rs2   ( rs2   ),
    .src1  ( src1  ),
    .src2  ( src2  ),
    .a0    ( a0    )
);

ysyx_24120011_ALUCtrl i_ALUCtrl(
    .ALUBctrl   ( ALUBctrl   ),
    .src2       ( src2       ),
    .imme       ( imme       ),
    .r_csr_data ( r_csr_data ),
    .ALUB       ( ALUB       )
);


ysyx_24120011_MemProcessor i_MemProcessor(
    .clk   ( clk   ),
    .w_mem_addr          ( alu_result          ),
    .r_mem_addr          ( alu_result          ),
    .w_mem_len           ( w_mem_len           ),
    .r_mem_len           ( r_mem_len           ),
    .w_mem_en            ( w_mem_en            ),
    .r_mem_en            ( r_mem_en            ),
    .sign_extension      ( sign_extension      ),
    .w_mem_data          ( src2                ),
    .r_mem_data          ( r_mem_data          )
);

ysyx_24120011_Csr i_Csr(
    .clk         ( clk         ),
    .rst         ( rst         ),
    .w_csr_addr  ( w_csr_addr  ),
    .r_csr_addr  ( r_csr_addr  ),
    .w_csr_en    ( w_csr_en    ),
    .r_csr_en    ( r_csr_en    ),
    .w_csr_ecall ( w_csr_ecall ),
    .pc          ( pc          ),
    .w_csr_data  ( w_csr_data  ),
    .r_csr_data  ( r_csr_data  )
);

ysyx_24120011_CsrProcessor i_CsrProcessor(
    .alu_result      ( alu_result      ),
    .src1            ( src1            ),
    .w_csr_data_ctrl ( w_csr_data_ctrl ),
    .w_csr_data      ( w_csr_data      )
);

endmodule
