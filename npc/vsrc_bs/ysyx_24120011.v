
import "DPI-C" function void ebreak ();
import "DPI-C" function void npc_trap(input int pc, input int ret);
import "DPI-C" function void get_pc_inst(input int pc, input int dnpc, input int inst, input int IFU_valid_int);
import "DPI-C" function void Performance_Counters(input int Performancetype);

module ysyx_24120011 (
    input clock,
    input reset,
    input           io_interrupt        ,
    input		    io_master_awready	,
    output		    io_master_awvalid	,
    output	[31:0]	io_master_awaddr	,
    output	[3:0]	io_master_awid	    ,
    output	[7:0]	io_master_awlen	    ,
    output	[2:0]	io_master_awsize	,
    output	[1:0]	io_master_awburst	,
    input		    io_master_wready	,
    output		    io_master_wvalid	,
    output	[31:0]	io_master_wdata	    ,
    output	[3:0]	io_master_wstrb	    ,
    output		    io_master_wlast	    ,
    output		    io_master_bready	,
    input		    io_master_bvalid	,
    input	[1:0]	io_master_bresp	    ,
    input	[3:0]	io_master_bid	    ,
    input		    io_master_arready	,
    output		    io_master_arvalid	,
    output	[31:0]	io_master_araddr	,
    output	[3:0]	io_master_arid	    ,
    output	[7:0]	io_master_arlen	    ,
    output	[2:0]	io_master_arsize	,
    output	[1:0]	io_master_arburst	,
    output		    io_master_rready	,
    input		    io_master_rvalid	,
    input	[1:0]	io_master_rresp	    ,
    input	[31:0]	io_master_rdata	    ,
    input		    io_master_rlast	    ,
    input	[3:0]	io_master_rid	    ,


    output		    io_slave_awready    ,
    input		    io_slave_awvalid    ,
    input	[31:0]	io_slave_awaddr     ,
    input	[3:0]	io_slave_awid       ,
    input	[7:0]	io_slave_awlen      ,
    input	[2:0]	io_slave_awsize     ,
    input	[1:0]	io_slave_awburst    ,
    output		    io_slave_wready     ,
    input		    io_slave_wvalid     ,
    input	[31:0]	io_slave_wdata      ,
    input	[3:0]	io_slave_wstrb      ,
    input		    io_slave_wlast      ,
    input		    io_slave_bready     ,
    output		    io_slave_bvalid     ,
    output	[1:0]	io_slave_bresp      ,
    output	[3:0]	io_slave_bid        ,
    output		    io_slave_arready    ,
    input		    io_slave_arvalid    ,
    input	[31:0]	io_slave_araddr     ,
    input	[3:0]	io_slave_arid       ,
    input	[7:0]	io_slave_arlen      ,
    input	[2:0]	io_slave_arsize     ,
    input	[1:0]	io_slave_arburst    ,
    input		    io_slave_rready     ,
    output		    io_slave_rvalid     ,
    output	[1:0]	io_slave_rresp      ,
    output	[31:0]	io_slave_rdata      ,
    output		    io_slave_rlast      ,
    output	[3:0]	io_slave_rid
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
//AR-axi4lite
wire  [31:0]     M0_araddr;
wire             M0_arvalid;
wire              M0_arready;
//AR-axi4
wire  [3:0]      M0_arid;
wire  [7:0]      M0_arlen;
wire  [2:0]      M0_arsize;
wire  [1:0]      M0_arburst;
//R-axi4lite            
wire   [31:0]     M0_rdata;
wire   [1:0]      M0_rresp;
wire              M0_rvalid;
wire             M0_rready;
//R-axi4
wire              M0_rlast;
wire   [3:0]      M0_rid;
//AW-axi4lite
wire  [31:0]     M0_awaddr;
wire             M0_awvalid;
wire              M0_awready;
//AW-axi4
wire  [3:0]      M0_awid;
wire  [7:0]      M0_awlen;
wire  [2:0]      M0_awsize;
wire  [1:0]      M0_awburst;
//W-axi4lite
wire  [31:0]     M0_wdata;
wire  [3:0]      M0_wstrb;
wire             M0_wvalid;
wire              M0_wready;
//W-axi4
wire             M0_wlast;
//B-axi4lite
wire   [1:0]      M0_bresp;
wire              M0_bvalid;
wire             M0_bready;
//B-axi4
wire	[3:0]	   M0_bid;
//============M1=============//        
//AR-axi4lite
wire  [31:0]     M1_araddr;
wire             M1_arvalid;
wire              M1_arready;
//AR-axi4
wire  [3:0]      M1_arid;
wire  [7:0]      M1_arlen;
wire  [2:0]      M1_arsize;
wire  [1:0]      M1_arburst;
//R-axi4lite            
wire   [31:0]     M1_rdata;
wire   [1:0]      M1_rresp;
wire              M1_rvalid;
wire             M1_rready;
//R-axi4
wire              M1_rlast;
wire   [3:0]      M1_rid;
//AW-axi4lite
wire  [31:0]     M1_awaddr;
wire             M1_awvalid;
wire              M1_awready;
//AW-axi4
wire  [3:0]      M1_awid;
wire  [7:0]      M1_awlen;
wire  [2:0]      M1_awsize;
wire  [1:0]      M1_awburst;
//W-axi4lite
wire  [31:0]     M1_wdata;
wire  [3:0]      M1_wstrb;
wire             M1_wvalid;
wire              M1_wready;
//W-axi4
wire             M1_wlast;
//B-axi4lite
wire   [1:0]      M1_bresp;
wire              M1_bvalid;
wire             M1_bready;
//B-axi4
wire	[3:0]	   M1_bid;
//============S0=============// 
//AR-axi4lite
wire  [31:0]     S0_araddr;
wire             S0_arvalid;
wire            S0_arready;
//AR-axi4
wire  [3:0]      S0_arid;
wire  [7:0]      S0_arlen;
wire  [2:0]      S0_arsize;
wire  [1:0]      S0_arburst;
//R-axi4lite              
wire [31:0]     S0_rdata;
wire [1:0]      S0_rresp;
wire            S0_rvalid;
wire             S0_rready;
//R-axi4
wire            S0_rlast;
wire [3:0]      S0_rid;
//AW-axi4lite
wire  [31:0]     S0_awaddr;
wire             S0_awvalid;
wire            S0_awready;
//AW-axi4
wire  [3:0]      S0_awid;
wire  [7:0]      S0_awlen;
wire  [2:0]      S0_awsize;
wire  [1:0]      S0_awburst;
//W-axi4lite
wire  [31:0]     S0_wdata;
wire  [3:0]      S0_wstrb;
wire             S0_wvalid;
wire            S0_wready;
//W-axi4
wire             S0_wlast;
//B-axi4lite
wire [1:0]      S0_bresp;
wire            S0_bvalid;
wire             S0_bready;
//B-axi4
wire [3:0]	  S0_bid;
//============sram=============// 
//AR-axi4lite
wire  [31:0]     sram_araddr;
wire             sram_arvalid;
wire            sram_arready;
//AR-axi4
wire  [3:0]      sram_arid;
wire  [7:0]      sram_arlen;
wire  [2:0]      sram_arsize;
wire  [1:0]      sram_arburst;
//R-axi4lite              
wire [31:0]     sram_rdata;
wire [1:0]      sram_rresp;
wire            sram_rvalid;
wire             sram_rready;
//R-axi4
wire            sram_rlast;
wire [3:0]      sram_rid;
//AW-axi4lite
wire  [31:0]     sram_awaddr;
wire             sram_awvalid;
wire            sram_awready;
//AW-axi4
wire  [3:0]      sram_awid;
wire  [7:0]      sram_awlen;
wire  [2:0]      sram_awsize;
wire  [1:0]      sram_awburst;
//W-axi4lite
wire  [31:0]     sram_wdata;
wire  [3:0]      sram_wstrb;
wire             sram_wvalid;
wire            sram_wready;
//W-axi4
wire             sram_wlast;
//B-axi4lite
wire [1:0]      sram_bresp;
wire            sram_bvalid;
wire             sram_bready;
//B-axi4
wire [3:0]	  sram_bid;
//============uart=============// 
//AR-axi4lite
wire  [31:0]     uart_araddr;
wire             uart_arvalid;
wire            uart_arready;
//AR-axi4
wire  [3:0]      uart_arid;
wire  [7:0]      uart_arlen;
wire  [2:0]      uart_arsize;
wire  [1:0]      uart_arburst;
//R-axi4lite              
wire [31:0]     uart_rdata;
wire [1:0]      uart_rresp;
wire            uart_rvalid;
wire             uart_rready;
//R-axi4
wire            uart_rlast;
wire [3:0]      uart_rid;
//AW-axi4lite
wire  [31:0]     uart_awaddr;
wire             uart_awvalid;
wire            uart_awready;
//AW-axi4
wire  [3:0]      uart_awid;
wire  [7:0]      uart_awlen;
wire  [2:0]      uart_awsize;
wire  [1:0]      uart_awburst;
//W-axi4lite
wire  [31:0]     uart_wdata;
wire  [3:0]      uart_wstrb;
wire             uart_wvalid;
wire            uart_wready;
//W-axi4
wire             uart_wlast;
//B-axi4lite
wire [1:0]      uart_bresp;
wire            uart_bvalid;
wire             uart_bready;
//B-axi4
wire [3:0]	  uart_bid;
//============clint=============// 
//AR-axi4lite
wire  [31:0]     clint_araddr;
wire             clint_arvalid;
wire            clint_arready;
//AR-axi4
wire  [3:0]      clint_arid;
wire  [7:0]      clint_arlen;
wire  [2:0]      clint_arsize;
wire  [1:0]      clint_arburst;
//R-axi4lite              
wire [31:0]     clint_rdata;
wire [1:0]      clint_rresp;
wire            clint_rvalid;
wire             clint_rready;
//R-axi4
wire            clint_rlast;
wire [3:0]      clint_rid;
//AW-axi4lite
wire  [31:0]     clint_awaddr;
wire             clint_awvalid;
wire            clint_awready;
//AW-axi4
wire  [3:0]      clint_awid;
wire  [7:0]      clint_awlen;
wire  [2:0]      clint_awsize;
wire  [1:0]      clint_awburst;
//W-axi4lite
wire  [31:0]     clint_wdata;
wire  [3:0]      clint_wstrb;
wire             clint_wvalid;
wire            clint_wready;
//W-axi4
wire             clint_wlast;
//B-axi4lite
wire [1:0]      clint_bresp;
wire            clint_bvalid;
wire             clint_bready;
//B-axi4
wire [3:0]	  clint_bid;


assign LSU_valid_int    = {31'b0,LSU_valid};

assign io_slave_awready = 'd0;    
assign io_slave_wready  = 'd0;    
assign io_slave_bvalid  = 'd0;    
assign io_slave_bresp   = 'd0;    
assign io_slave_bid     = 'd0;    
assign io_slave_arready = 'd0;    
assign io_slave_rvalid  = 'd0;    
assign io_slave_rresp   = 'd0;    
assign io_slave_rdata   = 'd0;    
assign io_slave_rlast   = 'd0;    
assign io_slave_rid     = 'd0;

always@(posedge clock)begin
    if (inst == 32'b00000000000100000000000001110011)begin
        npc_trap(pc,a0);
        ebreak();
    end
end

always@(posedge clock) begin
    if(reset) begin
        pc <= 32'h3000_0000;
    end
end

always@(negedge clock) begin
    get_pc_inst(pc,dnpc,inst,LSU_valid_int);
end

reg IFU_valid_delay;
reg IFU_valid_rising_edge;
reg LSU_rready_delay;
reg LSU_rready_rising_edge;
always@(posedge clock) begin
    IFU_valid_delay <= IFU_valid;
    IFU_valid_rising_edge <= IFU_valid & ~IFU_valid_delay;
    LSU_rready_delay <= M1_rready;
    LSU_rready_rising_edge <= M1_rready & ~LSU_rready_delay;
end
always@(posedge clock) begin
    if(IFU_valid_rising_edge) begin
        Performance_Counters(32'd1);
    end
    if(LSU_rready_rising_edge) begin
        Performance_Counters(32'd2);
    end
end

assign b_type_enter_if = (inst[6:0] == 7'b1100011 && alu_result[0] == 1'b1) ? 1 : 0;

ysyx_24120011_IFU i_IFU(
    .clk       ( clock       ),
    .rst       ( reset       ),
    .pc        ( pc        ),
    .inst      ( inst      ),
    .IFU_valid ( IFU_valid ),
    .LSU_ready ( LSU_ready ),
    .M0_araddr  ( M0_araddr  ),
    .M0_arvalid ( M0_arvalid ),
    .M0_arready ( M0_arready ),
    .M0_arid    ( M0_arid    ),
    .M0_arlen   ( M0_arlen   ),
    .M0_arsize  ( M0_arsize  ),
    .M0_arburst ( M0_arburst ),
    .M0_rdata   ( M0_rdata   ),
    .M0_rresp   ( M0_rresp   ),
    .M0_rvalid  ( M0_rvalid  ),
    .M0_rready  ( M0_rready  ),
    .M0_rlast   ( M0_rlast   ),
    .M0_rid     ( M0_rid     ),
    .M0_awaddr  ( M0_awaddr  ),
    .M0_awvalid ( M0_awvalid ),
    .M0_awready ( M0_awready ),
    .M0_awid    ( M0_awid    ),
    .M0_awlen   ( M0_awlen   ),
    .M0_awsize  ( M0_awsize  ),
    .M0_awburst ( M0_awburst ),
    .M0_wdata   ( M0_wdata   ),
    .M0_wstrb   ( M0_wstrb   ),
    .M0_wvalid  ( M0_wvalid  ),
    .M0_wready  ( M0_wready  ),
    .M0_wlast   ( M0_wlast   ),
    .M0_bresp   ( M0_bresp   ),
    .M0_bvalid  ( M0_bvalid  ),
    .M0_bready  ( M0_bready  ),
    .M0_bid     ( M0_bid     )
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


ysyx_24120011_Reg #(32, 32'h3000_0000) i_pc (
    .clk   ( clock ), 
    .rst   ( reset ), 
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
    .clk   ( clock   ),
    .rst   ( reset   ),
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
    .clk   ( clock   ),
    .rst   ( reset   ),
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
    .M1_araddr           ( M1_araddr      ),
    .M1_arvalid          ( M1_arvalid     ),
    .M1_arready          ( M1_arready     ),
    .M1_arid             ( M1_arid        ),
    .M1_arlen            ( M1_arlen       ),
    .M1_arsize           ( M1_arsize      ),
    .M1_arburst          ( M1_arburst     ),
    .M1_rdata            ( M1_rdata       ),
    .M1_rresp            ( M1_rresp       ),
    .M1_rvalid           ( M1_rvalid      ),
    .M1_rready           ( M1_rready      ),
    .M1_rlast            ( M1_rlast       ),
    .M1_rid              ( M1_rid         ),
    .M1_awaddr           ( M1_awaddr      ),
    .M1_awvalid          ( M1_awvalid     ),
    .M1_awready          ( M1_awready     ),
    .M1_awid             ( M1_awid        ),
    .M1_awlen            ( M1_awlen       ),
    .M1_awsize           ( M1_awsize      ),
    .M1_awburst          ( M1_awburst     ),
    .M1_wdata            ( M1_wdata       ),
    .M1_wstrb            ( M1_wstrb       ),
    .M1_wvalid           ( M1_wvalid      ),
    .M1_wready           ( M1_wready      ),
    .M1_wlast            ( M1_wlast       ),
    .M1_bresp            ( M1_bresp       ),
    .M1_bvalid           ( M1_bvalid      ),
    .M1_bready           ( M1_bready      ),
    .M1_bid              ( M1_bid         )
);

ysyx_24120011_Csr i_Csr(
    .clk         ( clock         ),
    .rst         ( reset         ),
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
    .clk        ( clock        ),
    .rst        ( reset        ),
    .M0_araddr  ( M0_araddr  ),
    .M0_arvalid ( M0_arvalid ),
    .M0_arready ( M0_arready ),
    .M0_arid    ( M0_arid    ),
    .M0_arlen   ( M0_arlen   ),
    .M0_arsize  ( M0_arsize  ),
    .M0_arburst ( M0_arburst ),
    .M0_rdata   ( M0_rdata   ),
    .M0_rresp   ( M0_rresp   ),
    .M0_rvalid  ( M0_rvalid  ),
    .M0_rready  ( M0_rready  ),
    .M0_rlast   ( M0_rlast   ),
    .M0_rid     ( M0_rid     ),
    .M0_awaddr  ( M0_awaddr  ),
    .M0_awvalid ( M0_awvalid ),
    .M0_awready ( M0_awready ),
    .M0_awid    ( M0_awid    ),
    .M0_awlen   ( M0_awlen   ),
    .M0_awsize  ( M0_awsize  ),
    .M0_awburst ( M0_awburst ),
    .M0_wdata   ( M0_wdata   ),
    .M0_wstrb   ( M0_wstrb   ),
    .M0_wvalid  ( M0_wvalid  ),
    .M0_wready  ( M0_wready  ),
    .M0_wlast   ( M0_wlast   ),
    .M0_bresp   ( M0_bresp   ),
    .M0_bvalid  ( M0_bvalid  ),
    .M0_bready  ( M0_bready  ),
    .M0_bid     ( M0_bid     ),
    .M1_araddr  ( M1_araddr  ),
    .M1_arvalid ( M1_arvalid ),
    .M1_arready ( M1_arready ),
    .M1_arid    ( M1_arid    ),
    .M1_arlen   ( M1_arlen   ),
    .M1_arsize  ( M1_arsize  ),
    .M1_arburst ( M1_arburst ),
    .M1_rdata   ( M1_rdata   ),
    .M1_rresp   ( M1_rresp   ),
    .M1_rvalid  ( M1_rvalid  ),
    .M1_rready  ( M1_rready  ),
    .M1_rlast   ( M1_rlast   ),
    .M1_rid     ( M1_rid     ),
    .M1_awaddr  ( M1_awaddr  ),
    .M1_awvalid ( M1_awvalid ),
    .M1_awready ( M1_awready ),
    .M1_awid    ( M1_awid    ),
    .M1_awlen   ( M1_awlen   ),
    .M1_awsize  ( M1_awsize  ),
    .M1_awburst ( M1_awburst ),
    .M1_wdata   ( M1_wdata   ),
    .M1_wstrb   ( M1_wstrb   ),
    .M1_wvalid  ( M1_wvalid  ),
    .M1_wready  ( M1_wready  ),
    .M1_wlast   ( M1_wlast   ),
    .M1_bresp   ( M1_bresp   ),
    .M1_bvalid  ( M1_bvalid  ),
    .M1_bready  ( M1_bready  ),
    .M1_bid     ( M1_bid     ),
    .S0_araddr  ( S0_araddr  ),
    .S0_arvalid ( S0_arvalid ),
    .S0_arready ( S0_arready ),
    .S0_arid    ( S0_arid    ),
    .S0_arlen   ( S0_arlen   ),
    .S0_arsize  ( S0_arsize  ),
    .S0_arburst ( S0_arburst ),
    .S0_rdata   ( S0_rdata   ),
    .S0_rresp   ( S0_rresp   ),
    .S0_rvalid  ( S0_rvalid  ),
    .S0_rready  ( S0_rready  ),
    .S0_rlast   ( S0_rlast   ),
    .S0_rid     ( S0_rid     ),
    .S0_awaddr  ( S0_awaddr  ),
    .S0_awvalid ( S0_awvalid ),
    .S0_awready ( S0_awready ),
    .S0_awid    ( S0_awid    ),
    .S0_awlen   ( S0_awlen   ),
    .S0_awsize  ( S0_awsize  ),
    .S0_awburst ( S0_awburst ),
    .S0_wdata   ( S0_wdata   ),
    .S0_wstrb   ( S0_wstrb   ),
    .S0_wvalid  ( S0_wvalid  ),
    .S0_wready  ( S0_wready  ),
    .S0_wlast   ( S0_wlast   ),
    .S0_bresp   ( S0_bresp   ),
    .S0_bvalid  ( S0_bvalid  ),
    .S0_bready  ( S0_bready  ),
    .S0_bid     ( S0_bid     )
);


// ysyx_24120011_SRAM u_ysyx_24120011_SRAM(
//     .clk     ( clock     ),
//     .rst     ( reset     ),
//     .araddr  ( sram_araddr  ),
//     .arvalid ( sram_arvalid ),
//     .arready ( sram_arready ),
//     .arid    ( sram_arid    ),
//     .arlen   ( sram_arlen   ),
//     .arsize  ( sram_arsize  ),
//     .arburst ( sram_arburst ),
//     .rdata   ( sram_rdata   ),
//     .rresp   ( sram_rresp   ),
//     .rvalid  ( sram_rvalid  ),
//     .rready  ( sram_rready  ),
//     .rlast   ( sram_rlast   ),
//     .rid     ( sram_rid     ),
//     .awaddr  ( sram_awaddr  ),
//     .awvalid ( sram_awvalid ),
//     .awready ( sram_awready ),
//     .awid    ( sram_awid    ),
//     .awlen   ( sram_awlen   ),
//     .awsize  ( sram_awsize  ),
//     .awburst ( sram_awburst ),
//     .wdata   ( sram_wdata   ),
//     .wstrb   ( sram_wstrb   ),
//     .wvalid  ( sram_wvalid  ),
//     .wready  ( sram_wready  ),
//     .wlast   ( sram_wlast   ),
//     .bresp   ( sram_bresp   ),
//     .bvalid  ( sram_bvalid  ),
//     .bready  ( sram_bready  ),
//     .bid     ( sram_bid     )
// );

// ysyx_24120011_Uart u_ysyx_24120011_Uart(
//     .clk     ( clock     ),
//     .rst     ( reset     ),
//     .araddr  ( uart_araddr  ),
//     .arvalid ( uart_arvalid ),
//     .arready ( uart_arready ),
//     .arid    ( uart_arid    ),
//     .arlen   ( uart_arlen   ),
//     .arsize  ( uart_arsize  ),
//     .arburst ( uart_arburst ),
//     .rdata   ( uart_rdata   ),
//     .rresp   ( uart_rresp   ),
//     .rvalid  ( uart_rvalid  ),
//     .rready  ( uart_rready  ),
//     .rlast   ( uart_rlast   ),
//     .rid     ( uart_rid     ),
//     .awaddr  ( uart_awaddr  ),
//     .awvalid ( uart_awvalid ),
//     .awready ( uart_awready ),
//     .awid    ( uart_awid    ),
//     .awlen   ( uart_awlen   ),
//     .awsize  ( uart_awsize  ),
//     .awburst ( uart_awburst ),
//     .wdata   ( uart_wdata   ),
//     .wstrb   ( uart_wstrb   ),
//     .wvalid  ( uart_wvalid  ),
//     .wready  ( uart_wready  ),
//     .wlast   ( uart_wlast   ),
//     .bresp   ( uart_bresp   ),
//     .bvalid  ( uart_bvalid  ),
//     .bready  ( uart_bready  ),
//     .bid     ( uart_bid     )
// );

ysyx_24120011_Clint u_ysyx_24120011_Clint(
    .clk     ( clock     ),
    .rst     ( reset     ),
    .araddr  ( clint_araddr  ),
    .arvalid ( clint_arvalid ),
    .arready ( clint_arready ),
    .arid    ( clint_arid    ),
    .arlen   ( clint_arlen   ),
    .arsize  ( clint_arsize  ),
    .arburst ( clint_arburst ),
    .rdata   ( clint_rdata   ),
    .rresp   ( clint_rresp   ),
    .rvalid  ( clint_rvalid  ),
    .rready  ( clint_rready  ),
    .rlast   ( clint_rlast   ),
    .rid     ( clint_rid     ),
    .awaddr  ( clint_awaddr  ),
    .awvalid ( clint_awvalid ),
    .awready ( clint_awready ),
    .awid    ( clint_awid    ),
    .awlen   ( clint_awlen   ),
    .awsize  ( clint_awsize  ),
    .awburst ( clint_awburst ),
    .wdata   ( clint_wdata   ),
    .wstrb   ( clint_wstrb   ),
    .wvalid  ( clint_wvalid  ),
    .wready  ( clint_wready  ),
    .wlast   ( clint_wlast   ),
    .bresp   ( clint_bresp   ),
    .bvalid  ( clint_bvalid  ),
    .bready  ( clint_bready  ),
    .bid     ( clint_bid     )
);

ysyx_24120011_Xbar u_ysyx_24120011_Xbar(
    .clk             ( clock             ),
    .rst             ( reset             ),
    .Xbar_araddr     ( S0_araddr     ),
    .Xbar_arvalid    ( S0_arvalid    ),
    .Xbar_arready    ( S0_arready    ),
    .Xbar_arid       ( S0_arid       ),
    .Xbar_arlen      ( S0_arlen      ),
    .Xbar_arsize     ( S0_arsize     ),
    .Xbar_arburst    ( S0_arburst    ),
    .Xbar_rdata      ( S0_rdata      ),
    .Xbar_rresp      ( S0_rresp      ),
    .Xbar_rvalid     ( S0_rvalid     ),
    .Xbar_rready     ( S0_rready     ),
    .Xbar_rlast      ( S0_rlast      ),
    .Xbar_rid        ( S0_rid        ),
    .Xbar_awaddr     ( S0_awaddr     ),
    .Xbar_awvalid    ( S0_awvalid    ),
    .Xbar_awready    ( S0_awready    ),
    .Xbar_awid       ( S0_awid       ),
    .Xbar_awlen      ( S0_awlen      ),
    .Xbar_awsize     ( S0_awsize     ),
    .Xbar_awburst    ( S0_awburst    ),
    .Xbar_wdata      ( S0_wdata      ),
    .Xbar_wstrb      ( S0_wstrb      ),
    .Xbar_wvalid     ( S0_wvalid     ),
    .Xbar_wready     ( S0_wready     ),
    .Xbar_wlast      ( S0_wlast      ),
    .Xbar_bresp      ( S0_bresp      ),
    .Xbar_bvalid     ( S0_bvalid     ),
    .Xbar_bready     ( S0_bready     ),
    .Xbar_bid        ( S0_bid        ),
    .Xbar_S0_araddr  ( io_master_araddr  ),
    .Xbar_S0_arvalid ( io_master_arvalid ),
    .Xbar_S0_arready ( io_master_arready ),
    .Xbar_S0_arid    ( io_master_arid    ),
    .Xbar_S0_arlen   ( io_master_arlen   ),
    .Xbar_S0_arsize  ( io_master_arsize  ),
    .Xbar_S0_arburst ( io_master_arburst ),
    .Xbar_S0_rdata   ( io_master_rdata   ),
    .Xbar_S0_rresp   ( io_master_rresp   ),
    .Xbar_S0_rvalid  ( io_master_rvalid  ),
    .Xbar_S0_rready  ( io_master_rready  ),
    .Xbar_S0_rlast   ( io_master_rlast   ),
    .Xbar_S0_rid     ( io_master_rid     ),
    .Xbar_S0_awaddr  ( io_master_awaddr  ),
    .Xbar_S0_awvalid ( io_master_awvalid ),
    .Xbar_S0_awready ( io_master_awready ),
    .Xbar_S0_awid    ( io_master_awid    ),
    .Xbar_S0_awlen   ( io_master_awlen   ),
    .Xbar_S0_awsize  ( io_master_awsize  ),
    .Xbar_S0_awburst ( io_master_awburst ),
    .Xbar_S0_wdata   ( io_master_wdata   ),
    .Xbar_S0_wstrb   ( io_master_wstrb   ),
    .Xbar_S0_wvalid  ( io_master_wvalid  ),
    .Xbar_S0_wready  ( io_master_wready  ),
    .Xbar_S0_wlast   ( io_master_wlast   ),
    .Xbar_S0_bresp   ( io_master_bresp   ),
    .Xbar_S0_bvalid  ( io_master_bvalid  ),
    .Xbar_S0_bready  ( io_master_bready  ),
    .Xbar_S0_bid     ( io_master_bid     ),
    .Xbar_S1_araddr  (  ),
    .Xbar_S1_arvalid (  ),
    .Xbar_S1_arready (  ),
    .Xbar_S1_arid    (  ),
    .Xbar_S1_arlen   (  ),
    .Xbar_S1_arsize  (  ),
    .Xbar_S1_arburst (  ),
    .Xbar_S1_rdata   (  ),
    .Xbar_S1_rresp   (  ),
    .Xbar_S1_rvalid  (  ),
    .Xbar_S1_rready  (  ),
    .Xbar_S1_rlast   (  ),
    .Xbar_S1_rid     (  ),
    .Xbar_S1_awaddr  (  ),
    .Xbar_S1_awvalid (  ),
    .Xbar_S1_awready (  ),
    .Xbar_S1_awid    (  ),
    .Xbar_S1_awlen   (  ),
    .Xbar_S1_awsize  (  ),
    .Xbar_S1_awburst (  ),
    .Xbar_S1_wdata   (  ),
    .Xbar_S1_wstrb   (  ),
    .Xbar_S1_wvalid  (  ),
    .Xbar_S1_wready  (  ),
    .Xbar_S1_wlast   (  ),
    .Xbar_S1_bresp   (  ),
    .Xbar_S1_bvalid  (  ),
    .Xbar_S1_bready  (  ),
    .Xbar_S1_bid     (  ),
    .Xbar_S2_araddr  ( clint_araddr  ),
    .Xbar_S2_arvalid ( clint_arvalid ),
    .Xbar_S2_arready ( clint_arready ),
    .Xbar_S2_arid    ( clint_arid    ),
    .Xbar_S2_arlen   ( clint_arlen   ),
    .Xbar_S2_arsize  ( clint_arsize  ),
    .Xbar_S2_arburst ( clint_arburst ),
    .Xbar_S2_rdata   ( clint_rdata   ),
    .Xbar_S2_rresp   ( clint_rresp   ),
    .Xbar_S2_rvalid  ( clint_rvalid  ),
    .Xbar_S2_rready  ( clint_rready  ),
    .Xbar_S2_rlast   ( clint_rlast   ),
    .Xbar_S2_rid     ( clint_rid     ),
    .Xbar_S2_awaddr  ( clint_awaddr  ),
    .Xbar_S2_awvalid ( clint_awvalid ),
    .Xbar_S2_awready ( clint_awready ),
    .Xbar_S2_awid    ( clint_awid    ),
    .Xbar_S2_awlen   ( clint_awlen   ),
    .Xbar_S2_awsize  ( clint_awsize  ),
    .Xbar_S2_awburst ( clint_awburst ),
    .Xbar_S2_wdata   ( clint_wdata   ),
    .Xbar_S2_wstrb   ( clint_wstrb   ),
    .Xbar_S2_wvalid  ( clint_wvalid  ),
    .Xbar_S2_wready  ( clint_wready  ),
    .Xbar_S2_wlast   ( clint_wlast   ),
    .Xbar_S2_bresp   ( clint_bresp   ),
    .Xbar_S2_bvalid  ( clint_bvalid  ),
    .Xbar_S2_bready  ( clint_bready  ),
    .Xbar_S2_bid     ( clint_bid     )
);


endmodule
