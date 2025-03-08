module ysyx_24120011_Uart (
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
    input  [3:0]  wstrb,
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

    ysyx_24120011_LFSR i1_LFSR(
        .clk ( clk           ),
        .in  ( LSFR_in       ),
        .out ( random_delay  )
    );

    // AR
	assign arready = (state == ysyx_24120011_S_AXI_RADDR) ? 1 : 0;
	// R
	assign rdata  = rdata_reg;
    assign rresp  = ysyx_24120011_S_AXI_RESP_OKAY;
	assign rvalid = rvalid_reg;
	// AW
	assign awready = (state == ysyx_24120011_S_AXI_WADDR) ? 1 : 0;
	// W
	assign wready = wready_reg;
	// B
	assign bvalid = (state == ysyx_24120011_S_AXI_WRESP) ? 1 : 0;
	assign bresp  = ysyx_24120011_S_AXI_RESP_OKAY;


    /* verilator lint_off LATCH */
    //read_delay
    always@(posedge clk)begin
        if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt != 0)begin
            read_delay_cnt <= read_delay_cnt - 1;
            pmem_readed <= 0;
            //rvalid_reg <= 0;
        end
        else if(state == ysyx_24120011_S_AXI_RDATA && read_delay_cnt == 0 && pmem_readed == 0)begin
            rdata_reg <= rtl_pmem_read(addr);
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
            if(addr == 32'ha00003f8) begin
                if(wstrb == 4'b1111) begin
                    $write("%c", wdata[7:0]);
                end
                else if(wstrb == 4'b0011) begin
                    $write("%c", wdata[7:0]);
                end
                else if(wstrb == 4'b0001) begin
                    $write("%c", {4'b0,wdata[3:0]});
                end
                else ;
            end
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
            //read_delay <= 32'd1;
            //write_delay <= 32'd1;
            LSFR_in <= 8'h01;
        end
        else begin
            state <= next_state;
        end
    end

endmodule