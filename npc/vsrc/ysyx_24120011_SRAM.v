module SRAM (
    input wire clk,
    input wire rst,

    //AR//
    input  [31:0] araddr,
    input         arvalid,
    output        arready,
    //R//
    output reg [31:0] rdata,
    output [1:0]  rresp,
    output reg       rvalid,
    input         rready,
    //AW//
    input  [31:0] awaddr,
    input         awvalid,
    output        awready,
    //W//
    input  [31:0] wdata,
    input  [3:0]  wstrb,
    input         wvalid,
    output reg      wready,
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
    reg [31:0] read_delay;
    reg [31:0] read_delay_cnt;
    reg [31:0] write_delay;
    reg [31:0] write_delay_cnt;

    reg pmem_readed;

    // AR
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;

	// R
	//assign rdata  = (state == ysyx_24120011_S_AXI_RDATA) ? rtl_pmem_read(addr) : 0;

    /* verilator lint_off LATCH */
    //read_delay
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt != 32'd0)begin
            read_delay_cnt <= read_delay_cnt - 1;
            pmem_readed <= 0;
            //rvalid <= 0;
        end
        else if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt == 32'd0 && pmem_readed == 0)begin
            rdata <= rtl_pmem_read(addr);
            pmem_readed <= 1;
            rvalid <= 1;
            //read_delay_cnt <= 32'b11111111111111111111111111111111;
        end
        else begin
            pmem_readed <= 0;
            rvalid <= 0;
        end
    end

    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RADDR)begin
            read_delay_cnt <= read_delay;
        end
    end

    //write_delay
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_WDATA && write_delay_cnt != 32'd0)begin
            write_delay_cnt <= write_delay_cnt - 1;
            //wready <= 0;
        end
        else if(state == ysyx_24120011_S_AXI_WDATA && write_delay_cnt == 32'd0)begin
            if(wstrb == 4'b1111) begin
                rtl_pmem_write(addr,wdata,4);
            end
            else if(wstrb == 4'b0011) begin
                rtl_pmem_write(addr,wdata,2);
            end
            else if(wstrb == 4'b0001) begin
                rtl_pmem_write(addr,wdata,1);
            end
            else ;
            wready <= 1;
            //write_delay_cnt <= 32'b11111111111111111111111111111111;
        end
        else begin
            wready <= 0;
        end
    end

    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_WADDR)begin
            write_delay_cnt <= write_delay;
        end
    end





	assign rresp  = ysyx_24120011_S_AXI_RESP_OKAY;
	//assign rvalid = (state == ysyx_24120011_S_AXI_RDATA) ? 1 : 0;

	// AW
	assign awready = (state == ysyx_24120011_S_AXI_WADDR) ? 1 : 0;

	// W
	//assign wready = (state == ysyx_24120011_S_AXI_WDATA) ? 1 : 0;

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
				default : addr <= addr;
			endcase
        end
    end

    // always@(posedge clk)begin
    //     if (state == ysyx_24120011_S_AXI_WDATA) begin
    //         if(wstrb == 4'b1111) begin
    //             rtl_pmem_write(addr,wdata,4);
    //         end
    //         else if(wstrb == 4'b0011) begin
    //             rtl_pmem_write(addr,wdata,2);
    //         end
    //         else if(wstrb == 4'b0001) begin
    //             rtl_pmem_write(addr,wdata,1);
    //         end
    //         else ;
    //     end
    // end

    
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
            read_delay <= 32'd2;
            write_delay <= 32'd9;
        end
        else begin
            state <= next_state;
        end
    end

endmodule