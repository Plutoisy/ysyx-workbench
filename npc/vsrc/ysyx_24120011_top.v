import "DPI-C" function void ebreak ();
import "DPI-C" function void npc_trap(input int pc, input int ret);
import "DPI-C" function void get_pc_inst(input int pc, input int dnpc, input int inst, input int IFU_valid_int);

module ysyx_24120011_top (
    input clk,
    input rst
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
reg [31:0] pc;
reg [31:0] inst;
wire IFU_valid;
wire LSU_valid;
wire LSU_ready;
wire [31:0] LSU_valid_int;

//============M0=============//        
//AR
wire  [31:0]     M0_araddr;
wire             M0_arvalid;
wire            M0_arready;
//R               
wire [31:0]     M0_rdata;
wire [1:0]      M0_rresp;
wire            M0_rvalid;
wire             M0_rready;
//AW
wire  [31:0]     M0_awaddr;
wire             M0_awvalid;
wire            M0_awready;
//W
wire  [31:0]     M0_wdata;
wire  [3:0]      M0_wstrb;
wire             M0_wvalid;
wire            M0_wready;
//B
wire [1:0]      M0_bresp;
wire            M0_bvalid;
wire             M0_bready;
//============M1=============//         
//AR
wire  [31:0]     M1_araddr;
wire             M1_arvalid;
wire            M1_arready;
//R               
wire [31:0]     M1_rdata;
wire [1:0]      M1_rresp;
wire            M1_rvalid;
wire             M1_rready;
//AW
wire  [31:0]     M1_awaddr;
wire             M1_awvalid;
wire            M1_awready;
//W
wire  [31:0]     M1_wdata;
wire  [3:0]      M1_wstrb;
wire             M1_wvalid;
wire            M1_wready;
//B
wire [1:0]      M1_bresp;
wire            M1_bvalid;
wire             M1_bready;
//============S1=============// 
//AR
wire [31:0]     S0_araddr;
wire            S0_arvalid;
wire             S0_arready;
//R                
wire  [31:0]     S0_rdata;
wire  [1:0]      S0_rresp;
wire             S0_rvalid;
wire            S0_rready;
//AW 
wire [31:0]     S0_awaddr;
wire            S0_awvalid;
wire             S0_awready;
//W 
wire [31:0]     S0_wdata;
wire [3:0]      S0_wstrb;
wire            S0_wvalid;
wire             S0_wready;
//B 
wire [1:0]       S0_bresp;
wire             S0_bvalid;
wire            S0_bready;

assign LSU_valid_int = {31'b0,LSU_valid};

always@(posedge clk)begin
    if (inst == 32'b00000000000100000000000001110011)begin
        npc_trap(pc,a0);
        ebreak();
    end
end

always@(posedge clk) begin
    if(rst) begin
        pc <= 32'h8000_0000;
    end
end

always@(negedge clk) begin
    get_pc_inst(pc,dnpc,inst,LSU_valid_int);
end

assign b_type_enter_if = (inst[6:0] == 7'b1100011 && alu_result[0] == 1'b1) ? 1 : 0;

ysyx_24120011_IFU i_IFU(
    .clk       ( clk       ),
    .rst       ( rst       ),
    .pc        ( pc        ),
    .inst      ( inst      ),
    .IFU_valid ( IFU_valid ),
    .LSU_ready ( LSU_ready ),
    .M0_araddr ( M0_araddr  ),
    .M0_arvalid( M0_arvalid ),
    .M0_arready( M0_arready ),          
    .M0_rdata  ( M0_rdata   ),
    .M0_rresp  ( M0_rresp   ),
    .M0_rvalid ( M0_rvalid  ),
    .M0_rready ( M0_rready  ),
    .M0_awaddr ( M0_awaddr  ),
    .M0_awvalid( M0_awvalid ),
    .M0_awready( M0_awready ),
    .M0_wdata  ( M0_wdata   ),
    .M0_wstrb  ( M0_wstrb   ),
    .M0_wvalid ( M0_wvalid  ),
    .M0_wready ( M0_wready  ),
    .M0_bresp  ( M0_bresp   ),
    .M0_bvalid ( M0_bvalid  ),
    .M0_bready ( M0_bready  )
);


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
    .wen   ( LSU_valid )
);

ysyx_24120011_IDU u_ysyx_24120011_IDU(
    .inst           ( inst           ),
    .IFU_valid      ( IFU_valid      ),
    .LSU_valid      ( LSU_valid      ),
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

ysyx_24120011_WBU i_WBU(
    .pc_add_imme_out ( pc_add_imme_out ),
    .pc_add_4_out    ( pc_add_4_out    ),
    .alu_result      ( alu_result      ),
    .imme            ( imme            ),
    .r_mem_data      ( r_mem_data      ),
    .r_csr_data      ( r_csr_data      ),
    .rd_ctrl         ( rd_ctrl         ),
    .LSU_valid       ( LSU_valid       ),
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


ysyx_24120011_LSU i_LSU(
    .clk   ( clk   ),
    .rst   ( rst   ),
    .IFU_valid           ( IFU_valid           ),
    .w_mem_addr          ( alu_result          ),
    .r_mem_addr          ( alu_result          ),
    .w_mem_len           ( w_mem_len           ),
    .r_mem_len           ( r_mem_len           ),
    .w_mem_en            ( w_mem_en            ),
    .r_mem_en            ( r_mem_en            ),
    .sign_extension      ( sign_extension      ),
    .w_mem_data          ( src2                ),
    .r_mem_data          ( r_mem_data          ),
    .LSU_valid           ( LSU_valid           ),
    .LSU_ready           ( LSU_ready           ),
    .M1_araddr           ( M1_araddr  ),
    .M1_arvalid          ( M1_arvalid ),
    .M1_arready          ( M1_arready ),          
    .M1_rdata            ( M1_rdata   ),
    .M1_rresp            ( M1_rresp   ),
    .M1_rvalid           ( M1_rvalid  ),
    .M1_rready           ( M1_rready  ),
    .M1_awaddr           ( M1_awaddr  ),
    .M1_awvalid          ( M1_awvalid ),
    .M1_awready          ( M1_awready ),
    .M1_wdata            ( M1_wdata   ),
    .M1_wstrb            ( M1_wstrb   ),
    .M1_wvalid           ( M1_wvalid  ),
    .M1_wready           ( M1_wready  ),
    .M1_bresp            ( M1_bresp   ),
    .M1_bvalid           ( M1_bvalid  ),
    .M1_bready           ( M1_bready  )
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

ysyx_24120011_Arbiter u_ysyx_24120011_Arbiter(
    .clk        ( clk        ),
    .rst        ( rst        ),
    .M0_araddr  ( M0_araddr  ),
    .M0_arvalid ( M0_arvalid ),
    .M0_arready ( M0_arready ),
    .M0_rdata   ( M0_rdata   ),
    .M0_rresp   ( M0_rresp   ),
    .M0_rvalid  ( M0_rvalid  ),
    .M0_rready  ( M0_rready  ),
    .M0_awaddr  ( M0_awaddr  ),
    .M0_awvalid ( M0_awvalid ),
    .M0_awready ( M0_awready ),
    .M0_wdata   ( M0_wdata   ),
    .M0_wstrb   ( M0_wstrb   ),
    .M0_wvalid  ( M0_wvalid  ),
    .M0_wready  ( M0_wready  ),
    .M0_bresp   ( M0_bresp   ),
    .M0_bvalid  ( M0_bvalid  ),
    .M0_bready  ( M0_bready  ),
    .M1_araddr  ( M1_araddr  ),
    .M1_arvalid ( M1_arvalid ),
    .M1_arready ( M1_arready ),
    .M1_rdata   ( M1_rdata   ),
    .M1_rresp   ( M1_rresp   ),
    .M1_rvalid  ( M1_rvalid  ),
    .M1_rready  ( M1_rready  ),
    .M1_awaddr  ( M1_awaddr  ),
    .M1_awvalid ( M1_awvalid ),
    .M1_awready ( M1_awready ),
    .M1_wdata   ( M1_wdata   ),
    .M1_wstrb   ( M1_wstrb   ),
    .M1_wvalid  ( M1_wvalid  ),
    .M1_wready  ( M1_wready  ),
    .M1_bresp   ( M1_bresp   ),
    .M1_bvalid  ( M1_bvalid  ),
    .M1_bready  ( M1_bready  ),
    .S0_araddr  ( S0_araddr  ),
    .S0_arvalid ( S0_arvalid ),
    .S0_arready ( S0_arready ),
    .S0_rdata   ( S0_rdata   ),
    .S0_rresp   ( S0_rresp   ),
    .S0_rvalid  ( S0_rvalid  ),
    .S0_rready  ( S0_rready  ),
    .S0_awaddr  ( S0_awaddr  ),
    .S0_awvalid ( S0_awvalid ),
    .S0_awready ( S0_awready ),
    .S0_wdata   ( S0_wdata   ),
    .S0_wstrb   ( S0_wstrb   ),
    .S0_wvalid  ( S0_wvalid  ),
    .S0_wready  ( S0_wready  ),
    .S0_bresp   ( S0_bresp   ),
    .S0_bvalid  ( S0_bvalid  ),
    .S0_bready  ( S0_bready  )
);

ysyx_24120011_SRAM u_ysyx_24120011_SRAM(
    .clk     ( clk     ),
    .rst     ( rst     ),
    .araddr  ( S0_araddr  ),
    .arvalid ( S0_arvalid ),
    .arready ( S0_arready ),
    .rdata   ( S0_rdata   ),
    .rresp   ( S0_rresp   ),
    .rvalid  ( S0_rvalid  ),
    .rready  ( S0_rready  ),
    .awaddr  ( S0_awaddr  ),
    .awvalid ( S0_awvalid ),
    .awready ( S0_awready ),
    .wdata   ( S0_wdata   ),
    .wstrb   ( S0_wstrb   ),
    .wvalid  ( S0_wvalid  ),
    .wready  ( S0_wready  ),
    .bresp   ( S0_bresp   ),
    .bvalid  ( S0_bvalid  ),
    .bready  ( S0_bready  )
);

endmodule
