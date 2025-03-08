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
//============S0=============// 
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
//============sram=============// 
//AR
wire [31:0]     sram_araddr;
wire            sram_arvalid;
wire             sram_arready;
//R                
wire  [31:0]     sram_rdata;
wire  [1:0]      sram_rresp;
wire             sram_rvalid;
wire            sram_rready;
//AW 
wire [31:0]     sram_awaddr;
wire            sram_awvalid;
wire             sram_awready;
//W 
wire [31:0]     sram_wdata;
wire [3:0]      sram_wstrb;
wire            sram_wvalid;
wire             sram_wready;
//B 
wire [1:0]       sram_bresp;
wire             sram_bvalid;
wire            sram_bready;
//============uart=============// 
//AR
wire [31:0]     uart_araddr;
wire            uart_arvalid;
wire             uart_arready;
//R                
wire  [31:0]     uart_rdata;
wire  [1:0]      uart_rresp;
wire             uart_rvalid;
wire            uart_rready;
//AW 
wire [31:0]     uart_awaddr;
wire            uart_awvalid;
wire             uart_awready;
//W 
wire [31:0]     uart_wdata;
wire [3:0]      uart_wstrb;
wire            uart_wvalid;
wire             uart_wready;
//B 
wire [1:0]       uart_bresp;
wire             uart_bvalid;
wire            uart_bready;
//============clint=============// 
//AR
wire [31:0]     clint_araddr;
wire            clint_arvalid;
wire             clint_arready;
//R                
wire  [31:0]     clint_rdata;
wire  [1:0]      clint_rresp;
wire             clint_rvalid;
wire            clint_rready;
//AW 
wire [31:0]     clint_awaddr;
wire            clint_awvalid;
wire             clint_awready;
//W 
wire [31:0]     clint_wdata;
wire [3:0]      clint_wstrb;
wire            clint_wvalid;
wire             clint_wready;
//B 
wire [1:0]       clint_bresp;
wire             clint_bvalid;
wire            clint_bready;


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
    .araddr  ( sram_araddr  ),
    .arvalid ( sram_arvalid ),
    .arready ( sram_arready ),
    .rdata   ( sram_rdata   ),
    .rresp   ( sram_rresp   ),
    .rvalid  ( sram_rvalid  ),
    .rready  ( sram_rready  ),
    .awaddr  ( sram_awaddr  ),
    .awvalid ( sram_awvalid ),
    .awready ( sram_awready ),
    .wdata   ( sram_wdata   ),
    .wstrb   ( sram_wstrb   ),
    .wvalid  ( sram_wvalid  ),
    .wready  ( sram_wready  ),
    .bresp   ( sram_bresp   ),
    .bvalid  ( sram_bvalid  ),
    .bready  ( sram_bready  )
);

ysyx_24120011_Uart u_ysyx_24120011_Uart(
    .clk     ( clk     ),
    .rst     ( rst     ),
    .araddr  ( uart_araddr  ),
    .arvalid ( uart_arvalid ),
    .arready ( uart_arready ),
    .rdata   ( uart_rdata   ),
    .rresp   ( uart_rresp   ),
    .rvalid  ( uart_rvalid  ),
    .rready  ( uart_rready  ),
    .awaddr  ( uart_awaddr  ),
    .awvalid ( uart_awvalid ),
    .awready ( uart_awready ),
    .wdata   ( uart_wdata   ),
    .wstrb   ( uart_wstrb   ),
    .wvalid  ( uart_wvalid  ),
    .wready  ( uart_wready  ),
    .bresp   ( uart_bresp   ),
    .bvalid  ( uart_bvalid  ),
    .bready  ( uart_bready  )
);

ysyx_24120011_Clint u_ysyx_24120011_Clint(
    .clk     ( clint_clk     ),
    .rst     ( clint_rst     ),
    .araddr  ( clint_araddr  ),
    .arvalid ( clint_arvalid ),
    .arready ( clint_arready ),
    .rdata   ( clint_rdata   ),
    .rresp   ( clint_rresp   ),
    .rvalid  ( clint_rvalid  ),
    .rready  ( clint_rready  ),
    .awaddr  ( clint_awaddr  ),
    .awvalid ( clint_awvalid ),
    .awready ( clint_awready ),
    .wdata   ( clint_wdata   ),
    .wstrb   ( clint_wstrb   ),
    .wvalid  ( clint_wvalid  ),
    .wready  ( clint_wready  ),
    .bresp   ( clint_bresp   ),
    .bvalid  ( clint_bvalid  ),
    .bready  ( clint_bready  )
);

