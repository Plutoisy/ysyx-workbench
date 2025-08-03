
module ysyx_24120011_Clint (
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
    //reg [31:0] read_delay;
    reg [7:0] read_delay_cnt;
    //reg [31:0] write_delay;
    reg [7:0] write_delay_cnt;

    reg pmem_readed;
    reg pmem_writed;
    
    reg [7:0] LSFR_in;
    reg [7:0] random_delay;

    reg [31:0] rdata_reg;
    reg rvalid_reg;
    reg wready_reg;
    
    reg [63:0] mtime;
    
    // ysyx_24120011_LFSR i1_LFSR(
    //     .clk ( clk           ),
    //     .in  ( LSFR_in       ),
    //     .out ( random_delay  )
    // );
    assign random_delay = 'd0;
    // AR
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;
	// R
	assign rdata   = rdata_reg;
    assign rresp   = ysyx_24120011_S_AXI_RESP_OKAY;
	assign rvalid  = rvalid_reg;
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


    always@(posedge clk)begin
        if(rst) begin
            mtime <= 64'b0;
        end
        else begin
            mtime <= mtime + 1;
        end
    end

    //read_delay
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt != 0)begin
            read_delay_cnt <= read_delay_cnt - 1;
            pmem_readed <= 0;
            //rvalid_reg <= 0;
        end
        else if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt == 0 && pmem_readed == 0)begin
            if(addr == 32'h02000048) begin
                rdata_reg <= mtime[31:0];
            end
            else if(addr == 32'h0200004c) begin
                rdata_reg <= mtime[63:32];
            end
            else begin
                rdata_reg <= 32'b0;
            end
            //rdata_reg <= rtl_pmem_read(addr);
            pmem_readed <= 1;
            rvalid_reg <= 1;
            //read_delay_cnt <= 32'b11111111111111111111111111111111;
        end
        else if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt == 0 && pmem_readed == 1)begin
            pmem_readed <= 1;
            rvalid_reg <= 1;
        end
        else begin
            pmem_readed <= 0;
            rvalid_reg <= 0;
        end
    end

    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RADDR)begin
            read_delay_cnt <= random_delay;
        end
    end

    //write_delay
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_WDATA && write_delay_cnt != 0)begin
            write_delay_cnt <= write_delay_cnt - 1;
            //wready_reg <= 0;
            pmem_writed <= 0;
        end
        else if(state == ysyx_24120011_S_AXI_WDATA && write_delay_cnt == 0 && pmem_writed == 0)begin
            // if(wstrb == 4'b1111) begin
            //     rtl_pmem_write(addr,wdata,4);
            // end
            // else if(wstrb == 4'b0011) begin
            //     rtl_pmem_write(addr,wdata,2);
            // end
            // else if(wstrb == 4'b0001) begin
            //     rtl_pmem_write(addr,wdata,1);
            // end
            // else ;
            wready_reg <= 1;
            pmem_writed <= 1;
            //write_delay_cnt <= 32'b11111111111111111111111111111111;
        end
        else if(state == ysyx_24120011_S_AXI_WDATA && write_delay_cnt == 0 && pmem_writed == 1)begin
            wready_reg <= 1;
            pmem_writed <= 1;
            //write_delay_cnt <= 32'b11111111111111111111111111111111;
        end
        else begin
            wready_reg <= 0;
            pmem_writed <= 0;
        end
    end

    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_WADDR)begin
            write_delay_cnt <= random_delay;
        end
    end





	

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
			ysyx_24120011_S_AXI_RADDR : next_state = (arvalid && arready) ? ysyx_24120011_S_AXI_RDATA : ysyx_24120011_S_AXI_RADDR;
			ysyx_24120011_S_AXI_RDATA : next_state = (rvalid  && rready ) ? ysyx_24120011_S_AXI_IDLE  : ysyx_24120011_S_AXI_RDATA;
			ysyx_24120011_S_AXI_WADDR : next_state = (awvalid && awready) ? ysyx_24120011_S_AXI_WDATA : ysyx_24120011_S_AXI_WADDR;
			ysyx_24120011_S_AXI_WDATA : next_state = (wvalid  && wready ) ? ysyx_24120011_S_AXI_WRESP : ysyx_24120011_S_AXI_WDATA;
			ysyx_24120011_S_AXI_WRESP : next_state = (bvalid  && bready ) ? ysyx_24120011_S_AXI_IDLE  : ysyx_24120011_S_AXI_WRESP;
			default : next_state = ysyx_24120011_S_AXI_IDLE;
        endcase
    end

    always@(posedge clk)begin
        if(rst)begin
            state <= ysyx_24120011_S_AXI_IDLE;
            //read_delay <= 32'd1;
            //write_delay <= 32'd1;
            LSFR_in <= 8'h01;
        end
        else begin
            state <= next_state;
        end
    end

endmodule