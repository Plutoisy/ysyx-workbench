module ysyx_24120011_IFU(
    input clk,
    input rst,
    input [31:0] pc,
    output [31:0] inst,
    output IFU_valid,
    input LSU_ready,
    //============M0=============//        
    //AR
    input  [31:0]     M0_araddr,
    input             M0_arvalid,
    output            M0_arready,
    //R               
    output [31:0]     M0_rdata,
    output [1:0]      M0_rresp,
    output            M0_rvalid,
    input             M0_rready,
    //AW
    input  [31:0]     M0_awaddr,
    input             M0_awvalid,
    output            M0_awready,
    //W
    input  [31:0]     M0_wdata,
    input  [3:0]      M0_wstrb,
    input             M0_wvalid,
    output            M0_wready,
    //B
    output [1:0]      M0_bresp,
    output            M0_bvalid,
    input             M0_bready
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
assign M0_arready = arready ;
assign M0_rdata   = inst    ;
assign M0_rresp   = rresp   ;
assign M0_rvalid  = rvalid  ;
assign M0_rready  = rready  ;
assign M0_awaddr  = 32'b0   ;
assign M0_awvalid = 1'b0    ;
assign M0_awready = awready ;
assign M0_wdata   = 32'b0   ;
assign M0_wstrb   = 4'b1111 ;
assign M0_wvalid  = 1'b0    ;
assign M0_wready  = wready  ;
assign M0_bresp   = bresp   ;
assign M0_bvalid  = bvalid  ;
assign M0_bready  = 1'b1    ;

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

//arvalid_delay
always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_RADDR && arvalid_delay_cnt != 0 )begin
        arvalid_delay_cnt <= arvalid_delay_cnt - 1;
    end
    else if(state == ysyx_24120011_IFU_M_AXI_RADDR && arvalid_delay_cnt == 0)begin
        arvalid <= 1;
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
    end
end

always@(posedge clk)begin
    if(state == ysyx_24120011_IFU_M_AXI_RADDR)begin
        rready_delay_cnt <= random_delay;
    end
end





always@(posedge clk)begin
    if(rst) begin
        start_read_delay <= 0;
    end
    else begin
        start_read_delay <= LSU_ready;
    end
end

always@(*)begin
    case(state)
        ysyx_24120011_IFU_M_AXI_IDLE: next_state = (start_read_delay) ? ysyx_24120011_IFU_M_AXI_RADDR : ysyx_24120011_IFU_M_AXI_IDLE;
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