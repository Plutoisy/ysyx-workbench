module SRAM (
    input wire clk,
    input wire rst,

    //AR//
    input  [31:0] araddr,
    input         arvalid,
    output        arready,
    //R//
    output [31:0] rdata,
    output [1:0]  rresp,
    output        rvalid,
    input         rready,
    //AW//
    input  [31:0] awaddr,
    input         awvalid,
    output        awready,
    //W//
    input  [31:0] wdata,
    //input  [3:0]  wstrb,
    input         wvalid,
    output        wready,
    //B//
    output [1:0]  bresp,
    output        bvalid,
    input         bready
);
    parameter ysyx_24120011_S_AXI_IDLE  = 3'b000;
    parameter ysyx_24120011_S_AXI_RADDR = 3'b001;
    parameter ysyx_24120011_S_AXI_RDATA = 3'b010;
    parameter ysyx_24120011_S_AXI_WADDR = 3'b011;
    parameter ysyx_24120011_S_AXI_WDATA = 3'b100;
    parameter ysyx_24120011_S_AXI_WRESP = 3'b101;
    parameter ysyx_24120011_S_AXI_RESP_OKAY = 2'b00;

    reg [2:0] state;
    reg [2:0] next_state;
    reg [31:0] addr;

    // AR
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;

	// R
	//assign rdata  = (state == ysyx_24120011_S_AXI_RDATA) ? rtl_pmem_read(addr) : 0;
    always@(*)begin
        if(state == ysyx_24120011_S_AXI_RDATA)begin
            rdata = rtl_pmem_read(addr);
        end
        else begin
            rdata = 0;
        end
    end
	assign rresp  = ysyx_24120011_S_AXI_RESP_OKAY;
	assign rvalid = (state == ysyx_24120011_S_AXI_RDATA) ? 1 : 0;

	// AW
	assign awready = (state == ysyx_24120011_S_AXI_WADDR) ? 1 : 0;

	// W
	assign wready = (state == ysyx_24120011_S_AXI_WDATA) ? 1 : 0;

	// B
	assign bvalid = (state == ysyx_24120011_S_AXI_WRESP) ? 1 : 0;
	assign bresp  = ysyx_24120011_S_AXI_RESP_OKAY;

    always@(posedge clk)begin
        if(rst)begin
            addr <= 32'b0; 
        end
        else begin
            case (state)
				ysyx_24120011_S_AXI_RADDR : addr <= araddr;
				ysyx_24120011_S_AXI_WADDR : addr <= awaddr;
				default : addr <= 32'b0;
			endcase
        end
    end

    // always@(posedge clk)begin
    //     if (state == ysyx_24120011_S_AXI_WDATA) "rtl_pmem_write(addr,wdata)";
    // end

    /* verilator lint_off LATCH */
    always@(*)begin
        case(state)
            ysyx_24120011_S_AXI_IDLE  : next_state = (arvalid) ? ysyx_24120011_S_AXI_RADDR : (awvalid) ? ysyx_24120011_S_AXI_WADDR : ysyx_24120011_S_AXI_IDLE;
			ysyx_24120011_S_AXI_RADDR : if (arvalid && arready) next_state = ysyx_24120011_S_AXI_RDATA;
			ysyx_24120011_S_AXI_RDATA : if (rvalid  && rready ) next_state = ysyx_24120011_S_AXI_IDLE;
			ysyx_24120011_S_AXI_WADDR : if (awvalid && awready) next_state = ysyx_24120011_S_AXI_WDATA;
			ysyx_24120011_S_AXI_WDATA : if (wvalid  && wready ) next_state = ysyx_24120011_S_AXI_WRESP;
			ysyx_24120011_S_AXI_WRESP : if (bvalid  && bready ) next_state = ysyx_24120011_S_AXI_IDLE;
			default : next_state = ysyx_24120011_S_AXI_IDLE;
        endcase
    end
    /* verilator lint_on LATCH */

    always@(posedge clk)begin
        if(rst)begin
            state <= ysyx_24120011_S_AXI_IDLE;
        end
        else begin
            state <= next_state;
        end
    end

endmodule