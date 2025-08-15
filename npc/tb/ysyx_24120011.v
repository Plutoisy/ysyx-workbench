
module ysyx_24120011_Xbar(
    input clk,
    input rst,
    input  [31:0]     Xbar_araddr,
    input             Xbar_arvalid,
    output            Xbar_arready,
    input  [3:0]      Xbar_arid,
    input  [7:0]      Xbar_arlen,
    input  [2:0]      Xbar_arsize,
    input  [1:0]      Xbar_arburst,
    output [31:0]     Xbar_rdata,
    output [1:0]      Xbar_rresp,
    output            Xbar_rvalid,
    input             Xbar_rready,
    output            Xbar_rlast,
    output [3:0]      Xbar_rid,
    input  [31:0]     Xbar_awaddr,
    input             Xbar_awvalid,
    output            Xbar_awready,
    input  [3:0]      Xbar_awid,
    input  [7:0]      Xbar_awlen,
    input  [2:0]      Xbar_awsize,
    input  [1:0]      Xbar_awburst,
    input  [31:0]     Xbar_wdata,
    input  [3:0]      Xbar_wstrb,
    input             Xbar_wvalid,
    output            Xbar_wready,
    input             Xbar_wlast,
    output [1:0]      Xbar_bresp,
    output            Xbar_bvalid,
    input             Xbar_bready,
    output [3:0]	  Xbar_bid,
    output  [31:0]     Xbar_S0_araddr,
    output             Xbar_S0_arvalid,
    input              Xbar_S0_arready,
    output  [3:0]      Xbar_S0_arid,
    output  [7:0]      Xbar_S0_arlen,
    output  [2:0]      Xbar_S0_arsize,
    output  [1:0]      Xbar_S0_arburst,
    input   [31:0]     Xbar_S0_rdata,
    input   [1:0]      Xbar_S0_rresp,
    input              Xbar_S0_rvalid,
    output             Xbar_S0_rready,
    input              Xbar_S0_rlast,
    input   [3:0]      Xbar_S0_rid,
    output  [31:0]     Xbar_S0_awaddr,
    output             Xbar_S0_awvalid,
    input              Xbar_S0_awready,
    output  [3:0]      Xbar_S0_awid,
    output  [7:0]      Xbar_S0_awlen,
    output  [2:0]      Xbar_S0_awsize,
    output  [1:0]      Xbar_S0_awburst,
    output  [31:0]     Xbar_S0_wdata,
    output  [3:0]      Xbar_S0_wstrb,
    output             Xbar_S0_wvalid,
    input              Xbar_S0_wready,
    output             Xbar_S0_wlast,
    input   [1:0]      Xbar_S0_bresp,
    input              Xbar_S0_bvalid,
    output             Xbar_S0_bready,
    input   [3:0]	   Xbar_S0_bid,
    output  [31:0]     Xbar_S1_araddr,
    output             Xbar_S1_arvalid,
    input              Xbar_S1_arready,
    output  [3:0]      Xbar_S1_arid,
    output  [7:0]      Xbar_S1_arlen,
    output  [2:0]      Xbar_S1_arsize,
    output  [1:0]      Xbar_S1_arburst,
    input   [31:0]     Xbar_S1_rdata,
    input   [1:0]      Xbar_S1_rresp,
    input              Xbar_S1_rvalid,
    output             Xbar_S1_rready,
    input              Xbar_S1_rlast,
    input   [3:0]      Xbar_S1_rid,
    output  [31:0]     Xbar_S1_awaddr,
    output             Xbar_S1_awvalid,
    input              Xbar_S1_awready,
    output  [3:0]      Xbar_S1_awid,
    output  [7:0]      Xbar_S1_awlen,
    output  [2:0]      Xbar_S1_awsize,
    output  [1:0]      Xbar_S1_awburst,
    output  [31:0]     Xbar_S1_wdata,
    output  [3:0]      Xbar_S1_wstrb,
    output             Xbar_S1_wvalid,
    input              Xbar_S1_wready,
    output             Xbar_S1_wlast,
    input   [1:0]      Xbar_S1_bresp,
    input              Xbar_S1_bvalid,
    output             Xbar_S1_bready,
    input   [3:0]	   Xbar_S1_bid
);
        parameter ysyx_24120011_Xbar_IDLE = 3'b000;
        parameter ysyx_24120011_Xbar_S0 = 3'b001;
        parameter ysyx_24120011_Xbar_S1 = 3'b010;
    reg [2:0] r_Xbar_state;
        reg [2:0] r_Xbar_next_state;
        reg [2:0] w_Xbar_state;
        reg [2:0] w_Xbar_next_state;
    reg [31:0] reg_Xbar_rdata     ;
        reg [1:0]  reg_Xbar_rresp     ;
        reg        reg_Xbar_rvalid    ;
        reg        reg_Xbar_awready   ;
        reg        reg_Xbar_wready    ;
        reg [1:0]  reg_Xbar_bresp     ;
        reg        reg_Xbar_bvalid    ;
        reg        reg_Xbar_arready   ;
        reg        reg_Xbar_rlast     ;
        reg [3:0]  reg_Xbar_rid       ;
        reg [3:0]  reg_Xbar_bid       ;
    reg [31:0] reg_Xbar_S0_araddr ;
        reg        reg_Xbar_S0_arvalid;
        reg        reg_Xbar_S0_rready ;
        reg [31:0] reg_Xbar_S0_awaddr ;
        reg        reg_Xbar_S0_awvalid;
        reg [31:0] reg_Xbar_S0_wdata  ;
        reg [3:0]  reg_Xbar_S0_wstrb  ;
        reg        reg_Xbar_S0_wvalid ;
        reg        reg_Xbar_S0_bready ;
        reg [3:0]  reg_Xbar_S0_arid   ;
        reg [7:0]  reg_Xbar_S0_arlen  ;
        reg [2:0]  reg_Xbar_S0_arsize ;
        reg [1:0]  reg_Xbar_S0_arburst;
        reg [3:0]  reg_Xbar_S0_awid   ;
        reg [7:0]  reg_Xbar_S0_awlen  ;
        reg [2:0]  reg_Xbar_S0_awsize ;
        reg [1:0]  reg_Xbar_S0_awburst;
        reg        reg_Xbar_S0_wlast  ;
    reg [31:0] reg_Xbar_S1_araddr ;
        reg        reg_Xbar_S1_arvalid;
        reg        reg_Xbar_S1_rready ;
        reg [31:0] reg_Xbar_S1_awaddr ;
        reg        reg_Xbar_S1_awvalid;
        reg [31:0] reg_Xbar_S1_wdata  ;
        reg [3:0]  reg_Xbar_S1_wstrb  ;
        reg        reg_Xbar_S1_wvalid ;
        reg        reg_Xbar_S1_bready ;
        reg [3:0]  reg_Xbar_S1_arid   ;
        reg [7:0]  reg_Xbar_S1_arlen  ;
        reg [2:0]  reg_Xbar_S1_arsize ;
        reg [1:0]  reg_Xbar_S1_arburst;
        reg [3:0]  reg_Xbar_S1_awid   ;
        reg [7:0]  reg_Xbar_S1_awlen  ;
        reg [2:0]  reg_Xbar_S1_awsize ;
        reg [1:0]  reg_Xbar_S1_awburst;
        reg        reg_Xbar_S1_wlast  ;
    wire read_S0_done;
        wire write_S0_done;
        wire read_S1_done;
        wire write_S1_done;
    assign read_S0_done = Xbar_S0_rlast && Xbar_S0_rready && Xbar_S0_rvalid;
    assign write_S0_done = Xbar_S0_bready && Xbar_S0_bvalid;
    assign read_S1_done = Xbar_S1_rlast && Xbar_S1_rready && Xbar_S1_rvalid;
    assign write_S1_done = Xbar_S1_bready && Xbar_S1_bvalid;
    assign Xbar_rdata      = reg_Xbar_rdata     ;
    assign Xbar_rresp      = reg_Xbar_rresp     ;
    assign Xbar_rvalid     = reg_Xbar_rvalid    ;
    assign Xbar_awready    = reg_Xbar_awready   ;
    assign Xbar_wready     = reg_Xbar_wready    ;
    assign Xbar_bresp      = reg_Xbar_bresp     ;
    assign Xbar_bvalid     = reg_Xbar_bvalid    ;
    assign Xbar_arready    = reg_Xbar_arready   ;
    assign Xbar_rlast      = reg_Xbar_rlast     ;
    assign Xbar_rid        = reg_Xbar_rid       ;
    assign Xbar_bid        = reg_Xbar_bid       ;
    assign Xbar_S0_araddr  = reg_Xbar_S0_araddr ;
    assign Xbar_S0_arvalid = reg_Xbar_S0_arvalid;
    assign Xbar_S0_rready  = reg_Xbar_S0_rready ;
    assign Xbar_S0_awaddr  = reg_Xbar_S0_awaddr ;
    assign Xbar_S0_awvalid = reg_Xbar_S0_awvalid;
    assign Xbar_S0_wdata   = reg_Xbar_S0_wdata  ;
    assign Xbar_S0_wstrb   = reg_Xbar_S0_wstrb  ;
    assign Xbar_S0_wvalid  = reg_Xbar_S0_wvalid ;
    assign Xbar_S0_bready  = reg_Xbar_S0_bready ;
    assign Xbar_S0_arid    = reg_Xbar_S0_arid   ;
    assign Xbar_S0_arlen   = reg_Xbar_S0_arlen  ;
    assign Xbar_S0_arsize  = reg_Xbar_S0_arsize ;
    assign Xbar_S0_arburst = reg_Xbar_S0_arburst;
    assign Xbar_S0_awid    = reg_Xbar_S0_awid   ;
    assign Xbar_S0_awlen   = reg_Xbar_S0_awlen  ;
    assign Xbar_S0_awsize  = reg_Xbar_S0_awsize ;
    assign Xbar_S0_awburst = reg_Xbar_S0_awburst;
    assign Xbar_S0_wlast   = reg_Xbar_S0_wlast  ;
    assign Xbar_S1_araddr  = reg_Xbar_S1_araddr ;
    assign Xbar_S1_arvalid = reg_Xbar_S1_arvalid;
    assign Xbar_S1_rready  = reg_Xbar_S1_rready ;
    assign Xbar_S1_awaddr  = reg_Xbar_S1_awaddr ;
    assign Xbar_S1_awvalid = reg_Xbar_S1_awvalid;
    assign Xbar_S1_wdata   = reg_Xbar_S1_wdata  ;
    assign Xbar_S1_wstrb   = reg_Xbar_S1_wstrb  ;
    assign Xbar_S1_wvalid  = reg_Xbar_S1_wvalid ;
    assign Xbar_S1_bready  = reg_Xbar_S1_bready ;
    assign Xbar_S1_arid    = reg_Xbar_S1_arid   ;
    assign Xbar_S1_arlen   = reg_Xbar_S1_arlen  ;
    assign Xbar_S1_arsize  = reg_Xbar_S1_arsize ;
    assign Xbar_S1_arburst = reg_Xbar_S1_arburst;
    assign Xbar_S1_awid    = reg_Xbar_S1_awid   ;
    assign Xbar_S1_awlen   = reg_Xbar_S1_awlen  ;
    assign Xbar_S1_awsize  = reg_Xbar_S1_awsize ;
    assign Xbar_S1_awburst = reg_Xbar_S1_awburst;
    assign Xbar_S1_wlast   = reg_Xbar_S1_wlast  ;
    always@(*) begin
        case(r_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                reg_Xbar_arready    = 'd0;
                reg_Xbar_rdata      = 'd0;
                reg_Xbar_rresp      = 'd0;
                reg_Xbar_rvalid     = 'd0;
                reg_Xbar_rlast      = 'd0;
                reg_Xbar_rid        = 'd0;
                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;
                reg_Xbar_S0_arid    = 'd0;
                reg_Xbar_S0_arlen   = 'd0;
                reg_Xbar_S0_arsize  = 'd0;
                reg_Xbar_S0_arburst = 'd0;
                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;
                reg_Xbar_S1_arid    = 'd0;
                reg_Xbar_S1_arlen   = 'd0;
                reg_Xbar_S1_arsize  = 'd0;
                reg_Xbar_S1_arburst = 'd0;
            end
            ysyx_24120011_Xbar_S0:begin
                reg_Xbar_arready    = Xbar_S0_arready;
                reg_Xbar_rdata      = Xbar_S0_rdata;
                reg_Xbar_rresp      = Xbar_S0_rresp;
                reg_Xbar_rvalid     = Xbar_S0_rvalid;
                reg_Xbar_rlast      = Xbar_S0_rlast;
                reg_Xbar_rid        = Xbar_S0_rid;
                reg_Xbar_S0_araddr  = Xbar_araddr ;
                reg_Xbar_S0_arvalid = Xbar_arvalid;
                reg_Xbar_S0_rready  = Xbar_rready ;
                reg_Xbar_S0_arid    = Xbar_arid   ;
                reg_Xbar_S0_arlen   = Xbar_arlen  ;
                reg_Xbar_S0_arsize  = Xbar_arsize ;
                reg_Xbar_S0_arburst = Xbar_arburst;
                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;
                reg_Xbar_S1_arid    = 'd0;
                reg_Xbar_S1_arlen   = 'd0;
                reg_Xbar_S1_arsize  = 'd0;
                reg_Xbar_S1_arburst = 'd0;
            end
            ysyx_24120011_Xbar_S1:begin
                reg_Xbar_arready    = Xbar_S1_arready;
                reg_Xbar_rdata      = Xbar_S1_rdata;
                reg_Xbar_rresp      = Xbar_S1_rresp;
                reg_Xbar_rvalid     = Xbar_S1_rvalid;
                reg_Xbar_rlast      = Xbar_S1_rlast;
                reg_Xbar_rid        = Xbar_S1_rid;
                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;
                reg_Xbar_S0_arid    = 'd0;
                reg_Xbar_S0_arlen   = 'd0;
                reg_Xbar_S0_arsize  = 'd0;
                reg_Xbar_S0_arburst = 'd0;
                reg_Xbar_S1_araddr  = Xbar_araddr ;
                reg_Xbar_S1_arvalid = Xbar_arvalid;
                reg_Xbar_S1_rready  = Xbar_rready ;
                reg_Xbar_S1_arid    = Xbar_arid   ;
                reg_Xbar_S1_arlen   = Xbar_arlen  ;
                reg_Xbar_S1_arsize  = Xbar_arsize ;
                reg_Xbar_S1_arburst = Xbar_arburst;
            end
            default:begin
                reg_Xbar_arready    = 'd0;
                reg_Xbar_rdata      = 'd0;
                reg_Xbar_rresp      = 'd0;
                reg_Xbar_rvalid     = 'd0;
                reg_Xbar_rlast      = 'd0;
                reg_Xbar_rid        = 'd0;
                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;
                reg_Xbar_S0_arid    = 'd0;
                reg_Xbar_S0_arlen   = 'd0;
                reg_Xbar_S0_arsize  = 'd0;
                reg_Xbar_S0_arburst = 'd0;
                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;
                reg_Xbar_S1_arid    = 'd0;
                reg_Xbar_S1_arlen   = 'd0;
                reg_Xbar_S1_arsize  = 'd0;
                reg_Xbar_S1_arburst = 'd0;
            end
        endcase
        case(w_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                reg_Xbar_awready    = 'd0;
                reg_Xbar_wready     = 'd0;
                reg_Xbar_bresp      = 'd0;
                reg_Xbar_bvalid     = 'd0;
                reg_Xbar_bid        = 'd0;
                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_bready  = 'd0;
                reg_Xbar_S0_awid    = 'd0;
                reg_Xbar_S0_awlen   = 'd0;
                reg_Xbar_S0_awsize  = 'd0;
                reg_Xbar_S0_awburst = 'd0;
                reg_Xbar_S0_wlast  = 'd0;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_bready  = 'd0;
                reg_Xbar_S1_awid    = 'd0;
                reg_Xbar_S1_awlen   = 'd0;
                reg_Xbar_S1_awsize  = 'd0;
                reg_Xbar_S1_awburst = 'd0;
                reg_Xbar_S1_wlast  = 'd0;
            end
            ysyx_24120011_Xbar_S0:begin
                reg_Xbar_awready    = Xbar_S0_awready;
                reg_Xbar_wready     = Xbar_S0_wready ;
                reg_Xbar_bresp      = Xbar_S0_bresp  ;
                reg_Xbar_bvalid     = Xbar_S0_bvalid ;
                reg_Xbar_bid        = Xbar_S0_bid    ;
                reg_Xbar_S0_wdata   = Xbar_wdata   ;
                reg_Xbar_S0_wstrb   = Xbar_wstrb   ;
                reg_Xbar_S0_wvalid  = Xbar_wvalid  ;
                reg_Xbar_S0_awaddr  = Xbar_awaddr  ;
                reg_Xbar_S0_awvalid = Xbar_awvalid ;
                reg_Xbar_S0_bready  = Xbar_bready  ;
                reg_Xbar_S0_awid    = Xbar_awid    ;
                reg_Xbar_S0_awlen   = Xbar_awlen   ;
                reg_Xbar_S0_awsize  = Xbar_awsize  ;
                reg_Xbar_S0_awburst = Xbar_awburst ;
                reg_Xbar_S0_wlast  = Xbar_wlast  ;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_bready  = 'd0;
                reg_Xbar_S1_awid    = 'd0;
                reg_Xbar_S1_awlen   = 'd0;
                reg_Xbar_S1_awsize  = 'd0;
                reg_Xbar_S1_awburst = 'd0;
                reg_Xbar_S1_wlast  = 'd0;
            end
            ysyx_24120011_Xbar_S1:begin
                reg_Xbar_awready    = Xbar_S1_awready;
                reg_Xbar_wready     = Xbar_S1_wready ;
                reg_Xbar_bresp      = Xbar_S1_bresp  ;
                reg_Xbar_bvalid     = Xbar_S1_bvalid ;
                reg_Xbar_bid        = Xbar_S1_bid    ;
                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_bready  = 'd0;
                reg_Xbar_S0_awid    = 'd0;
                reg_Xbar_S0_awlen   = 'd0;
                reg_Xbar_S0_awsize  = 'd0;
                reg_Xbar_S0_awburst = 'd0;
                reg_Xbar_S0_wlast  = 'd0;
                reg_Xbar_S1_wdata   = Xbar_wdata   ;
                reg_Xbar_S1_wstrb   = Xbar_wstrb   ;
                reg_Xbar_S1_wvalid  = Xbar_wvalid  ;
                reg_Xbar_S1_awaddr  = Xbar_awaddr  ;
                reg_Xbar_S1_awvalid = Xbar_awvalid ;
                reg_Xbar_S1_bready  = Xbar_bready  ;
                reg_Xbar_S1_awid    = Xbar_awid    ;
                reg_Xbar_S1_awlen   = Xbar_awlen   ;
                reg_Xbar_S1_awsize  = Xbar_awsize  ;
                reg_Xbar_S1_awburst = Xbar_awburst ;
                reg_Xbar_S1_wlast  = Xbar_wlast  ;
            end
            default:begin
                reg_Xbar_awready    = 'd0;
                reg_Xbar_wready     = 'd0;
                reg_Xbar_bresp      = 'd0;
                reg_Xbar_bvalid     = 'd0;
                reg_Xbar_bid        = 'd0;
                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_bready  = 'd0;
                reg_Xbar_S0_awid    = 'd0;
                reg_Xbar_S0_awlen   = 'd0;
                reg_Xbar_S0_awsize  = 'd0;
                reg_Xbar_S0_awburst = 'd0;
                reg_Xbar_S0_wlast  = 'd0;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_bready  = 'd0;
                reg_Xbar_S1_awid    = 'd0;
                reg_Xbar_S1_awlen   = 'd0;
                reg_Xbar_S1_awsize  = 'd0;
                reg_Xbar_S1_awburst = 'd0;
                reg_Xbar_S1_wlast  = 'd0;
            end
        endcase
    end
    always@(*) begin
        case(r_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                if(Xbar_arvalid) begin
                    if(Xbar_araddr == 32'h02000048 || Xbar_araddr == 32'h0200004c) begin
                        r_Xbar_next_state = ysyx_24120011_Xbar_S1;
                    end
                    else begin
                        r_Xbar_next_state = ysyx_24120011_Xbar_S0;
                    end
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
            end
            ysyx_24120011_Xbar_S0:begin
                if(read_S0_done)begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_S0;
                end
            end
            ysyx_24120011_Xbar_S1:begin
                if(read_S1_done)begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_S1;
                end
            end
            default: r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
        endcase
        case(w_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                if(Xbar_awvalid) begin
                        w_Xbar_next_state = ysyx_24120011_Xbar_S0;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
            end
            ysyx_24120011_Xbar_S0:begin
                if(write_S0_done)begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_S0;
                end
            end
            ysyx_24120011_Xbar_S1:begin
                if(write_S1_done)begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_S1;
                end
            end
            default: w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
        endcase
    end
    always@(posedge clk) begin
        if(rst) begin
            r_Xbar_state <= ysyx_24120011_Xbar_IDLE;
            w_Xbar_state <= ysyx_24120011_Xbar_IDLE;
        end
        else begin
            r_Xbar_state <= r_Xbar_next_state;
            w_Xbar_state <= w_Xbar_next_state;
        end
    end
endmodule
module ysyx_24120011_WBU(
    input  [3:0]  i_rd,
    input  [11:0] i_w_csr_addr,
    input [31:0] i_rd_data,
    input        i_rd_data_en,
    input [31:0] i_w_csr_data,
    input i_w_csr_en,
    input i_w_csr_ecall,
    output [3:0]   o_rd,
    output [31:0]  o_rd_data,
    output         o_rd_en,
    output [11:0]  o_w_csr_addr,
    output [31:0]  o_w_csr_data,
    output         o_w_csr_en,
    output         o_w_csr_ecall,
    input  i_MEM_valid,
    output o_WBU_ready
);
assign o_rd = i_rd;
assign o_rd_data = i_rd_data;
assign o_rd_en = i_rd_data_en;
assign o_w_csr_addr = i_w_csr_addr;
assign o_w_csr_data = i_w_csr_data;
assign o_w_csr_en = i_w_csr_en;
assign o_w_csr_ecall = i_w_csr_ecall;
assign o_WBU_ready = 1'b1;
endmodule
module ysyx_24120011_IDU (
    input  clk,
    input  rst,
    input  [31:0] i_pc,
    input  [31:0] i_inst,
    output [2:0]  o_pc_ctrl,
    output [2:0]  o_rd_ctrl,
    output [5:0]  o_ALU_ctrl,
    output [6:0] o_mem_ctrl,
    output [2:0]  o_csr_ctrl,
    output [31:0] o_pc,
    output [31:0] o_src1,
    output [31:0] o_src2,
    output [31:0] o_r_csr_data,
    output [31:0] o_imm,
    output [3:0]  o_rd,
    output [11:0] o_w_csr_addr,
    input  i_IFU_valid,
    output o_IDU_ready,
    input  i_EXU_ready,
    output o_IDU_valid,
    output [3:0]  o_rs1,
    output [3:0]  o_rs2,
    input  [31:0] i_src1,
    input  [31:0] i_src2,
    output [11:0] o_r_csr_addr,
    input  [31:0] i_r_csr_data,
    input i_stop_pipe,
    input [31:0] i_rd_data,
    input i_rs1_or_rs2,
    input i_bypass,
    input i_flush
);
parameter ysyx_24120011_IDU_IDLE_EMPTY = 2'd0;
    parameter ysyx_24120011_IDU_IDLE_FULL  = 2'd1;
    parameter ysyx_24120011_IDU_WORKING    = 2'd2;
reg [31:0] inst;
    reg [31:0] pc;
    reg [1:0] state;
    reg [1:0] next_state;
    wire a;
    wire b;
    wire [6:0]  opcode;
    wire [3:0]  rd    ;
    wire [3:0]  rs1   ;
    wire [3:0]  rs2   ;
    wire [2:0]  func3 ;
    wire [6:0]  func7 ;
    reg  [2:0]  opcode_type;
    reg  [31:0] imm;
    reg  [2:0]  pc_ctrl;
    reg  [2:0]  rd_ctrl;
    reg  [5:0]  ALU_ctrl;
    reg  [6:0] mem_ctrl;
    reg  [11:0] r_csr_addr;
    reg  [11:0] w_csr_addr;
    reg  [2:0]  csr_ctrl;
assign o_IDU_ready  = (state == ysyx_24120011_IDU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_IDU_valid  = !i_flush && (state == ysyx_24120011_IDU_IDLE_FULL && next_state == ysyx_24120011_IDU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_rs1        = rs1;
assign o_rs2        = rs2;
assign o_r_csr_addr = r_csr_addr;
assign o_pc_ctrl    = pc_ctrl;
assign o_rd_ctrl    = rd_ctrl;
assign o_ALU_ctrl   = ALU_ctrl;
assign o_mem_ctrl   = mem_ctrl;
assign o_csr_ctrl   = csr_ctrl;
assign o_pc         = pc;
assign o_src1       = !i_bypass ? i_src1 :((!i_rs1_or_rs2) ? i_rd_data : i_src1);
assign o_src2       = !i_bypass ? i_src2 :((i_rs1_or_rs2) ? i_rd_data : i_src2);
assign o_r_csr_data = i_r_csr_data;
assign o_imm        = imm;
assign o_rd         = rd;
assign o_w_csr_addr = w_csr_addr;
always @(posedge clk) begin
        if(i_IFU_valid && o_IDU_ready) begin
            inst <= i_inst;
            pc   <= i_pc;
        end
end
assign a = i_stop_pipe && (state == ysyx_24120011_IDU_IDLE_FULL);
assign b = i_bypass && o_IDU_valid;
always@(*)begin
    case(state)
        ysyx_24120011_IDU_IDLE_EMPTY : next_state = (!i_flush && i_IFU_valid && o_IDU_ready) ? ysyx_24120011_IDU_IDLE_FULL : ysyx_24120011_IDU_IDLE_EMPTY;
        ysyx_24120011_IDU_IDLE_FULL  : next_state = (i_flush || (!i_stop_pipe && i_EXU_ready)) ? ysyx_24120011_IDU_IDLE_EMPTY : ysyx_24120011_IDU_IDLE_FULL;
        ysyx_24120011_IDU_WORKING    : next_state = ysyx_24120011_IDU_IDLE_EMPTY;
        default                      : next_state = ysyx_24120011_IDU_IDLE_EMPTY;
    endcase
end
always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_IDU_IDLE_EMPTY;
    end
    else begin
        state <= next_state;
    end
end
assign opcode   = inst[6:0];
assign rd       = inst[10:7];
assign rs1      = inst[18:15];
assign rs2      = inst[23:20];
assign func3    = inst[14:12];
assign func7    = inst[31:25];
always@(*)begin
    case(opcode) 
        7'b0010011:opcode_type = 3'd0;
        7'b1100111:opcode_type = 3'd0;
        7'b0000011:opcode_type = 3'd0;
        7'b1110011:opcode_type = 3'd0;
        7'b0010111:opcode_type = 3'd1;
        7'b0110111:opcode_type = 3'd1;
        7'b1101111:opcode_type = 3'd2;
        7'b0100011:opcode_type = 3'd3;
        7'b0110011:opcode_type = 3'd4;
        7'b1100011:opcode_type = 3'd5;
        default   :opcode_type = 3'd7;
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd0      : imm = {{20{inst[31]}},inst[31:20]};
        3'd1      : imm = {inst[31:12],12'b0};
        3'd2      : imm = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
        3'd3      : imm = {{20{inst[31]}},inst[31:25],inst[11:7]};
        3'd5      : imm = {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
        default   : imm = 32'h0000_0000;
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd0:begin 
            if(opcode == 7'b1100111 && func3 == 3'b000)begin
                 pc_ctrl = 3'd2;
            end
            else if(inst == 32'b00110000001000000000000001110011)begin
                 pc_ctrl = 3'd3;
            end
            else if(inst == 32'b00000000000000000000000001110011)begin
                 pc_ctrl = 3'd3;
            end
            else begin
                 pc_ctrl = 3'd0;
            end
        end
        3'd2:    pc_ctrl = 3'd1;
        3'd3:    pc_ctrl = 3'd0;
        3'd4:    pc_ctrl = 3'd0;
        3'd5:    pc_ctrl = 3'd4;
        default: pc_ctrl = 3'd0;
    endcase
end
always@(*)begin
    if(rd == 4'b0000) begin
        rd_ctrl = 3'd4;
    end
    else begin
        case(opcode_type)
            3'd0:begin 
                if(opcode == 7'b1100111 && func3 == 3'b000)begin
                    rd_ctrl = 3'd0;
                end
                else if(opcode == 7'b0000011)begin
                    rd_ctrl = 3'd5;
                end
                else if(opcode == 7'b1110011 && func3 == 3'b001)begin
                    rd_ctrl = 3'd6;
                end
                else if(opcode == 7'b1110011 && func3 == 3'b010)begin
                    rd_ctrl = 3'd6;
                end
                else begin
                    rd_ctrl = 3'd2;
                end
            end
            3'd1:begin 
                if(opcode == 7'b0010111)begin
                    rd_ctrl = 3'd1;
                end
                else if(opcode == 7'b0110111)begin
                    rd_ctrl = 3'd3;
                end
                else begin
                    rd_ctrl = 3'd0;
                end
            end
            3'd2:    rd_ctrl = 3'd0;
            3'd3:    rd_ctrl = 3'd4;
            3'd4:    rd_ctrl = 3'd2;
            3'd5:    rd_ctrl = 3'd4;
            default: rd_ctrl = 3'd0;
        endcase
    end
end
always@(*)begin
    case(opcode_type)
        3'd0:begin
            if(opcode == 7'b1110011 && func3 == 3'b010)begin
                ALU_ctrl[5:4] = 2'd2;
            end
            else begin
                ALU_ctrl[5:4] = 2'd0;
            end
        end
        3'd3:    ALU_ctrl[5:4] = 2'd0;
        3'd4:    ALU_ctrl[5:4] = 2'd1;
        3'd5:    ALU_ctrl[5:4] = 2'd1;
        default: ALU_ctrl[5:4] = 2'd1;
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd0:begin
            if(func3 == 3'b000 && opcode == 7'b0010011)begin
                ALU_ctrl[3:0] = 4'b0000;
            end
            else if(func3 == 3'b011 && opcode == 7'b0010011)begin
                ALU_ctrl[3:0] = 4'b1011;
            end
            else if(func3 == 3'b111 && opcode == 7'b0010011)begin
                ALU_ctrl[3:0] = 4'b1101;
            end
            else if(func3 == 3'b100 && opcode == 7'b0010011)begin
                ALU_ctrl[3:0] = 4'b0010;
            end
            else if(func3 == 3'b110 && opcode == 7'b0010011)begin
                ALU_ctrl[3:0] = 4'b0101;
            end
            else if(func3 == 3'b101 && opcode == 7'b0010011 && func7 == 7'b0100000)begin
                ALU_ctrl[3:0] = 4'b1100;
            end
            else if(func3 == 3'b101 && opcode == 7'b0010011 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0100;
            end
            else if(func3 == 3'b001 && opcode == 7'b0010011 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0110;
            end
            else if(opcode == 7'b1110011 && func3 == 3'b010)begin
                ALU_ctrl[3:0] = 4'b0101;
            end
            else begin
                ALU_ctrl[3:0] = 4'b0000;
            end
        end
        3'd3:   ALU_ctrl[3:0] = 4'd0;
        3'd4:begin
            if(func3 == 3'b000 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0000;
            end
            else if(func3 == 3'b000 && func7 == 7'b0100000)begin
                ALU_ctrl[3:0] = 4'b0001;
            end
            else if(func3 == 3'b011 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b1011;
            end
            else if(func3 == 3'b010 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0011;
            end
            else if(func3 == 3'b100 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0010;
            end
            else if(func3 == 3'b001 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0110;
            end
            else if(func3 == 3'b111 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b1101;
            end
            else if(func3 == 3'b101 && func7 == 7'b0100000)begin
                ALU_ctrl[3:0] = 4'b1100;
            end
            else if(func3 == 3'b110 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0101;
            end
            else if(func3 == 3'b101 && func7 == 7'b0000000)begin
                ALU_ctrl[3:0] = 4'b0100;
            end
            else begin
                ALU_ctrl[3:0] = 4'b0000;
            end
        end
        3'd5:begin
            if(func3 == 3'b000)begin
                ALU_ctrl[3:0] = 4'b1000;
            end
            else if(func3 == 3'b001)begin
                ALU_ctrl[3:0] = 4'b1001;
            end
            else if(func3 == 3'b101)begin
                ALU_ctrl[3:0] = 4'b0111;
            end
            else if(func3 == 3'b111)begin
                ALU_ctrl[3:0] = 4'b1111;
            end
            else if(func3 == 3'b100)begin
                ALU_ctrl[3:0] = 4'b0011;
            end
            else if(func3 == 3'b110)begin
                ALU_ctrl[3:0] = 4'b1011;
            end
            else begin
                ALU_ctrl[3:0] = 4'b0000;
            end
        end
        default: ALU_ctrl[3:0] = 4'd0;
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd3:begin 
            mem_ctrl[2] = 1'd1;
            if(func3 == 3'b000)begin
                 mem_ctrl[1:0] = 2'd0;
            end
            else if(func3 == 3'b001)begin
                 mem_ctrl[1:0] = 2'd1;
            end
            else if(func3 == 3'b010)begin
                 mem_ctrl[1:0] = 2'd2;
            end
            else begin
                 mem_ctrl[1:0] = 2'd0;
            end
        end
        default: begin 
            mem_ctrl[2] = 1'd0;
            mem_ctrl[1:0] = 2'd0;
        end
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd0:begin 
            if(opcode == 7'b0000011)begin
                mem_ctrl[5] = 1'd1;
                if(func3 == 3'b000)begin
                    mem_ctrl[4:3] = 2'd0;
                    mem_ctrl[6] = 1'd1;
                end
                else if(func3 == 3'b001)begin
                    mem_ctrl[4:3] = 2'd1;
                    mem_ctrl[6] = 1'd1;
                end
                else if(func3 == 3'b010)begin
                    mem_ctrl[4:3] = 2'd2;
                    mem_ctrl[6] = 1'd1;
                end
                else if(func3 == 3'b100)begin
                    mem_ctrl[4:3] = 2'd0;
                    mem_ctrl[6] = 1'd0;
                end
                else if(func3 == 3'b101)begin
                    mem_ctrl[4:3] = 2'd1;
                    mem_ctrl[6] = 1'd0;
                end
                else begin
                    mem_ctrl[4:3] = 2'd0;
                    mem_ctrl[6] = 1'd0;
                end
            end
            else begin
                mem_ctrl[5] = 1'd0;
                mem_ctrl[4:3] = 2'd0;
                mem_ctrl[6] = 1'd0;
            end
        end
        default: begin 
            mem_ctrl[5] = 1'd0;
            mem_ctrl[4:3] = 2'd0;
            mem_ctrl[6] = 1'd0;
        end
    endcase
end
always@(*)begin
    case(opcode_type)
        3'd0:begin 
            if(inst == 32'b00110000001000000000000001110011)begin
                r_csr_addr  = 12'h341;
                w_csr_addr  = 12'b0;
                csr_ctrl    = {1'b0,2'd0};
            end
            else if(inst == 32'b00000000000000000000000001110011)begin
                r_csr_addr  = 12'h305;
                w_csr_addr  = 12'h341;
                csr_ctrl    = {1'b1,2'd3};
            end
            else if(opcode == 7'b1110011 && func3 == 3'b001)begin
                r_csr_addr  = imm[11:0];
                w_csr_addr  = imm[11:0];
                csr_ctrl    = {1'b0,2'd1};
            end
            else if(opcode == 7'b1110011 && func3 == 3'b010)begin
                r_csr_addr  = imm[11:0];
                w_csr_addr  = imm[11:0];
                csr_ctrl    = {1'b0,2'd2};
            end
            else begin
                r_csr_addr  = 12'b0;
                w_csr_addr  = 12'b0;
                csr_ctrl    = {1'b0,2'd0};
            end
        end
        default: begin 
            r_csr_addr  = 12'b0;
            w_csr_addr  = 12'b0;
            csr_ctrl    = {1'b0,2'd0};
        end
    endcase
end
endmodule

module ysyx_24120011_GPR(
    input clk,
    input rst,
    input  [3:0]   i_rs1,
    input  [3:0]   i_rs2,
    output [31:0]  o_src1,
    output [31:0]  o_src2,
    input  [3:0]   i_rd,
    input  [31:0]  i_rd_data,
    input          i_rd_en,
    output [31:0] a0
);
reg [31:0] GPRs [15:0];
assign o_src1 = GPRs[i_rs1];
assign o_src2 = GPRs[i_rs2];
assign a0     = GPRs[10];
always@(posedge clk)begin
    if(rst)begin
         GPRs[0]  <= 32'h0000_0000;
    end
    else begin
        if(i_rd_en)begin
            if (i_rd == 'd0) begin
                GPRs[0]  <= 32'h0000_0000;
            end else begin
                GPRs[i_rd] <= i_rd_data;
            end
        end
    end
end
endmodule


module ysyx_24120011_EXU (
    input  clk,
    input  rst,
    input  [2:0]  i_pc_ctrl,
    input  [2:0]  i_rd_ctrl,
    input  [5:0]  i_ALU_ctrl,
    input  [6:0] i_mem_ctrl,
    input  [2:0]  i_csr_ctrl,
    input  [31:0] i_pc,
    input  [31:0] i_src1,
    input  [31:0] i_src2,
    input  [31:0] i_r_csr_data,
    input  [31:0] i_imm,
    input  [3:0]  i_rd,
    input  [11:0] i_w_csr_addr,
    output [6:0] o_mem_ctrl,
    output [31:0] o_src2,
    output [3:0]  o_rd,
    output [11:0] o_w_csr_addr,
    output [31:0] o_ALU_result,
    output [31:0] o_rd_data,
    output [1:0]  o_rd_data_type,
    output [31:0] o_w_csr_data,
    output o_w_csr_en,
    output o_w_csr_ecall,
    output [31:0] o_npc,
    input  i_IDU_valid,
    output o_EXU_ready,
    input  i_MEM_ready,
    output o_EXU_valid,
    output o_flush,
    input [31:0] i_IFU_pc,
    input  i_IDU_empty
);
    parameter ysyx_24120011_EXU_IDLE_EMPTY = 2'd0;
    parameter ysyx_24120011_EXU_IDLE_FULL  = 2'd1;
    parameter ysyx_24120011_EXU_WORKING    = 2'd2;
reg [2:0]  pc_ctrl;
    reg [2:0]  rd_ctrl;
    reg [5:0]  ALU_ctrl;
    reg [6:0] mem_ctrl;
    reg [2:0]  csr_ctrl;
    reg [31:0] pc;
    reg [31:0] src1;
    reg [31:0] src2;
    reg [31:0] r_csr_data;
    reg [31:0] imm;
    reg [3:0]  rd;
    reg [11:0] w_csr_addr;
reg [1:0] state;
    reg [1:0] next_state;
    reg flush;
    wire [31:0] A;
    reg  [31:0] B;
    reg  [31:0] ALU_result;
    wire [31:0] B_in;
    wire [31:0] B_in_used_for_overflow;
    wire [31:0] ALUout_tmp;
    wire carry;
    wire overflow;
    wire uless;
    wire sless;
    wire a_is_b;
    wire a_not_b;
    reg  [31:0] npc;
    reg [31:0] rd_data;
    reg [31:0] w_csr_data;
assign o_flush = flush;
always @(posedge clk) begin
    if(o_EXU_valid) begin
        if (i_IDU_empty) begin
            if (i_IFU_pc != npc) begin
                flush <= 1'b1;
            end else begin
                flush <= 1'b0;
            end
        end else begin
            if (i_pc != npc) begin
                flush <= 1'b1;
            end else begin
                flush <= 1'b0;
            end
        end
    end
    else begin
        flush <= 1'b0;
    end
end
assign o_EXU_ready  = (state == ysyx_24120011_EXU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_EXU_valid  = (state == ysyx_24120011_EXU_IDLE_FULL && next_state == ysyx_24120011_EXU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_mem_ctrl   = mem_ctrl    ;
assign o_src2       = src2        ;
assign o_rd         = rd          ;
assign o_w_csr_addr = w_csr_addr  ;
assign o_ALU_result = ALU_result  ;
assign o_npc        = npc         ;
assign o_rd_data    = rd_data     ;
assign o_w_csr_data = w_csr_data  ;
always @(posedge clk) begin
        if(i_IDU_valid && o_EXU_ready) begin
            pc_ctrl    <=  i_pc_ctrl   ;
            rd_ctrl    <=  i_rd_ctrl   ;
            ALU_ctrl   <=  i_ALU_ctrl  ;
            mem_ctrl   <=  i_mem_ctrl  ;
            csr_ctrl   <=  i_csr_ctrl  ;
            pc         <=  i_pc        ;
            src1       <=  i_src1      ;
            src2       <=  i_src2      ;
            r_csr_data <=  i_r_csr_data;
            imm        <=  i_imm       ;
            rd         <=  i_rd        ;
            w_csr_addr <=  i_w_csr_addr;
        end
end
always@(*)begin
    case(state)
        ysyx_24120011_EXU_IDLE_EMPTY : next_state = (i_IDU_valid && o_EXU_ready) ? ysyx_24120011_EXU_IDLE_FULL : ysyx_24120011_EXU_IDLE_EMPTY;
        ysyx_24120011_EXU_IDLE_FULL  : next_state = (i_MEM_ready) ? ysyx_24120011_EXU_IDLE_EMPTY : ysyx_24120011_EXU_IDLE_FULL;
        ysyx_24120011_EXU_WORKING    : next_state = ysyx_24120011_EXU_IDLE_EMPTY;
        default                      : next_state = ysyx_24120011_EXU_IDLE_EMPTY;
    endcase
end
always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_EXU_IDLE_EMPTY;
    end
    else begin
        state <= next_state;
    end
end
assign A = src1;
always@(*)begin
    case(ALU_ctrl[5:4])
        2'd0: B = imm;
        2'd1: B = src2;
        2'd2: B = r_csr_data;
        default: B = 32'b0;
    endcase
end
assign B_in = ALU_ctrl[0] ? ((B^{32{ALU_ctrl[0]}}) + 1'b1) : B;
assign B_in_used_for_overflow = ALU_ctrl[0] ? B^{32{ALU_ctrl[0]}} : B;
assign uless = ~carry;
assign sless = ALUout_tmp[31] ^ overflow;
assign overflow = (A[31]==B_in_used_for_overflow[31]) && (A[31]!=ALUout_tmp[31]);
assign a_is_b  = A == B ? 1 : 0;
assign a_not_b = A != B ? 1 : 0;
assign {carry, ALUout_tmp} = A + B_in;
always @(*) begin
    case (ALU_ctrl[3:0])
        4'b1000: ALU_result = {31'b0, a_is_b};
        4'b1001: ALU_result = {31'b0, a_not_b};
        4'b0011: ALU_result = {31'b0, sless};
        4'b1011: ALU_result = (B == 32'b0) ? 32'b0 : {31'b0, uless};
        4'b0111: ALU_result = {31'b0, ~sless};
        4'b1111: ALU_result = (B == 32'b0) ? 32'h1 : {31'b0, ~uless};
        4'b0010: ALU_result = A ^ B;
        4'b0100: ALU_result = A >> B[4:0]; 
        4'b1100: ALU_result = (B[4:0] == 0) ? A :  (A >> B[4:0]) | ({32{A[31]}} << (32-B[4:0]));
        4'b0101: ALU_result = A | B;
        4'b1101: ALU_result = A & B;
        4'b0110: ALU_result = A << B[4:0]; 
        default: ALU_result = ALUout_tmp;
    endcase
end
always@(*)begin
    case(pc_ctrl)
        3'd0: npc = pc + 32'd4;
        3'd1: npc = pc + imm;
        3'd2: npc = ALU_result;
        3'd3: npc = r_csr_data;
        3'd4: begin
            if(ALU_result[0] == 1'b1)begin
                npc = pc + imm;
            end
            else begin
                npc = pc + 32'd4;
            end
        end
        default: npc = 32'h8000_0000;
    endcase
end
assign o_rd_data_type = (rd_ctrl == 3'd4) ? 2'd0 : (rd_ctrl == 3'd5 ? 2'd1 : 2'd2);
always@(*)begin
    case(rd_ctrl)
        3'd0: rd_data = pc + 32'd4;
        3'd1: rd_data = pc + imm;
        3'd2: rd_data = ALU_result;
        3'd3: rd_data = imm;
        3'd4: rd_data = 32'h0000_0000;
        3'd5: rd_data = 32'h0000_0000;
        3'd6: rd_data = r_csr_data;
        default: rd_data = 32'h0000_0000;
    endcase
end
assign o_w_csr_en =  csr_ctrl[1:0] == 2'd0 ? 1'b0 : 1'b1;
assign o_w_csr_ecall =  csr_ctrl[2] == 1'd0 ? 1'b0 : 1'b1;
always@(*)begin
    case(csr_ctrl[1:0])
        2'd1:    w_csr_data = src1;
        2'd2:    w_csr_data = ALU_result;
        2'd3:    w_csr_data = pc;
        default: w_csr_data = 32'b0;
    endcase
end
endmodule

module ysyx_24120011_MEM(
    input clk,
    input rst,
    input [6:0]  i_mem_ctrl,
    input [31:0] i_src2,
    input [3:0]  i_rd,
    input [11:0] i_w_csr_addr,
    input [31:0] i_ALU_result,
    input [31:0] i_rd_data,
    input [1:0]  i_rd_data_type,
    input [31:0] i_w_csr_data,
    input i_w_csr_en,
    input i_w_csr_ecall,
    output [3:0]  o_rd,
    output [11:0] o_w_csr_addr,
    output [31:0] o_rd_data,
    output        o_rd_data_en,
    output [31:0] o_w_csr_data,
    output o_w_csr_en,
    output o_w_csr_ecall,
    output [1:0] o_rd_data_type,
    input  i_EXU_valid,
    output o_MEM_ready,
    input  i_WBU_ready,
    output o_MEM_valid,
    output  [31:0]     M1_araddr,
    output             M1_arvalid,
    input              M1_arready,
    output  [3:0]      M1_arid,
    output  [7:0]      M1_arlen,
    output  [2:0]      M1_arsize,
    output  [1:0]      M1_arburst,
    input   [31:0]     M1_rdata,
    input   [1:0]      M1_rresp,
    input              M1_rvalid,
    output             M1_rready,
    input              M1_rlast,
    input   [3:0]      M1_rid,
    output  [31:0]     M1_awaddr,
    output             M1_awvalid,
    input              M1_awready,
    output  [3:0]      M1_awid,
    output  [7:0]      M1_awlen,
    output  [2:0]      M1_awsize,
    output  [1:0]      M1_awburst,
    output  [31:0]     M1_wdata,
    output  [3:0]      M1_wstrb,
    output             M1_wvalid,
    input              M1_wready,
    output             M1_wlast,
    input   [1:0]      M1_bresp,
    input              M1_bvalid,
    output             M1_bready,
    input	[3:0]	   M1_bid
);
reg [6:0]  mem_ctrl;
    reg [31:0] src2;
    reg [3:0]  rd;
    reg [11:0] w_csr_addr;
    reg [31:0] ALU_result;
    reg [31:0] r_mem_data;
reg [31:0] rd_data;
    reg [1:0]  rd_data_type;
    reg [31:0] w_csr_data;
    reg w_csr_en;
    reg w_csr_ecall;
    parameter ysyx_24120011_LSU_M_AXI_IDLE_EMPTY = 3'b000;
        parameter ysyx_24120011_LSU_M_AXI_IDLE_FULL  = 3'b001;
        parameter ysyx_24120011_LSU_M_AXI_RWCHECK    = 3'b010;
        parameter ysyx_24120011_LSU_M_AXI_RADDR      = 3'b011;
        parameter ysyx_24120011_LSU_M_AXI_RDATA      = 3'b100;
        parameter ysyx_24120011_LSU_M_AXI_WADDR      = 3'b101;
        parameter ysyx_24120011_LSU_M_AXI_WDATA      = 3'b110;
        parameter ysyx_24120011_LSU_M_AXI_WRESP      = 3'b111;
        parameter ysyx_24120011_LSU_M_AXI_RESP_OKAY  = 2'b00;
    reg [2:0] state;
        reg [2:0] next_state;
    wire [31:0] araddr;
        reg arvalid;
        wire arready;
        reg rready;
        wire [1:0] rresp;
        wire rvalid;
        reg awvalid;
        wire awready;
        wire [31:0] awaddr;
        reg wvalid;
        wire wready;
        wire [31:0] wdata;
        wire [1:0] bresp;
        wire [3:0] wstrb;
        wire bready;
        wire [31:0] rdata;
        wire bvalid;
    reg [3:0] reg_wstrb;
        reg [31:0] reg_wdata;
        reg [5:0] wdata_format;
        reg [31:0] rdata_mask;
assign o_MEM_ready  = (state == ysyx_24120011_LSU_M_AXI_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_MEM_valid  = (state != ysyx_24120011_LSU_M_AXI_IDLE_EMPTY) && (next_state == ysyx_24120011_LSU_M_AXI_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign o_rd         = rd        ;
assign o_w_csr_addr = w_csr_addr;
assign  o_rd_data = rd_data_type == 2'd1 ? r_mem_data : rd_data;
assign  o_rd_data_en = (rd_data_type != 2'd0 && o_MEM_valid) ? 1'b1 : 1'b0;
assign  o_w_csr_data = w_csr_data;
assign  o_w_csr_en = w_csr_en;
assign  o_w_csr_ecall = w_csr_ecall;
assign o_rd_data_type = rd_data_type;
always @(posedge clk) begin
        if(i_EXU_valid && o_MEM_ready) begin
            mem_ctrl   <=  i_mem_ctrl  ;
            src2       <=  i_src2      ;
            rd         <=  i_rd        ;
            w_csr_addr <=  i_w_csr_addr;
            ALU_result <=  i_ALU_result;
            rd_data      <=  i_rd_data     ;
            rd_data_type <=  i_rd_data_type;
            w_csr_data   <=  i_w_csr_data  ;
            w_csr_en     <=  i_w_csr_en    ;
            w_csr_ecall  <=  i_w_csr_ecall ;
        end
end
    assign M1_araddr  = araddr    ;
    assign M1_arvalid = arvalid   ;
    assign arready    = M1_arready;
    assign rdata       = M1_rdata ;
    assign rresp      = M1_rresp  ;
    assign rvalid     = M1_rvalid ;
    assign M1_rready  = rready    ;
    assign M1_awaddr  = awaddr    ;
    assign M1_awvalid = awvalid   ;
    assign awready    = M1_awready;
    assign M1_wdata   = wdata     ;
    assign M1_wstrb   = wstrb     ;
    assign M1_wvalid  = wvalid    ;
    assign wready     = M1_wready ;
    assign bresp      = M1_bresp  ;
    assign bvalid     = M1_bvalid ;
    assign M1_bready  = bready    ;   
    assign M1_arid    = 'd0       ;
    assign M1_arlen   = 'd0       ;
    assign M1_arburst = 'd0       ;
    assign M1_arsize  = ~M1_arvalid ? 3'b010 : (
           ({3{mem_ctrl[4:3] == 2'd0}} & 3'b000) |
           ({3{mem_ctrl[4:3] == 2'd1}} & 3'b001) |
           ({3{mem_ctrl[4:3] == 2'd2}} & 3'b010) |
           (3'b000)
         );
    assign M1_awid    = 'd0       ;
    assign M1_awlen   = 'd0       ;
    assign M1_awburst = 'd0       ;
    assign M1_awsize  = ~M1_awvalid ? 3'b010 : (
           ({3{mem_ctrl[1:0] == 2'd0}} & 3'b000) |
           ({3{mem_ctrl[1:0] == 2'd1}} & 3'b001) |
           ({3{mem_ctrl[1:0] == 2'd2}} & 3'b010) |
           (3'b000)
         );
    assign M1_wlast   = M1_wvalid ;
    assign araddr = ALU_result;
    assign awaddr = ALU_result;
    assign wdata = reg_wdata; 
    assign wstrb = reg_wstrb;
    assign bready = (state == ysyx_24120011_LSU_M_AXI_WRESP || state == ysyx_24120011_LSU_M_AXI_WDATA) ? 1 : 0;
    always@(*)begin
        if(mem_ctrl[4:3] == 2'd0) begin
            if(araddr[1:0] == 2'd0)begin
                rdata_mask = {24'b0,rdata[7:0]};
            end
            else if(araddr[1:0] == 2'd1)begin
                rdata_mask = {24'b0,rdata[15:8]};
            end
            else if(araddr[1:0] == 2'd2)begin
                rdata_mask = {24'b0,rdata[23:16]};
            end
            else begin
                rdata_mask = {24'b0,rdata[31:24]};
            end
        end
        else if(mem_ctrl[4:3] == 2'd1)begin
            rdata_mask = rdata;
            if(araddr[1:0] == 2'd0)begin
                rdata_mask = {16'b0,rdata[15:0]};
            end
            else if(araddr[1:0] == 2'd1)begin
                rdata_mask = {16'b0,rdata[23:8]};
            end
            else if(araddr[1:0] == 2'd2)begin
                rdata_mask = {16'b0,rdata[31:16]};
            end
            else begin
                rdata_mask = 32'hdeadbeef;
            end
        end
        else if(mem_ctrl[4:3] == 2'd2) begin
            rdata_mask = rdata;
        end
        else begin
            rdata_mask = rdata;
        end
    end
    always@(*)begin
        case(wdata_format)
        'd0:reg_wdata = {24'b0,src2[7:0]};
        'd1:reg_wdata = {16'b0,src2[7:0],8'b0};
        'd2:reg_wdata = {8'b0,src2[7:0],16'b0};
        'd3:reg_wdata = {src2[7:0],24'b0};
        'd4:reg_wdata = {16'b0,src2[15:0]};
        'd5:reg_wdata = {8'b0,src2[15:0],8'b0};
        'd6:reg_wdata = {src2[15:0],16'b0};
        'd7:reg_wdata = src2;
        default:reg_wdata = 32'hdeadbeef;
        endcase
    end
    always@(*)begin
        if(mem_ctrl[1:0] == 2'd0) begin
            if(awaddr[1:0] == 2'd0)begin
                reg_wstrb = 4'b0001;
                wdata_format = 'd0;
            end
            else if(awaddr[1:0] == 2'd1)begin
                reg_wstrb = 4'b0010;
                wdata_format = 'd1;
            end
            else if(awaddr[1:0] == 2'd2)begin
                reg_wstrb = 4'b0100;
                wdata_format = 'd2;
            end
            else begin
                reg_wstrb = 4'b1000;
                wdata_format = 'd3;
            end
        end
        else if(mem_ctrl[1:0] == 2'd1)begin
            if(awaddr[1:0] == 2'd0)begin
                reg_wstrb = 4'b0011;
                wdata_format = 'd4;
            end
            else if(awaddr[1:0] == 2'd1)begin
                reg_wstrb = 4'b0110;
                wdata_format = 'd5;
            end
            else if(awaddr[1:0] == 2'd2)begin
                reg_wstrb = 4'b1100;
                wdata_format = 'd6;
            end
            else begin
                reg_wstrb = 4'b0000;
                wdata_format = 'd63;
            end
        end
        else if(mem_ctrl[1:0] == 2'd2) begin
            reg_wstrb = 4'b1111;
            wdata_format = 'd7;
        end
        else begin
            reg_wstrb = 4'b0000;
            wdata_format = 'd63;
        end
    end
    always@(posedge clk)begin
        if(state == ysyx_24120011_LSU_M_AXI_RADDR)begin
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
        if(state == ysyx_24120011_LSU_M_AXI_WADDR)begin
            if(awready)begin
                awvalid <= 0;
                wvalid <= 0;
            end
            else begin
                awvalid <= 1;
                wvalid <= 1;
            end
        end
        else begin
            awvalid <= 0;
            wvalid <= 0;
        end
    end
    always@(posedge clk)begin
        if(state == ysyx_24120011_LSU_M_AXI_RDATA)begin
            if(rvalid == 1) begin
                rready <= 1;
            end
            else begin
                rready <= 0;
            end
        end
        else begin
            rready <= 0;
        end
    end
    always@(posedge clk)begin
        if(rst) begin
            r_mem_data <= 32'b0;
        end
        else begin
            if(state == ysyx_24120011_LSU_M_AXI_RDATA) begin
                if(mem_ctrl[4:3] == 2'd0)begin
                    if(mem_ctrl[6])begin
                        r_mem_data <= {{24{rdata_mask[7]}},rdata_mask[7:0]};
                    end
                    else begin
                        r_mem_data <= {24'b0,rdata_mask[7:0]};
                    end
                end
                else if(mem_ctrl[4:3] == 2'd1)begin
                    if(mem_ctrl[6])begin
                        r_mem_data <= {{16{rdata_mask[15]}},rdata_mask[15:0]};
                    end
                    else begin
                        r_mem_data <= {16'b0,rdata_mask[15:0]};
                    end
                end
                else if(mem_ctrl[4:3] == 2'd2)begin
                    r_mem_data <= rdata_mask;
                end
                else begin
                    r_mem_data <= 32'b11111111;
                end
            end
        end
    end
    always@(*)begin
        case(state)
            ysyx_24120011_LSU_M_AXI_IDLE_EMPTY: next_state = (i_EXU_valid && o_MEM_ready) ? ysyx_24120011_LSU_M_AXI_IDLE_FULL : ysyx_24120011_LSU_M_AXI_IDLE_EMPTY;
            ysyx_24120011_LSU_M_AXI_IDLE_FULL : next_state = (i_WBU_ready) ? ysyx_24120011_LSU_M_AXI_RWCHECK : ysyx_24120011_LSU_M_AXI_IDLE_FULL;
            ysyx_24120011_LSU_M_AXI_RWCHECK   : next_state = (mem_ctrl[5]) ? 
                                                       ysyx_24120011_LSU_M_AXI_RADDR : 
                                                       ((mem_ctrl[2]) ? ysyx_24120011_LSU_M_AXI_WADDR : ysyx_24120011_LSU_M_AXI_IDLE_EMPTY);
            ysyx_24120011_LSU_M_AXI_RADDR     : next_state = (arvalid && arready) ? ysyx_24120011_LSU_M_AXI_RDATA      : ysyx_24120011_LSU_M_AXI_RADDR;
            ysyx_24120011_LSU_M_AXI_RDATA     : next_state = (rvalid  && rready ) ? ysyx_24120011_LSU_M_AXI_IDLE_EMPTY : ysyx_24120011_LSU_M_AXI_RDATA;
            ysyx_24120011_LSU_M_AXI_WADDR     : begin 
                if (wvalid  && wready ) begin 
                    next_state = ysyx_24120011_LSU_M_AXI_WRESP;
                end
                else begin
                    next_state = (awvalid && awready) ? ysyx_24120011_LSU_M_AXI_WDATA : ysyx_24120011_LSU_M_AXI_WADDR;
                end
            end
            ysyx_24120011_LSU_M_AXI_WDATA     : next_state = (wvalid  && wready )? ysyx_24120011_LSU_M_AXI_WRESP      : ysyx_24120011_LSU_M_AXI_WDATA;
            ysyx_24120011_LSU_M_AXI_WRESP     : next_state = (bvalid  && bready )? ysyx_24120011_LSU_M_AXI_IDLE_EMPTY : ysyx_24120011_LSU_M_AXI_WRESP;
            default                           : next_state = ysyx_24120011_LSU_M_AXI_IDLE_EMPTY;
        endcase
    end
    always@(posedge clk)begin
        if(rst) begin
            state <= ysyx_24120011_LSU_M_AXI_IDLE_EMPTY;
        end
        else begin
            state <= next_state;
        end
    end
endmodule

module ysyx_24120011_CSR(
    input clk,
    input rst,
    input  [11:0]  i_r_csr_addr,
    output [31:0]  o_r_csr_data,
    input  [11:0]  i_w_csr_addr,
    input  [31:0]  i_w_csr_data,
    input          i_w_csr_en,
    input          i_w_csr_ecall
);
reg [31:0] mepc;
    reg [31:0] mstatus;
    reg [31:0] mcause;
    reg [31:0] mtvec;
wire [31:0] mvendorid;
    wire [31:0] marchid;
reg [31:0] r_csr_data;
assign mvendorid = 32'h7973_7978;
assign marchid = 32'h0170_0ACB;
assign o_r_csr_data = r_csr_data;
always@(*)begin
    case(i_r_csr_addr)
        12'h341: r_csr_data = mepc;
        12'h300: r_csr_data = mstatus;
        12'h342: r_csr_data = mcause;
        12'h305: r_csr_data = mtvec;
        12'hf11: r_csr_data = mvendorid;
        12'hf12: r_csr_data = marchid;
        default: begin
            r_csr_data   =  32'b0;
        end
    endcase
end
always@(posedge clk)begin
        if(i_w_csr_en)begin
            case(i_w_csr_addr)
                12'h341: mepc     <= i_w_csr_data;
                12'h300: mstatus  <= i_w_csr_data;
                12'h342: mcause   <= i_w_csr_data;
                12'h305: mtvec    <= i_w_csr_data;
                default: begin
                    mepc      <=  mepc;     
                    mstatus   <=  mstatus;  
                    mcause    <=  mcause;   
                    mtvec     <=  mtvec;  
                end
            endcase
        end
        if(i_w_csr_ecall)begin 
            mcause       <=  32'h000b;
        end
end
endmodule

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
    wire  [31:0]     M0_araddr;
    wire             M0_arvalid;
    wire              M0_arready;
    wire  [3:0]      M0_arid;
    wire  [7:0]      M0_arlen;
    wire  [2:0]      M0_arsize;
    wire  [1:0]      M0_arburst;
    wire   [31:0]     M0_rdata;
    wire   [1:0]      M0_rresp;
    wire              M0_rvalid;
    wire             M0_rready;
    wire              M0_rlast;
    wire   [3:0]      M0_rid;
    wire  [31:0]     M0_awaddr;
    wire             M0_awvalid;
    wire              M0_awready;
    wire  [3:0]      M0_awid;
    wire  [7:0]      M0_awlen;
    wire  [2:0]      M0_awsize;
    wire  [1:0]      M0_awburst;
    wire  [31:0]     M0_wdata;
    wire  [3:0]      M0_wstrb;
    wire             M0_wvalid;
    wire              M0_wready;
    wire             M0_wlast;
    wire   [1:0]      M0_bresp;
    wire              M0_bvalid;
    wire             M0_bready;
    wire	[3:0]	   M0_bid;
    wire  [31:0]     M1_araddr;
    wire             M1_arvalid;
    wire              M1_arready;
    wire  [3:0]      M1_arid;
    wire  [7:0]      M1_arlen;
    wire  [2:0]      M1_arsize;
    wire  [1:0]      M1_arburst;
    wire   [31:0]     M1_rdata;
    wire   [1:0]      M1_rresp;
    wire              M1_rvalid;
    wire             M1_rready;
    wire              M1_rlast;
    wire   [3:0]      M1_rid;
    wire  [31:0]     M1_awaddr;
    wire             M1_awvalid;
    wire              M1_awready;
    wire  [3:0]      M1_awid;
    wire  [7:0]      M1_awlen;
    wire  [2:0]      M1_awsize;
    wire  [1:0]      M1_awburst;
    wire  [31:0]     M1_wdata;
    wire  [3:0]      M1_wstrb;
    wire             M1_wvalid;
    wire              M1_wready;
    wire             M1_wlast;
    wire   [1:0]      M1_bresp;
    wire              M1_bvalid;
    wire             M1_bready;
    wire	[3:0]	   M1_bid;
    wire  [31:0]     S0_araddr;
    wire             S0_arvalid;
    wire            S0_arready;
    wire  [3:0]      S0_arid;
    wire  [7:0]      S0_arlen;
    wire  [2:0]      S0_arsize;
    wire  [1:0]      S0_arburst;
    wire [31:0]     S0_rdata;
    wire [1:0]      S0_rresp;
    wire            S0_rvalid;
    wire             S0_rready;
    wire            S0_rlast;
    wire [3:0]      S0_rid;
    wire  [31:0]     S0_awaddr;
    wire             S0_awvalid;
    wire            S0_awready;
    wire  [3:0]      S0_awid;
    wire  [7:0]      S0_awlen;
    wire  [2:0]      S0_awsize;
    wire  [1:0]      S0_awburst;
    wire  [31:0]     S0_wdata;
    wire  [3:0]      S0_wstrb;
    wire             S0_wvalid;
    wire            S0_wready;
    wire             S0_wlast;
    wire [1:0]      S0_bresp;
    wire            S0_bvalid;
    wire             S0_bready;
    wire [3:0]	  S0_bid;
    wire  [31:0]     clint_araddr;
    wire             clint_arvalid;
    wire            clint_arready;
    wire  [3:0]      clint_arid;
    wire  [7:0]      clint_arlen;
    wire  [2:0]      clint_arsize;
    wire  [1:0]      clint_arburst;
    wire [31:0]     clint_rdata;
    wire [1:0]      clint_rresp;
    wire            clint_rvalid;
    wire             clint_rready;
    wire            clint_rlast;
    wire [3:0]      clint_rid;
    wire  [31:0]     clint_awaddr;
    wire             clint_awvalid;
    wire            clint_awready;
    wire  [3:0]      clint_awid;
    wire  [7:0]      clint_awlen;
    wire  [2:0]      clint_awsize;
    wire  [1:0]      clint_awburst;
    wire  [31:0]     clint_wdata;
    wire  [3:0]      clint_wstrb;
    wire             clint_wvalid;
    wire            clint_wready;
    wire             clint_wlast;
    wire [1:0]      clint_bresp;
    wire            clint_bvalid;
    wire             clint_bready;
    wire [3:0]	  clint_bid;
    wire [31:0] EXU_IFU_npc;
    wire [31:0] PC_IFU_pc;
    wire EXU_valid;
    wire PC_ready;
    wire IFU_ready;
    wire PC_valid;
    wire [31:0] IFU_IDU_pc;
    wire [31:0] IFU_IDU_inst;
    wire IFID_ready;
    wire IFU_valid;
    wire flush;
    wire [31:0] IFID_IDU_pc;
    wire [31:0] IFID_IDU_inst;
    wire IDU_ready;
    wire IFID_valid;
wire [2:0]  IDU_EXU_pc_ctrl;
    wire [2:0]  IDU_EXU_rd_ctrl;
    wire [5:0]  IDU_EXU_ALU_ctrl;
    wire [6:0] IDU_EXU_mem_ctrl;
    wire [2:0]  IDU_EXU_csr_ctrl;
    wire [31:0] IDU_EXU_pc;
    wire [31:0] IDU_EXU_src1;
    wire [31:0] IDU_EXU_src2;
    wire [31:0] IDU_EXU_r_csr_data;
    wire [31:0] IDU_EXU_imm;
    wire [3:0]  IDU_EXU_rd;
    wire [11:0] IDU_EXU_w_csr_addr;
    wire IDEX_ready;
    wire IDU_valid;
    wire [3:0]  IDU_GPR_rs1;
    wire [3:0]  IDU_GPR_rs2;
    wire [31:0] IDU_GPR_src1;
    wire [31:0] IDU_GPR_src2;
    wire [11:0] IDU_CSR_r_csr_addr;
    wire [31:0] IDU_CSR_r_csr_data;
    wire [2:0]  IDEX_EXU_pc_ctrl;
    wire [2:0]  IDEX_EXU_rd_ctrl;
    wire [5:0]  IDEX_EXU_ALU_ctrl;
    wire [18:0] IDEX_EXU_mem_ctrl;
    wire [4:0]  IDEX_EXU_csr_ctrl;
    wire [31:0] IDEX_EXU_pc;
    wire [31:0] IDEX_EXU_src1;
    wire [31:0] IDEX_EXU_src2;
    wire [31:0] IDEX_EXU_r_csr_data;
    wire [31:0] IDEX_EXU_imm;
    wire [4:0]  IDEX_EXU_rd;
    wire [11:0] IDEX_EXU_w_csr_addr;
    wire EXU_ready ;
    wire IDEX_valid;
    wire [2:0]  EXU_MEM_rd_ctrl;
    wire [6:0] EXU_MEM_mem_ctrl;
    wire [2:0]  EXU_MEM_csr_ctrl;
    wire [31:0] EXU_MEM_pc;
    wire [31:0] EXU_MEM_src1;
    wire [31:0] EXU_MEM_src2;
    wire [31:0] EXU_MEM_r_csr_data;
    wire [31:0] EXU_MEM_imm;
    wire [3:0]  EXU_MEM_rd;
    wire [11:0] EXU_MEM_w_csr_addr;
    wire [31:0] EXU_MEM_ALU_result;
wire [31:0] EXU_MEM_rd_data   ;
    wire [1:0]  EXU_MEM_rd_data_type;
    wire [31:0] EXU_MEM_w_csr_data  ;
    wire        EXU_MEM_w_csr_en    ;
    wire        EXU_MEM_w_csr_ecall ;
    wire        EXMEM_ready;
    wire [2:0]  EXMEM_MEM_rd_ctrl;
    wire [18:0] EXMEM_MEM_mem_ctrl;
    wire [4:0]  EXMEM_MEM_csr_ctrl;
    wire [31:0] EXMEM_MEM_pc;
    wire [31:0] EXMEM_MEM_src1;
    wire [31:0] EXMEM_MEM_src2;
    wire [31:0] EXMEM_MEM_r_csr_data;
    wire [31:0] EXMEM_MEM_imm;
    wire [4:0]  EXMEM_MEM_rd;
    wire [11:0] EXMEM_MEM_w_csr_addr;
    wire [31:0] EXMEM_MEM_ALU_result;
    wire MEM_ready;
    wire EXMEM_valid;
    wire [31:0] MEM_WBU_r_mem_data;
    wire [2:0]  MEM_WBU_rd_ctrl;
    wire [2:0]  MEM_WBU_csr_ctrl;
    wire [31:0] MEM_WBU_pc;
    wire [31:0] MEM_WBU_src1;
    wire [31:0] MEM_WBU_r_csr_data;
    wire [31:0] MEM_WBU_imm;
    wire [3:0]  MEM_WBU_rd;
    wire [11:0] MEM_WBU_w_csr_addr;
    wire [31:0] MEM_WBU_ALU_result;
wire [31:0] MEM_WBU_rd_data   ;
    wire        MEM_WBU_rd_data_en;
    wire [31:0] MEM_WBU_w_csr_data  ;
    wire        MEM_WBU_w_csr_en    ;
    wire        MEM_WBU_w_csr_ecall ;
    wire MEMWB_ready;
    wire MEM_valid;
    wire [1:0] MEM_DATAHAZARD_rd_data_type;
    wire [31:0] MEMWB_WBU_r_mem_data;
    wire [2:0]  MEMWB_WBU_rd_ctrl;
    wire [4:0]  MEMWB_WBU_csr_ctrl;
    wire [31:0] MEMWB_WBU_pc;
    wire [31:0] MEMWB_WBU_src1;
    wire [31:0] MEMWB_WBU_r_csr_data;
    wire [31:0] MEMWB_WBU_imm;
    wire [4:0]  MEMWB_WBU_rd;
    wire [11:0] MEMWB_WBU_w_csr_addr;
    wire [31:0] MEMWB_WBU_ALU_result;
    wire WBU_ready;
    wire MEMWB_valid;
    wire [3:0]   WBU_GPR_rd;
    wire [31:0]  WBU_GPR_rd_data;
    wire         WBU_GPR_rd_en;
    wire [11:0]  WBU_CSR_w_csr_addr;
    wire [31:0]  WBU_CSR_w_csr_data;
    wire         WBU_CSR_w_csr_en;
    wire         WBU_CSR_w_csr_ecall;
    wire [2:0]   WBU_rd_ctrl;
wire [31:0] a0;
    wire DATAHAZARD_stop_pipe;
    wire [31:0] DATAHAZARD_IDU_r_ddata;
    wire DATAHAZARD_IDU_rs1_or_rs2;
    wire DATAHAZARD_IDU_bypass;
//======================finish========================//
always@(posedge clock) begin
    if (IFU_IDU_inst == 32'b00000000000100000000000001110011) begin
        $write("npc execute ebreak at pc = 0x%08x\n", IFU_IDU_pc);
        if (a0 == 0) begin
            $write("\033[1;32mHIT GOOD TRAP!\033[0m\n"); // 绿色
        end
        else begin
            $write("\033[1;31mHIT BAD TRAP!\033[0m\n");  // 红色
        end
        $finish;
    end
end

//======================finish========================//
ysyx_24120011_IFU u_ysyx_24120011_IFU(
    .clk          ( clock          ),
    .rst          ( reset          ),
    .i_pc         ( EXU_IFU_npc         ),
    .o_pc         ( IFU_IDU_pc         ),
    .o_inst       ( IFU_IDU_inst       ),
    .i_EXU_valid  ( EXU_valid   ),
    .o_IFU_ready  ( IFU_ready  ),
    .i_IDU_ready  ( IDU_ready ),
    .o_IFU_valid  ( IFU_valid  ),
    .M0_araddr    ( M0_araddr    ),
    .M0_arvalid   ( M0_arvalid   ),
    .M0_arready   ( M0_arready   ),
    .M0_arid      ( M0_arid      ),
    .M0_arlen     ( M0_arlen     ),
    .M0_arsize    ( M0_arsize    ),
    .M0_arburst   ( M0_arburst   ),
    .M0_rdata     ( M0_rdata     ),
    .M0_rresp     ( M0_rresp     ),
    .M0_rvalid    ( M0_rvalid    ),
    .M0_rready    ( M0_rready    ),
    .M0_rlast     ( M0_rlast     ),
    .M0_rid       ( M0_rid       ),
    .M0_awaddr    ( M0_awaddr    ),
    .M0_awvalid   ( M0_awvalid   ),
    .M0_awready   ( M0_awready   ),
    .M0_awid      ( M0_awid      ),
    .M0_awlen     ( M0_awlen     ),
    .M0_awsize    ( M0_awsize    ),
    .M0_awburst   ( M0_awburst   ),
    .M0_wdata     ( M0_wdata     ),
    .M0_wstrb     ( M0_wstrb     ),
    .M0_wvalid    ( M0_wvalid    ),
    .M0_wready    ( M0_wready    ),
    .M0_wlast     ( M0_wlast     ),
    .M0_bresp     ( M0_bresp     ),
    .M0_bvalid    ( M0_bvalid    ),
    .M0_bready    ( M0_bready    ),
    .M0_bid       ( M0_bid       ),
    .i_flush      ( flush        )
);
ysyx_24120011_IDU u_ysyx_24120011_IDU(
    .clk          ( clock          ),
    .rst          ( reset          ),
    .i_pc         ( IFU_IDU_pc         ),
    .i_inst       ( IFU_IDU_inst       ),
    .o_pc_ctrl    ( IDU_EXU_pc_ctrl    ),
    .o_rd_ctrl    ( IDU_EXU_rd_ctrl    ),
    .o_ALU_ctrl   ( IDU_EXU_ALU_ctrl   ),
    .o_mem_ctrl   ( IDU_EXU_mem_ctrl   ),
    .o_csr_ctrl   ( IDU_EXU_csr_ctrl   ),
    .o_pc         ( IDU_EXU_pc         ),
    .o_src1       ( IDU_EXU_src1       ),
    .o_src2       ( IDU_EXU_src2       ),
    .o_r_csr_data ( IDU_EXU_r_csr_data ),
    .o_imm        ( IDU_EXU_imm        ),
    .o_rd         ( IDU_EXU_rd         ),
    .o_w_csr_addr ( IDU_EXU_w_csr_addr ),
    .i_IFU_valid  ( IFU_valid ),
    .o_IDU_ready  ( IDU_ready  ),
    .i_EXU_ready  ( EXU_ready ),
    .o_IDU_valid  ( IDU_valid  ),
    .o_rs1        ( IDU_GPR_rs1        ),
    .o_rs2        ( IDU_GPR_rs2        ),
    .i_src1       ( IDU_GPR_src1       ),
    .i_src2       ( IDU_GPR_src2       ),
    .o_r_csr_addr ( IDU_CSR_r_csr_addr ),
    .i_r_csr_data ( IDU_CSR_r_csr_data  ),
    .i_stop_pipe  ( DATAHAZARD_stop_pipe           ),
    .i_rd_data    ( DATAHAZARD_IDU_r_ddata),
    .i_rs1_or_rs2 ( DATAHAZARD_IDU_rs1_or_rs2),
    .i_bypass     ( DATAHAZARD_IDU_bypass),
    .i_flush      ( flush )
);
ysyx_24120011_EXU u_ysyx_24120011_EXU(
    .clk           ( clock           ),
    .rst           ( reset           ),
    .i_pc_ctrl     ( IDU_EXU_pc_ctrl     ),
    .i_rd_ctrl     ( IDU_EXU_rd_ctrl     ),
    .i_ALU_ctrl    ( IDU_EXU_ALU_ctrl    ),
    .i_mem_ctrl    ( IDU_EXU_mem_ctrl    ),
    .i_csr_ctrl    ( IDU_EXU_csr_ctrl    ),
    .i_pc          ( IDU_EXU_pc          ),
    .i_src1        ( IDU_EXU_src1        ),
    .i_src2        ( IDU_EXU_src2        ),
    .i_r_csr_data  ( IDU_EXU_r_csr_data  ),
    .i_imm         ( IDU_EXU_imm         ),
    .i_rd          ( IDU_EXU_rd          ),
    .i_w_csr_addr  ( IDU_EXU_w_csr_addr  ),
    .o_mem_ctrl    ( EXU_MEM_mem_ctrl    ),
    .o_src2        ( EXU_MEM_src2        ),
    .o_rd          ( EXU_MEM_rd          ),
    .o_w_csr_addr  ( EXU_MEM_w_csr_addr  ),
    .o_ALU_result  ( EXU_MEM_ALU_result  ),
    .o_rd_data     (EXU_MEM_rd_data      ),
    .o_rd_data_type(EXU_MEM_rd_data_type ),
    .o_w_csr_data  (EXU_MEM_w_csr_data   ),
    .o_w_csr_en    (EXU_MEM_w_csr_en     ),
    .o_w_csr_ecall (EXU_MEM_w_csr_ecall  ),
    .o_npc         ( EXU_IFU_npc         ),
    .i_IDU_valid   ( IDU_valid  ),
    .o_EXU_ready   ( EXU_ready   ),
    .i_MEM_ready   ( MEM_ready ),
    .o_EXU_valid   ( EXU_valid   ),
    .o_flush       ( flush ),
    .i_IDU_empty   ( IDU_ready ),
    .i_IFU_pc      ( IFU_IDU_pc)
);
ysyx_24120011_MEM u_ysyx_24120011_MEM(
    .clk           ( clock           ),
    .rst           ( reset           ),
    .i_mem_ctrl    ( EXU_MEM_mem_ctrl    ),
    .i_src2        ( EXU_MEM_src2        ),
    .i_rd          ( EXU_MEM_rd          ),
    .i_w_csr_addr  ( EXU_MEM_w_csr_addr  ),
    .i_ALU_result  ( EXU_MEM_ALU_result  ),
    .i_rd_data     (EXU_MEM_rd_data      ),
    .i_rd_data_type(EXU_MEM_rd_data_type ),
    .i_w_csr_data  (EXU_MEM_w_csr_data   ),
    .i_w_csr_en    (EXU_MEM_w_csr_en     ),
    .i_w_csr_ecall (EXU_MEM_w_csr_ecall  ),
    .o_rd          ( MEM_WBU_rd          ),
    .o_w_csr_addr  ( MEM_WBU_w_csr_addr  ),
    .o_rd_data     (MEM_WBU_rd_data      ),
    .o_rd_data_en  (MEM_WBU_rd_data_en ),
    .o_w_csr_data  (MEM_WBU_w_csr_data   ),
    .o_w_csr_en    (MEM_WBU_w_csr_en     ),
    .o_w_csr_ecall (MEM_WBU_w_csr_ecall  ),
    .o_rd_data_type(MEM_DATAHAZARD_rd_data_type),
    .i_EXU_valid   ( EXU_valid ),
    .o_MEM_ready   ( MEM_ready   ),
    .i_WBU_ready   ( WBU_ready ),
    .o_MEM_valid   ( MEM_valid   ),
    .M1_araddr     ( M1_araddr     ),
    .M1_arvalid    ( M1_arvalid    ),
    .M1_arready    ( M1_arready    ),
    .M1_arid       ( M1_arid       ),
    .M1_arlen      ( M1_arlen      ),
    .M1_arsize     ( M1_arsize     ),
    .M1_arburst    ( M1_arburst    ),
    .M1_rdata      ( M1_rdata      ),
    .M1_rresp      ( M1_rresp      ),
    .M1_rvalid     ( M1_rvalid     ),
    .M1_rready     ( M1_rready     ),
    .M1_rlast      ( M1_rlast      ),
    .M1_rid        ( M1_rid        ),
    .M1_awaddr     ( M1_awaddr     ),
    .M1_awvalid    ( M1_awvalid    ),
    .M1_awready    ( M1_awready    ),
    .M1_awid       ( M1_awid       ),
    .M1_awlen      ( M1_awlen      ),
    .M1_awsize     ( M1_awsize     ),
    .M1_awburst    ( M1_awburst    ),
    .M1_wdata      ( M1_wdata      ),
    .M1_wstrb      ( M1_wstrb      ),
    .M1_wvalid     ( M1_wvalid     ),
    .M1_wready     ( M1_wready     ),
    .M1_wlast      ( M1_wlast      ),
    .M1_bresp      ( M1_bresp      ),
    .M1_bvalid     ( M1_bvalid     ),
    .M1_bready     ( M1_bready     ),
    .M1_bid        ( M1_bid        )
);
ysyx_24120011_WBU u_ysyx_24120011_WBU(
    .i_rd          ( MEM_WBU_rd          ),
    .i_w_csr_addr  ( MEM_WBU_w_csr_addr  ),
    .i_rd_data     (MEM_WBU_rd_data      ),
    .i_rd_data_en  (MEM_WBU_rd_data_en ),
    .i_w_csr_data  (MEM_WBU_w_csr_data   ),
    .i_w_csr_en    (MEM_WBU_w_csr_en     ),
    .i_w_csr_ecall (MEM_WBU_w_csr_ecall  ),
    .o_rd          ( WBU_GPR_rd          ),
    .o_rd_data     ( WBU_GPR_rd_data     ),
    .o_rd_en       ( WBU_GPR_rd_en       ),
    .o_w_csr_addr  ( WBU_CSR_w_csr_addr  ),
    .o_w_csr_data  ( WBU_CSR_w_csr_data  ),
    .o_w_csr_en    ( WBU_CSR_w_csr_en    ),
    .o_w_csr_ecall ( WBU_CSR_w_csr_ecall ),
    .i_MEM_valid   ( MEM_valid ),
    .o_WBU_ready   ( WBU_ready   )
);
ysyx_24120011_GPR u_ysyx_24120011_GPR(
    .clk       ( clock       ),
    .rst       ( reset       ),
    .i_rs1     ( IDU_GPR_rs1     ),
    .i_rs2     ( IDU_GPR_rs2     ),
    .o_src1    ( IDU_GPR_src1    ),
    .o_src2    ( IDU_GPR_src2    ),
    .i_rd      ( WBU_GPR_rd      ),
    .i_rd_data ( WBU_GPR_rd_data ),
    .i_rd_en   ( WBU_GPR_rd_en   ),
    .a0        ( a0              )
);
ysyx_24120011_CSR u_ysyx_24120011_CSR(
    .clk          ( clock          ),
    .rst          ( reset          ),
    .i_r_csr_addr ( IDU_CSR_r_csr_addr ),
    .o_r_csr_data ( IDU_CSR_r_csr_data ),
    .i_w_csr_addr ( WBU_CSR_w_csr_addr ),
    .i_w_csr_data ( WBU_CSR_w_csr_data ),
    .i_w_csr_en   ( WBU_CSR_w_csr_en   ),
    .i_w_csr_ecall  ( WBU_CSR_w_csr_ecall  )
);
ysyx_24120011_data_hazard_detection u_ysyx_24120011_data_hazard_detection(
    .i_IDU_rs1     ( IDU_GPR_rs1     ),
    .i_IDU_rs2     ( IDU_GPR_rs2     ),
    .i_EXU_rd      ( EXU_MEM_rd      ),
    .i_EXU_rd_data_type ( EXU_MEM_rd_data_type),
    .i_EXU_rd_data ( EXU_MEM_rd_data),
    .i_MEM_rd      ( MEM_WBU_rd      ),
    .i_MEM_rd_data_type ( MEM_DATAHAZARD_rd_data_type),
    .i_MEM_rd_data ( MEM_WBU_rd_data),
    .i_EXU_ready   ( EXU_ready   ),
    .i_MEM_ready   ( MEM_ready   ),
    .o_stop_pipe   ( DATAHAZARD_stop_pipe   ),
    .o_rd_data     ( DATAHAZARD_IDU_r_ddata),
    .o_rs1_or_rs2  ( DATAHAZARD_IDU_rs1_or_rs2),
    .o_bypass      ( DATAHAZARD_IDU_bypass)
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
    .Xbar_S1_araddr  ( clint_araddr      ),
    .Xbar_S1_arvalid ( clint_arvalid     ),
    .Xbar_S1_arready ( clint_arready     ),
    .Xbar_S1_arid    ( clint_arid        ),
    .Xbar_S1_arlen   ( clint_arlen       ),
    .Xbar_S1_arsize  ( clint_arsize      ),
    .Xbar_S1_arburst ( clint_arburst     ),
    .Xbar_S1_rdata   ( clint_rdata       ),
    .Xbar_S1_rresp   ( clint_rresp       ),
    .Xbar_S1_rvalid  ( clint_rvalid      ),
    .Xbar_S1_rready  ( clint_rready      ),
    .Xbar_S1_rlast   ( clint_rlast       ),
    .Xbar_S1_rid     ( clint_rid         ),
    .Xbar_S1_awaddr  ( clint_awaddr      ),
    .Xbar_S1_awvalid ( clint_awvalid     ),
    .Xbar_S1_awready ( clint_awready     ),
    .Xbar_S1_awid    ( clint_awid        ),
    .Xbar_S1_awlen   ( clint_awlen       ),
    .Xbar_S1_awsize  ( clint_awsize      ),
    .Xbar_S1_awburst ( clint_awburst     ),
    .Xbar_S1_wdata   ( clint_wdata       ),
    .Xbar_S1_wstrb   ( clint_wstrb       ),
    .Xbar_S1_wvalid  ( clint_wvalid      ),
    .Xbar_S1_wready  ( clint_wready      ),
    .Xbar_S1_wlast   ( clint_wlast       ),
    .Xbar_S1_bresp   ( clint_bresp       ),
    .Xbar_S1_bvalid  ( clint_bvalid      ),
    .Xbar_S1_bready  ( clint_bready      ),
    .Xbar_S1_bid     ( clint_bid         )
);
endmodule

module ysyx_24120011_Arbiter (
    input clk,
    input rst,
    input  [31:0]     M0_araddr,
    input             M0_arvalid,
    output            M0_arready,
    input  [3:0]      M0_arid,
    input  [7:0]      M0_arlen,
    input  [2:0]      M0_arsize,
    input  [1:0]      M0_arburst,
    output [31:0]     M0_rdata,
    output [1:0]      M0_rresp,
    output            M0_rvalid,
    input             M0_rready,
    output            M0_rlast,
    output [3:0]      M0_rid,
    input  [31:0]     M0_awaddr,
    input             M0_awvalid,
    output            M0_awready,
    input  [3:0]      M0_awid,
    input  [7:0]      M0_awlen,
    input  [2:0]      M0_awsize,
    input  [1:0]      M0_awburst,
    input  [31:0]     M0_wdata,
    input  [3:0]      M0_wstrb,
    input             M0_wvalid,
    output            M0_wready,
    input             M0_wlast,
    output [1:0]      M0_bresp,
    output            M0_bvalid,
    input             M0_bready,
    output [3:0]	  M0_bid,
    input  [31:0]     M1_araddr,
    input             M1_arvalid,
    output            M1_arready,
    input  [3:0]      M1_arid,
    input  [7:0]      M1_arlen,
    input  [2:0]      M1_arsize,
    input  [1:0]      M1_arburst,
    output [31:0]     M1_rdata,
    output [1:0]      M1_rresp,
    output            M1_rvalid,
    input             M1_rready,
    output            M1_rlast,
    output [3:0]      M1_rid,
    input  [31:0]     M1_awaddr,
    input             M1_awvalid,
    output            M1_awready,
    input  [3:0]      M1_awid,
    input  [7:0]      M1_awlen,
    input  [2:0]      M1_awsize,
    input  [1:0]      M1_awburst,
    input  [31:0]     M1_wdata,
    input  [3:0]      M1_wstrb,
    input             M1_wvalid,
    output            M1_wready,
    input             M1_wlast,
    output [1:0]      M1_bresp,
    output            M1_bvalid,
    input             M1_bready,
    output [3:0]	  M1_bid,
    output  [31:0]     S0_araddr,
    output             S0_arvalid,
    input              S0_arready,
    output  [3:0]      S0_arid,
    output  [7:0]      S0_arlen,
    output  [2:0]      S0_arsize,
    output  [1:0]      S0_arburst,
    input   [31:0]     S0_rdata,
    input   [1:0]      S0_rresp,
    input              S0_rvalid,
    output             S0_rready,
    input              S0_rlast,
    input   [3:0]      S0_rid,
    output  [31:0]     S0_awaddr,
    output             S0_awvalid,
    input              S0_awready,
    output  [3:0]      S0_awid,
    output  [7:0]      S0_awlen,
    output  [2:0]      S0_awsize,
    output  [1:0]      S0_awburst,
    output  [31:0]     S0_wdata,
    output  [3:0]      S0_wstrb,
    output             S0_wvalid,
    input              S0_wready,
    output             S0_wlast,
    input   [1:0]      S0_bresp,
    input              S0_bvalid,
    output             S0_bready,
    input   [3:0]	  S0_bid
);
    parameter ysyx_24120011_Arbiter_IDLE = 3'b000;
        parameter ysyx_24120011_Arbiter_M0 = 3'b001;
        parameter ysyx_24120011_Arbiter_M1 = 3'b010;
    reg [2:0] state;
        reg [2:0] next_state;
    reg [2:0] last_master;
    wire done;
    wire [2:0] choose;
    assign done = (S0_rlast && S0_rready && S0_rvalid) || (S0_bready && S0_bvalid);
    assign S0_araddr  = (state == ysyx_24120011_Arbiter_M0 ? M0_araddr :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_araddr : 'b0));
    assign S0_arvalid = (state == ysyx_24120011_Arbiter_M0 ? M0_arvalid :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_arvalid : 'b0));
    assign M0_arready = (state == ysyx_24120011_Arbiter_M0 ? S0_arready :'b0);
    assign M1_arready = (state == ysyx_24120011_Arbiter_M1 ? S0_arready :'b0);
    assign S0_arid  = (state == ysyx_24120011_Arbiter_M0 ? M0_arid :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_arid : 'b0));
    assign S0_arlen  = (state == ysyx_24120011_Arbiter_M0 ? M0_arlen :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_arlen : 'b0));
    assign S0_arsize  = (state == ysyx_24120011_Arbiter_M0 ? M0_arsize :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_arsize : 'b0));
    assign S0_arburst  = (state == ysyx_24120011_Arbiter_M0 ? M0_arburst :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_arburst : 'b0));
    assign M0_rdata   = (state == ysyx_24120011_Arbiter_M0 ? S0_rdata :'b0);
    assign M1_rdata   = (state == ysyx_24120011_Arbiter_M1 ? S0_rdata :'b0);       
    assign M0_rresp   = (state == ysyx_24120011_Arbiter_M0 ? S0_rresp :'b0);
    assign M1_rresp   = (state == ysyx_24120011_Arbiter_M1 ? S0_rresp :'b0); 
    assign M0_rvalid  = (state == ysyx_24120011_Arbiter_M0 ? S0_rvalid :'b0);
    assign M1_rvalid  = (state == ysyx_24120011_Arbiter_M1 ? S0_rvalid :'b0); 
    assign S0_rready  = (state == ysyx_24120011_Arbiter_M0 ? M0_rready :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_rready : 'b0));
    assign M0_rlast   = (state == ysyx_24120011_Arbiter_M0 ? S0_rlast :'b0);
    assign M1_rlast   = (state == ysyx_24120011_Arbiter_M1 ? S0_rlast :'b0);  
    assign M0_rid   = (state == ysyx_24120011_Arbiter_M0 ? S0_rid :'b0);
    assign M1_rid   = (state == ysyx_24120011_Arbiter_M1 ? S0_rid :'b0);  
    assign S0_awaddr  = (state == ysyx_24120011_Arbiter_M0 ? M0_awaddr :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awaddr : 'b0));
    assign S0_awvalid = (state == ysyx_24120011_Arbiter_M0 ? M0_awvalid :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awvalid : 'b0));
    assign M0_awready = (state == ysyx_24120011_Arbiter_M0 ? S0_awready :'b0);
    assign M1_awready = (state == ysyx_24120011_Arbiter_M1 ? S0_awready :'b0); 
    assign S0_awid  = (state == ysyx_24120011_Arbiter_M0 ? M0_awid :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awid : 'b0));
    assign S0_awlen  = (state == ysyx_24120011_Arbiter_M0 ? M0_awlen :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awlen : 'b0));
    assign S0_awsize  = (state == ysyx_24120011_Arbiter_M0 ? M0_awsize :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awsize : 'b0));
    assign S0_awburst  = (state == ysyx_24120011_Arbiter_M0 ? M0_awburst :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_awburst : 'b0));
    assign S0_wdata   = (state == ysyx_24120011_Arbiter_M0 ? M0_wdata :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_wdata : 'b0));
    assign S0_wstrb   = (state == ysyx_24120011_Arbiter_M0 ? M0_wstrb :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_wstrb : 'b0));
    assign S0_wvalid  = (state == ysyx_24120011_Arbiter_M0 ? M0_wvalid :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_wvalid : 'b0));
    assign M0_wready  = (state == ysyx_24120011_Arbiter_M0 ? S0_wready :'b0);
    assign M1_wready  = (state == ysyx_24120011_Arbiter_M1 ? S0_wready :'b0);
    assign S0_wlast  = (state == ysyx_24120011_Arbiter_M0 ? M0_wlast :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_wlast : 'b0));
    assign M0_bresp   = (state == ysyx_24120011_Arbiter_M0 ? S0_bresp :'b0);
    assign M1_bresp   = (state == ysyx_24120011_Arbiter_M1 ? S0_bresp :'b0);
    assign M0_bvalid  = (state == ysyx_24120011_Arbiter_M0 ? S0_bvalid :'b0);
    assign M1_bvalid  = (state == ysyx_24120011_Arbiter_M1 ? S0_bvalid :'b0);
    assign S0_bready  = (state == ysyx_24120011_Arbiter_M0 ? M0_bready :
                       (state == ysyx_24120011_Arbiter_M1 ? M1_bready : 'b0));
    assign M0_bid   = (state == ysyx_24120011_Arbiter_M0 ? S0_bid :'b0);
    assign M1_bid   = (state == ysyx_24120011_Arbiter_M1 ? S0_bid :'b0);
    always@(posedge clk)begin
        if(rst)begin
            state <= ysyx_24120011_Arbiter_IDLE;
        end
        else begin
            state <= next_state;
        end
    end
    always@(posedge clk)begin
        if(rst)begin
            last_master <= 3'd1;
        end
        else begin
            if (done) begin
                if (state == ysyx_24120011_Arbiter_M0)
                    last_master <= 'd0;
                else if (state == ysyx_24120011_Arbiter_M1)
                    last_master <= 'd1;
            end
        end
    end
    always@(*)begin
        case(state)
            ysyx_24120011_Arbiter_IDLE:begin
                if(last_master == 3'd1)begin
                    if(M0_arvalid || M0_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_arvalid || M1_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
                else if(last_master == 3'd0)begin
                    if(M1_arvalid || M1_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else if(M0_arvalid || M0_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else begin
                        next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            ysyx_24120011_Arbiter_M0:begin
                if(done)begin
                    if(M1_arvalid || M1_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else if(M0_arvalid || M0_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else begin
                        next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            ysyx_24120011_Arbiter_M1:begin
                if(done)begin
                    if(M0_arvalid || M0_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_arvalid ||M1_awvalid)begin
                        next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            default:next_state = ysyx_24120011_Arbiter_IDLE;
        endcase
    end
endmodule

module ysyx_24120011_IFU(
    input clk,
    input rst,
    input  [31:0] i_pc,
    output [31:0] o_pc,
    output [31:0] o_inst,
    input  i_EXU_valid,
    output o_IFU_ready,
    input  i_IDU_ready,
    output o_IFU_valid,
    output  [31:0]     M0_araddr,
    output             M0_arvalid,
    input            M0_arready,
    output  [3:0]      M0_arid,
    output  [7:0]      M0_arlen,
    output  [2:0]      M0_arsize,
    output  [1:0]      M0_arburst,
    input [31:0]     M0_rdata,
    input [1:0]      M0_rresp,
    input            M0_rvalid,
    output             M0_rready,
    input              M0_rlast,
    input   [3:0]      M0_rid,
    output  [31:0]     M0_awaddr,
    output             M0_awvalid,
    input            M0_awready,
    output  [3:0]      M0_awid,
    output  [7:0]      M0_awlen,
    output  [2:0]      M0_awsize,
    output  [1:0]      M0_awburst,
    output  [31:0]     M0_wdata,
    output  [3:0]      M0_wstrb,
    output             M0_wvalid,
    input            M0_wready,
    output             M0_wlast,
    input [1:0]      M0_bresp,
    input            M0_bvalid,
    output             M0_bready,
    input	[3:0]	   M0_bid,
    input i_flush
);
reg [31:0] pc;
    reg [31:0] inst;
reg flushing;
    parameter ysyx_24120011_IFU_IDLE_EMPTY      = 3'b000;
    parameter ysyx_24120011_IFU_IDLE_FULL       = 3'b001;
    parameter ysyx_24120011_IFU_LOOKUP          = 3'b010;
    parameter ysyx_24120011_IFU_AXI_RADDR       = 3'b011;
    parameter ysyx_24120011_IFU_AXI_RDATA       = 3'b100;
    reg [2:0] state;
    reg [2:0] next_state;
    reg cache_IFU_valid;
    parameter ysyx_24120011_ICACHE_SIZE   = 32'd8;
    parameter ysyx_24120011_ICACHE_NUM    = 32'd1;
    reg [(1) + (32-($clog2(ysyx_24120011_ICACHE_SIZE)+$clog2(ysyx_24120011_ICACHE_NUM))) + (8*ysyx_24120011_ICACHE_SIZE)-1:0] icache;
wire [32-($clog2(ysyx_24120011_ICACHE_SIZE)+$clog2(ysyx_24120011_ICACHE_NUM))-1:0] tag;
    wire [$clog2(ysyx_24120011_ICACHE_SIZE)-1:0] offset;
    wire [31:0] inst_cache;
    wire hit;
    wire hit_valid;
    wire hit_tag;
    wire arvalid;
    reg rready;
    reg [31:0] araddr;
    reg [31:0] cached_size;
    reg rready_delay;
    wire arready;
    wire [1:0] rresp;
    wire awready;
    wire wready;
    wire [1:0] bresp;
    wire bvalid;
    wire rvalid;
assign o_pc = pc;
assign o_inst = inst;

always @(posedge clk) begin
    if (rst) begin
        flushing <= 1'b0;
    end else begin
        if (i_flush) begin
            flushing <= 1'b1;
        end
        else begin
            if (state == ysyx_24120011_IFU_IDLE_FULL) begin
                flushing <= 1'b0;
            end
        end
    end
end

always @(posedge clk) begin
    if(rst) begin
        pc         <=  32'h8000_0000;
    end
    else begin
        if(!i_flush && !flushing) begin
            if(o_IFU_valid && o_IFU_ready) begin
                if ((inst[6:0] == 7'b1100011) && inst[31]) begin
                    pc <= pc + {{20{inst[31]}},inst[7],inst[30:25],inst[11:8],1'b0};
                end 
                else if (inst[6:0] == 7'b1101111) begin
                    pc <= pc + {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
                end
                else begin
                    pc <= pc + 32'd4;
                end
            end
        end
        else begin
            if(state == ysyx_24120011_IFU_IDLE_EMPTY || state == ysyx_24120011_IFU_IDLE_FULL) begin
                pc <= i_pc;
            end
        end
    end
end
assign o_IFU_valid  = !i_flush && !flushing && cache_IFU_valid;
assign o_IFU_ready  = (state == ysyx_24120011_IFU_IDLE_EMPTY) ? 1'b1 : 1'b0;
assign {tag,offset} = pc;
assign hit_valid = (state == ysyx_24120011_IFU_LOOKUP) ? (icache[(1) + (32-($clog2(ysyx_24120011_ICACHE_SIZE)+$clog2(ysyx_24120011_ICACHE_NUM))) + (8*ysyx_24120011_ICACHE_SIZE)-1] == 1'b1) : 1'b0;
assign hit_tag = (state == ysyx_24120011_IFU_LOOKUP) ? (tag == icache[(32-($clog2(ysyx_24120011_ICACHE_SIZE)+$clog2(ysyx_24120011_ICACHE_NUM))) + (8*ysyx_24120011_ICACHE_SIZE)-1:(8*ysyx_24120011_ICACHE_SIZE)]) : 1'b0;
assign hit = hit_valid && hit_tag;
assign inst_cache = hit ? (offset[2] ? icache[63:32] : icache[31:0]) : 32'b0;
assign arvalid = (state == ysyx_24120011_IFU_AXI_RADDR) ? 1'b1 : 1'b0;
assign M0_araddr  = araddr      ;
assign M0_arvalid = arvalid ;
assign arready    = M0_arready;
assign rresp      = M0_rresp ;
assign rvalid     = M0_rvalid;
assign M0_rready  = (state == ysyx_24120011_IFU_AXI_RDATA) ? 1'b1 : 1'b0  ;
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
assign M0_arlen   = (pc >= 32'hA000_0000 && pc <= 32'hBFFF_FFFF) ? 'd1 : 'd0;
assign M0_arburst = 'b01      ;
assign M0_arsize  = 3'b010    ;
assign M0_awid    = 'd0       ;
assign M0_awlen   = 'd0       ;
assign M0_awburst = 'd0       ;
assign M0_awsize  = 3'b010    ;
assign M0_wlast   = M0_wvalid ;
always @(posedge clk) begin
    if(rst) begin
        inst <= 32'b0;
        cache_IFU_valid <= 1'b0;
    end
    else begin
        if(state == ysyx_24120011_IFU_IDLE_EMPTY) begin
            cache_IFU_valid <= 1'b0;
        end
        else if(state == ysyx_24120011_IFU_IDLE_FULL) begin
            cache_IFU_valid <= 1'b0;
        end
        else if(state == ysyx_24120011_IFU_LOOKUP) begin
            if(hit) begin
                inst <= inst_cache;
                cache_IFU_valid <= 1'b1;
            end
            else begin
                cache_IFU_valid <= 1'b0;
            end
        end
        else if(state == ysyx_24120011_IFU_AXI_RADDR) begin
            cache_IFU_valid <= 1'b0;
        end
        else if(state == ysyx_24120011_IFU_AXI_RDATA) begin
            cache_IFU_valid <= 1'b0;
        end
        else begin 
            cache_IFU_valid <= 1'b0;
        end
    end
end
always @(posedge clk) begin
    if(rst) begin
        araddr <= 'd0;
    end
    else begin
        if(state == ysyx_24120011_IFU_LOOKUP && next_state == ysyx_24120011_IFU_AXI_RADDR) begin
            araddr <= pc & 32'hFFFFFFFF << $clog2(ysyx_24120011_ICACHE_SIZE);
        end
        else if(state == ysyx_24120011_IFU_AXI_RDATA && next_state == ysyx_24120011_IFU_AXI_RADDR) begin
            if(pc >= 32'hA000_0000 && pc <= 32'hBFFF_FFFF) begin
                araddr <= araddr;
            end
            else begin
                araddr <= araddr + 'd4;
            end
        end
        else if(state == ysyx_24120011_IFU_AXI_RADDR) begin
            araddr <= araddr;
        end
        else begin
            araddr <= araddr;
        end
    end
end
always @(posedge clk) begin
    if(rst) begin
        cached_size <= 'd0;
    end
    else begin
        if(rvalid) begin
            cached_size <= cached_size + 'd4;
        end
        else if(state == ysyx_24120011_IFU_IDLE_EMPTY) begin
            cached_size <= 'd0;
        end
        else begin
            cached_size <= cached_size;
        end
    end
end
always @(posedge clk) begin
    if(rst) begin
        icache <= 'b0;
    end
    else begin
        if(inst_cache == 32'h0000100f)begin
            icache <= 'b0;
        end else begin
            if(state == ysyx_24120011_IFU_IDLE_EMPTY) begin
            end
            if(state == ysyx_24120011_IFU_IDLE_FULL) begin
            end
            else if(state == ysyx_24120011_IFU_LOOKUP) begin
            end
            else if(state == ysyx_24120011_IFU_AXI_RADDR) begin
            end
            else if(state == ysyx_24120011_IFU_AXI_RDATA) begin
                if(rvalid  && M0_rready) begin
                    icache[(1) + (32-($clog2(ysyx_24120011_ICACHE_SIZE)+$clog2(ysyx_24120011_ICACHE_NUM))) + (8*ysyx_24120011_ICACHE_SIZE)-1: (8*ysyx_24120011_ICACHE_SIZE)] <= {1'b1, tag};
                    icache[31+(cached_size[31:2])*32 -: 32] <= M0_rdata;
                end
                else begin
                end
            end
            else begin 
            end
        end
    end
end
always@(*)begin
    case(state)
        ysyx_24120011_IFU_IDLE_EMPTY:      next_state = ((o_IFU_valid && o_IFU_ready) || (i_flush || flushing)) ? ysyx_24120011_IFU_IDLE_FULL    : ysyx_24120011_IFU_IDLE_EMPTY;
        ysyx_24120011_IFU_IDLE_FULL:      next_state = (i_IDU_ready) ? ysyx_24120011_IFU_LOOKUP    : ysyx_24120011_IFU_IDLE_FULL;
        ysyx_24120011_IFU_LOOKUP:    next_state = hit                      ? ysyx_24120011_IFU_IDLE_EMPTY      : ysyx_24120011_IFU_AXI_RADDR;
        ysyx_24120011_IFU_AXI_RADDR: next_state = (arvalid && arready)     ? ysyx_24120011_IFU_AXI_RDATA : ysyx_24120011_IFU_AXI_RADDR;
        ysyx_24120011_IFU_AXI_RDATA: next_state = (rvalid  && M0_rready )     ? (cached_size == ysyx_24120011_ICACHE_SIZE - 'd4 ? ysyx_24120011_IFU_LOOKUP : (pc >= 32'hA000_0000 && pc <= 32'hBFFF_FFFF ? ysyx_24120011_IFU_AXI_RDATA :ysyx_24120011_IFU_AXI_RADDR)) : ysyx_24120011_IFU_AXI_RDATA;
        default : next_state = ysyx_24120011_IFU_IDLE_EMPTY;
    endcase
end
always@(posedge clk)begin
    if(rst) begin
        state <= ysyx_24120011_IFU_IDLE_FULL;
    end
    else begin
        state <= next_state;
    end
end
endmodule

module ysyx_24120011_Clint (
    input wire clk,
    input wire rst,
    input  [31:0]     araddr,
    input             arvalid,
    output            arready,
    input  [3:0]      arid,
    input  [7:0]      arlen,
    input  [2:0]      arsize,
    input  [1:0]      arburst,
    output [31:0]     rdata,
    output [1:0]      rresp,
    output            rvalid,
    input             rready,
    output            rlast,
    output [3:0]      rid,
    input  [31:0]     awaddr,
    input             awvalid,
    output            awready,
    input  [3:0]      awid,
    input  [7:0]      awlen,
    input  [2:0]      awsize,
    input  [1:0]      awburst,
    input  [31:0]     wdata,
    input  [3:0]      wstrb,
    input             wvalid,
    output            wready,
    input             wlast,
    output [1:0]      bresp,
    output            bvalid,
    input             bready,
    output [3:0]	  bid
);
        parameter ysyx_24120011_S_AXI_IDLE  = 3'b000;
        parameter ysyx_24120011_S_AXI_RADDR = 3'b001;
        parameter ysyx_24120011_S_AXI_RDATA = 3'b010;
    reg [2:0] state;
        reg [2:0] next_state;
    reg [31:0] rdata_reg;
        reg rvalid_reg;
    reg [63:0] mtime;
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;
	assign rdata   = rdata_reg;
    assign rresp   = 2'b00;
	assign rvalid  = rvalid_reg;
    assign rid     = 'd0;
    assign rlast   = rvalid;
	assign awready = 'd0;
	assign wready  = 'd0;
	assign bvalid  = 'd0;
	assign bresp   = 2'b00;
    assign bid     = 'd0;
    always@(posedge clk)begin
        if(rst) begin
            mtime <= 64'b0;
        end
        else begin
            mtime <= mtime + 1;
        end
    end
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RDATA)begin
            if(araddr == 32'h02000048) begin
                rdata_reg <= mtime[31:0];
            end
            else if(araddr == 32'h0200004c) begin
                rdata_reg <= mtime[63:32];
            end
            else begin
                rdata_reg <= 32'b0;
            end
            rvalid_reg <= 1;
        end
        else begin
            rvalid_reg <= 0;
        end
    end
    always@(*)begin
        case(state)
            ysyx_24120011_S_AXI_IDLE  : next_state = (arvalid) ? ysyx_24120011_S_AXI_RADDR :  ysyx_24120011_S_AXI_IDLE;
			ysyx_24120011_S_AXI_RADDR : next_state = (arvalid && arready) ? ysyx_24120011_S_AXI_RDATA : ysyx_24120011_S_AXI_RADDR;
			ysyx_24120011_S_AXI_RDATA : next_state = (rvalid  && rready ) ? ysyx_24120011_S_AXI_IDLE  : ysyx_24120011_S_AXI_RDATA;
			default : next_state = ysyx_24120011_S_AXI_IDLE;
        endcase
    end
    always@(posedge clk)begin
        if(rst)begin
            state <= ysyx_24120011_S_AXI_IDLE;
        end
        else begin
            state <= next_state;
        end
    end
endmodule
module ysyx_24120011_data_hazard_detection ( 
    input [3:0] i_IDU_rs1,
    input [3:0] i_IDU_rs2,
    input [3:0] i_EXU_rd,
    input [1:0] i_EXU_rd_data_type,
    input [31:0] i_EXU_rd_data,
    input [3:0] i_MEM_rd,
    input [1:0] i_MEM_rd_data_type,
    input [31:0] i_MEM_rd_data,
    input i_EXU_ready,
    input i_MEM_ready,
    output o_stop_pipe,
    output o_rs1_or_rs2,
    output o_bypass,
    output [31:0] o_rd_data
);
        wire rs1_or_rs2_exu;
        wire rs1_or_rs2_mem;
    wire hazard_exu   = ((i_IDU_rs1 == i_EXU_rd)   || (i_IDU_rs2 == i_EXU_rd))   && (!i_EXU_ready  )&& (i_EXU_rd_data_type != 2'd0);
        wire hazard_mem   = ((i_IDU_rs1 == i_MEM_rd)   || (i_IDU_rs2 == i_MEM_rd))   && (!i_MEM_ready  )&& (i_MEM_rd_data_type != 2'd0);
    assign o_rd_data = (hazard_exu&&i_EXU_rd_data_type==2'd2) ? i_EXU_rd_data : ((hazard_mem&&i_MEM_rd_data_type==2'd2) ? i_MEM_rd_data : 32'b0);
    assign o_bypass  = (hazard_exu&&i_EXU_rd_data_type==2'd2) ? 1'b1 : ((hazard_mem&&i_MEM_rd_data_type==2'd2) ? 1'b1 : 1'b0);
    assign rs1_or_rs2_exu = (i_IDU_rs1 == i_EXU_rd) ? 1'b0 : 1'b1;
    assign rs1_or_rs2_mem = (i_IDU_rs1 == i_MEM_rd) ? 1'b0 : 1'b1;
    assign o_rs1_or_rs2 = (hazard_exu&&i_EXU_rd_data_type==2'd2) ? rs1_or_rs2_exu : rs1_or_rs2_mem;
    assign o_stop_pipe = (hazard_exu&&i_EXU_rd_data_type!=2'd2) 
                        |(hazard_mem&&i_MEM_rd_data_type!=2'd2) ;
endmodule