ysyx_24120011_Xbar u_ysyx_24120011_Xbar(
    .clk             ( clk             ),
    .rst             ( rst             ),
    .Xbar_araddr     ( S0_araddr       ),
    .Xbar_arvalid    ( S0_arvalid      ),
    .Xbar_arready    ( S0_arready      ),
    .Xbar_rdata      ( S0_rdata        ),
    .Xbar_rresp      ( S0_rresp        ),
    .Xbar_rvalid     ( S0_rvalid       ),
    .Xbar_rready     ( S0_rready       ),
    .Xbar_awaddr     ( S0_awaddr       ),
    .Xbar_awvalid    ( S0_awvalid      ),
    .Xbar_awready    ( S0_awready      ),
    .Xbar_wdata      ( S0_wdata        ),
    .Xbar_wstrb      ( S0_wstrb        ),
    .Xbar_wvalid     ( S0_wvalid       ),
    .Xbar_wready     ( S0_wready       ),
    .Xbar_bresp      ( S0_bresp        ),
    .Xbar_bvalid     ( S0_bvalid       ),
    .Xbar_bready     ( S0_bready       ),
    .Xbar_S0_araddr  ( sram_araddr     ),
    .Xbar_S0_arvalid ( sram_arvalid    ),
    .Xbar_S0_arready ( sram_arready    ),
    .Xbar_S0_rdata   ( sram_rdata      ),
    .Xbar_S0_rresp   ( sram_rresp      ),
    .Xbar_S0_rvalid  ( sram_rvalid     ),
    .Xbar_S0_rready  ( sram_rready     ),
    .Xbar_S0_awaddr  ( sram_awaddr     ),
    .Xbar_S0_awvalid ( sram_awvalid    ),
    .Xbar_S0_awready ( sram_awready    ),
    .Xbar_S0_wdata   ( sram_wdata      ),
    .Xbar_S0_wstrb   ( sram_wstrb      ),
    .Xbar_S0_wvalid  ( sram_wvalid     ),
    .Xbar_S0_wready  ( sram_wready     ),
    .Xbar_S0_bresp   ( sram_bresp      ),
    .Xbar_S0_bvalid  ( sram_bvalid     ),
    .Xbar_S0_bready  ( sram_bready     ),
    .Xbar_S1_araddr  ( uart_araddr     ),
    .Xbar_S1_arvalid ( uart_arvalid    ),
    .Xbar_S1_arready ( uart_arready    ),
    .Xbar_S1_rdata   ( uart_rdata      ),
    .Xbar_S1_rresp   ( uart_rresp      ),
    .Xbar_S1_rvalid  ( uart_rvalid     ),
    .Xbar_S1_rready  ( uart_rready     ),
    .Xbar_S1_awaddr  ( uart_awaddr     ),
    .Xbar_S1_awvalid ( uart_awvalid    ),
    .Xbar_S1_awready ( uart_awready    ),
    .Xbar_S1_wdata   ( uart_wdata      ),
    .Xbar_S1_wstrb   ( uart_wstrb      ),
    .Xbar_S1_wvalid  ( uart_wvalid     ),
    .Xbar_S1_wready  ( uart_wready     ),
    .Xbar_S1_bresp   ( uart_bresp      ),
    .Xbar_S1_bvalid  ( uart_bvalid     ),
    .Xbar_S1_bready  ( uart_bready     ),
    .Xbar_S2_araddr  ( clint_araddr     ),
    .Xbar_S2_arvalid ( clint_arvalid    ),
    .Xbar_S2_arready ( clint_arready    ),
    .Xbar_S2_rdata   ( clint_rdata      ),
    .Xbar_S2_rresp   ( clint_rresp      ),
    .Xbar_S2_rvalid  ( clint_rvalid     ),
    .Xbar_S2_rready  ( clint_rready     ),
    .Xbar_S2_awaddr  ( clint_awaddr     ),
    .Xbar_S2_awvalid ( clint_awvalid    ),
    .Xbar_S2_awready ( clint_awready    ),
    .Xbar_S2_wdata   ( clint_wdata      ),
    .Xbar_S2_wstrb   ( clint_wstrb      ),
    .Xbar_S2_wvalid  ( clint_wvalid     ),
    .Xbar_S2_wready  ( clint_wready     ),
    .Xbar_S2_bresp   ( clint_bresp      ),
    .Xbar_S2_bvalid  ( clint_bvalid     ),
    .Xbar_S2_bready  ( clint_bready     )
);

endmodule
