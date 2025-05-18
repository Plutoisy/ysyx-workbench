import "DPI-C" function void IFU_clktime_count(input int ifu_clk_count);

module ysyx_24120011_IFU(
    input clk,
    input rst,
    input [31:0] pc,
    output reg [31:0] inst,
    output IFU_valid,
    input LSU_ready,
    input EXU_ready,
    //============M0=============//        
    //AR-axi4lite
    output  [31:0]     M0_araddr,
    output             M0_arvalid,
    input            M0_arready,
    //AR-axi4
    output  [3:0]      M0_arid,
    output  [7:0]      M0_arlen,
    output  [2:0]      M0_arsize,
    output  [1:0]      M0_arburst,
    //R-axi4lite               
    input [31:0]     M0_rdata,
    input [1:0]      M0_rresp,
    input            M0_rvalid,
    output             M0_rready,
    //R-axi4
    input              M0_rlast,
    input   [3:0]      M0_rid,
    //AW-axi4lite
    output  [31:0]     M0_awaddr,
    output             M0_awvalid,
    input            M0_awready,
    //AW-axi4
    output  [3:0]      M0_awid,
    output  [7:0]      M0_awlen,
    output  [2:0]      M0_awsize,
    output  [1:0]      M0_awburst,
    //W-axi4lite
    output  [31:0]     M0_wdata,
    output  [3:0]      M0_wstrb,
    output             M0_wvalid,
    input            M0_wready,
    //W-axi4
    output             M0_wlast,
    //B-axi4lite
    input [1:0]      M0_bresp,
    input            M0_bvalid,
    output             M0_bready,
    //B-axi4
    input	[3:0]	   M0_bid
);

// SRAM i_SRAM(
//     .clk              ( clk              ),
//     .rst              ( rst              ),
//     .sram_rd_en       ( 1'b1             ),
//     .sram_rd_addr     ( pc               ),
//     .sram_rd_data_out ( inst             ),
//     .sram_valid       ( IFU_valid        )
// );
wire arready;
wire [1:0] rresp;
wire awready;
wire wready;
wire [1:0] bresp;
wire bvalid;
wire rvalid;
reg rready;
reg rvalid_prev;
reg arvalid;

reg [2:0] state;
reg [2:0] next_state;
reg start_read_delay;

reg [7:0] arvalid_delay_cnt;
reg [7:0] rready_delay_cnt;

assign IFU_valid = rready;

reg [7:0] LSFR_in;
reg [7:0] random_delay;

ysyx_24120011_LFSR i1_LFSR(
    .clk ( clk           ),
    .in  ( LSFR_in       ),
    .out ( random_delay  )
);

assign M0_araddr  = pc      ;
assign M0_arvalid = arvalid ;
assign arready    = M0_arready;
// assign inst       = M0_rdata;
assign rresp      = M0_rresp ;
assign rvalid     = M0_rvalid;
assign M0_rready  = rready  ;
assign M0_awaddr  = 32'b0   ;
assign M0_awvalid = 1'b0    ;
assign awready    = M0_awready;
assign M0_wdata   = 32'b0   ;
assign M0_wstrb   = 4'b1111 ;
assign M0_wvalid  = 1'b0    ;
assign wready     = M0_wready;
assign bresp      = M0_bresp;
assign bvalid     = M0_bvalid;
assign M0_bready  = 1'b1    ;

assign M0_arid    = 'd0       ;
assign M0_arlen   = 'd0       ;
assign M0_arburst = 'd0       ;
assign M0_arsize  = 3'b010    ;
assign M0_awid    = 'd0       ;
assign M0_awlen   = 'd0       ;
assign M0_awburst = 'd0       ;
assign M0_awsize  = 3'b010    ;
assign M0_wlast   = M0_wvalid ;

