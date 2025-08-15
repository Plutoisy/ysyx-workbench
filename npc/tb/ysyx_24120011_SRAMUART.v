module ysyx_24120011_SRAMUART (
    input wire clk,
    input wire rst,

    //AR-axi4lite
    input  [31:0]     araddr,
    input             arvalid,
    output            arready,
    //AR-axi4
    input  [3:0]      arid,
    input  [7:0]      arlen,
    input  [2:0]      arsize,
    input  [1:0]      arburst,
    //R-axi4lite               
    output [31:0]     rdata,
    output [1:0]      rresp,
    output            rvalid,
    input             rready,
    //R-axi4
    output            rlast,
    output [3:0]      rid,
    //AW-axi4lite
    input  [31:0]     awaddr,
    input             awvalid,
    output            awready,
    //AW-axi4
    input  [3:0]      awid,
    input  [7:0]      awlen,
    input  [2:0]      awsize,
    input  [1:0]      awburst,
    //W-axi4lite
    input  [31:0]     wdata,
    input  [3:0]      wstrb,
    input             wvalid,
    output            wready,
    //W-axi4
    input             wlast,
    //B-axi4lite
    output [1:0]      bresp,
    output            bvalid,
    input             bready,
    //B-axi4
    output [3:0]	  bid
);
    reg [7:0] sram [2^26-1:0];

    parameter ysyx_24120011_S_AXI_IDLE  = 3'b000;
    parameter ysyx_24120011_S_AXI_RADDR = 3'b001;
    parameter ysyx_24120011_S_AXI_RDATA = 3'b010;
    parameter ysyx_24120011_S_AXI_WADDR = 3'b011;
    parameter ysyx_24120011_S_AXI_WDATA = 3'b100;
    parameter ysyx_24120011_S_AXI_WRESP = 3'b101;
    parameter ysyx_24120011_S_AXI_RESP_OKAY = 2'b00;

    reg [2:0] state;
    reg [2:0] next_state;
    reg wready_reg;

    // AR
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;
	// R
	assign rdata   = {sram[araddr+0-32'h80000000],sram[araddr+1-32'h80000000],sram[araddr+2-32'h80000000],sram[araddr+4-32'h80000000]};
    assign rresp   = ysyx_24120011_S_AXI_RESP_OKAY;
	assign rvalid  = (state == ysyx_24120011_S_AXI_RDATA) ? 1 : 0;
    assign rid     = 'd0;
    assign rlast   = rvalid;
	// AW 
	assign awready = (state == ysyx_24120011_S_AXI_WADDR) ? 1 : 0;
	// W 
	assign wready  = wready_reg;
	// B 
	assign bvalid  = (state == ysyx_24120011_S_AXI_WRESP) ? 1 : 0;
	assign bresp   = ysyx_24120011_S_AXI_RESP_OKAY;
    assign bid     = 'd0;

    initial $readmemh("/home/plutoisy/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.txt", sram, 0, 2^26-1);

    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_WADDR)begin
            if(awaddr == 32'ha00003f8) begin
                $write("%c", wdata[7:0]);
            end
            else begin
                if(wstrb == 4'b1111) begin
                    sram[awaddr+0-32'h80000000] <= wdata[31:24];
                    sram[awaddr+1-32'h80000000] <= wdata[23:16];
                    sram[awaddr+2-32'h80000000] <= wdata[15:8];
                    sram[awaddr+3-32'h80000000] <= wdata[7:0];
                end
                else if(wstrb == 4'b0011) begin
                    sram[awaddr+2-32'h80000000] <= wdata[15:8];
                    sram[awaddr+3-32'h80000000] <= wdata[7:0];
                end
                else if(wstrb == 4'b0001) begin
                    sram[awaddr+3-32'h80000000] <= wdata[7:0];
                end
            end
            wready_reg <= 1;
        end
        else begin
            wready_reg <= 0;
        end
    end

    always@(*)begin
        case(state)
            ysyx_24120011_S_AXI_IDLE  : next_state = (arvalid) ? ysyx_24120011_S_AXI_RADDR : (awvalid) ? ysyx_24120011_S_AXI_WADDR : ysyx_24120011_S_AXI_IDLE;
			ysyx_24120011_S_AXI_RADDR :  next_state = (arvalid && arready) ? ysyx_24120011_S_AXI_RDATA : ysyx_24120011_S_AXI_RADDR;
			ysyx_24120011_S_AXI_RDATA :  next_state = (rvalid  && rready ) ? ysyx_24120011_S_AXI_IDLE  : ysyx_24120011_S_AXI_RDATA;
			ysyx_24120011_S_AXI_WADDR :  next_state = (awvalid && awready) ? ysyx_24120011_S_AXI_WRESP : ysyx_24120011_S_AXI_WADDR;
			//ysyx_24120011_S_AXI_WDATA :  next_state = (wvalid  && wready ) ? ysyx_24120011_S_AXI_WRESP : ysyx_24120011_S_AXI_WDATA;
			ysyx_24120011_S_AXI_WRESP :  next_state = (bvalid  && bready ) ? ysyx_24120011_S_AXI_IDLE  : ysyx_24120011_S_AXI_WRESP;
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