// ysyx_24120011_SRAM u_ysyx_24120011_SRAM(
//     .clk     ( clk     ),
//     .rst     ( rst     ),
//     .araddr  ( pc      ),
//     .arvalid ( arvalid    ),
//     .arready ( arready ),
//     .rdata   ( inst    ),
//     .rresp   ( rresp   ),
//     .rvalid  ( rvalid  ),
//     .rready  ( rready ),
//     .awaddr  ( 32'b0  ),
//     .awvalid ( 1'b0 ),
//     .awready ( awready ),
//     .wdata   ( 32'b0   ),
//     .wstrb   ( 4'b1111 ),
//     .wvalid  ( 1'b0  ),
//     .wready  ( wready  ),
//     .bresp   ( bresp   ),
//     .bvalid  ( bvalid  ),
//     .bready  ( 1'b1  )
// );

//======================dpic========================//
reg [31:0] ifu_clk_count;
always@(posedge clk)begin
    if(LSU_ready && EXU_ready)begin
        ifu_clk_count <= 'b0;
    end
    else if(rvalid  && rready)begin
        IFU_clktime_count(ifu_clk_count);
    end
    else begin
        ifu_clk_count <= ifu_clk_count + 1;
    end
end
//======================dpic========================//

parameter ysyx_24120011_IFU_M_AXI_IDLE  = 3'b000;
parameter ysyx_24120011_IFU_M_AXI_RADDR = 3'b001;
parameter ysyx_24120011_IFU_M_AXI_RDATA = 3'b010;

// always@(posedge clk)begin
//     if (rvalid && !rvalid_prev) begin
//         rready <= 1;
//     end else begin
//         rready <= 0;
//     end
//     rvalid_prev <= rvalid;
// end

/* verilator lint_off LATCH */
always@(posedge clk)begin
    if(M0_rdata != 'd0)begin
        inst = M0_rdata;
    end
end
//arvalid_delay
always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_RADDR && arvalid_delay_cnt != 0 )begin
        arvalid_delay_cnt <= arvalid_delay_cnt - 1;
    end
    else if(state == ysyx_24120011_IFU_M_AXI_RADDR && arvalid_delay_cnt == 0)begin
        if(arready)begin
            arvalid <= 0;
        end
        else begin
            arvalid <= 1;
        end
    end
    else begin
        arvalid <= 0;
    end
end

always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_IDLE)begin
        arvalid_delay_cnt <= random_delay;
    end
end

//rready_delay
always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_RDATA && rready_delay_cnt != 0 )begin
        rready_delay_cnt <= rready_delay_cnt - 1;
        rvalid_prev <= 'd0;
    end
    else if(state == ysyx_24120011_IFU_M_AXI_RDATA && rready_delay_cnt == 0)begin
        if(rvalid && !rvalid_prev) begin
            rready <= 1;
        end
        else begin
            rready <= 0;
        end
        rvalid_prev <= rvalid;
    end
    else begin
        rready <= 0;
        rvalid_prev <= 'd0;
    end
end

always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_RADDR)begin
        rready_delay_cnt <= random_delay;
    end
end





// always@(posedge clk)begin
//     if(rst) begin
//         start_read_delay <= 0;
//     end
//     else begin
//         start_read_delay <= LSU_ready;
//     end
// end

always@(*)begin
    case(state)
        ysyx_24120011_IFU_M_AXI_IDLE: next_state = (LSU_ready && EXU_ready) ? ysyx_24120011_IFU_M_AXI_RADDR : ysyx_24120011_IFU_M_AXI_IDLE;
        ysyx_24120011_IFU_M_AXI_RADDR: if (arvalid && arready) next_state = ysyx_24120011_IFU_M_AXI_RDATA;
        ysyx_24120011_IFU_M_AXI_RDATA: if (rvalid  && rready ) next_state = ysyx_24120011_IFU_M_AXI_IDLE;
        default : next_state = ysyx_24120011_IFU_M_AXI_IDLE;
    endcase
end

always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_IFU_M_AXI_IDLE;
        LSFR_in <= 8'h01;
    end
    else begin
        state <= next_state;
    end
end

/* verilator lint_on LATCH */
endmodule