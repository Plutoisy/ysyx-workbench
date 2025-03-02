import "DPI-C" function void rtl_pmem_write (input int w_mem_addr, input int w_mem_data, input byte w_mem_len);
import "DPI-C" function int rtl_pmem_read(int r_mem_addr);
module ysyx_24120011_LSU(
    input clk,
    input rst,
    input IFU_valid,
    input [31:0] w_mem_addr,
    input [31:0] r_mem_addr,
    input [7:0] w_mem_len,
    input [7:0] r_mem_len,
    input w_mem_en,
    input r_mem_en,
    input sign_extension,
    input [31:0] w_mem_data,
    output reg [31:0] r_mem_data,
    output reg LSU_valid,
    output reg LSU_ready
);

    SRAM u_SRAM(
        .clk     ( clk     ),
        .rst     ( rst     ),
        .araddr  ( araddr  ),
        .arvalid ( arvalid ),
        .arready ( arready ),
        .rdata   ( rdata   ),
        .rresp   ( rresp   ),
        .rvalid  ( rvalid  ),
        .rready  ( rready  ),
        .awaddr  ( awaddr  ),
        .awvalid ( awvalid ),
        .awready ( awready ),
        .wdata   ( wdata   ),
        .wstrb   ( wstrb   ),
        .wvalid  ( wvalid  ),
        .wready  ( wready  ),
        .bresp   ( bresp   ),
        .bvalid  ( bvalid  ),
        .bready  ( bready  )
    );

    parameter ysyx_24120011_M_AXI_IDLE  = 3'b000;
    parameter ysyx_24120011_M_AXI_RADDR = 3'b001;
    parameter ysyx_24120011_M_AXI_RDATA = 3'b010;
    parameter ysyx_24120011_M_AXI_WADDR = 3'b011;
    parameter ysyx_24120011_M_AXI_WDATA = 3'b100;
    parameter ysyx_24120011_M_AXI_WRESP = 3'b101;
    parameter ysyx_24120011_M_AXI_RESP_OKAY = 2'b00;

    reg [2:0] state;
    reg [2:0] next_state;
    reg start_read_delay;
    reg start_write_delay;

    wire [31:0] araddr;
    wire arvalid;
    wire arready;
    wire rready;
    wire [1:0] rresp;
    wire rvalid;
    wire awvalid;
    wire awready;
    wire [31:0] awaddr;
    wire wvalid;
    wire wready;
    wire [31:0] wdata;
    wire [1:0] bresp;
    wire [3:0] wstrb;
    wire bready;
    wire [31:0] rdata;
    wire bvalid;
    wire LSU_working;
    //assign LSU_valid = (state == ysyx_24120011_M_AXI_RDATA || state == ysyx_24120011_M_AXI_WRESP) ? 1 : 0;
    assign LSU_working = (state == ysyx_24120011_M_AXI_IDLE) ? 0 : 1;
    //AR
    assign araddr = (state == ysyx_24120011_M_AXI_RADDR) ? r_mem_addr : 32'b0;
    assign arvalid = (state == ysyx_24120011_M_AXI_RADDR) ? 1 : 0;

    //R
    assign rready = (state == ysyx_24120011_M_AXI_RDATA) ? 1 : 0;

    //AW
    assign awvalid = (state == ysyx_24120011_M_AXI_WADDR) ? 1 : 0;
    assign awaddr = (state == ysyx_24120011_M_AXI_WADDR) ? w_mem_addr : 32'b0;

    //W
    assign wvalid = (state == ysyx_24120011_M_AXI_WDATA) ? 1 : 0;
    assign wdata = (state == ysyx_24120011_M_AXI_WDATA) ? w_mem_data : 32'b0;
    assign wstrb = (w_mem_len == 8'd4) ? 
                    4'b1111 :
                    ((w_mem_len == 8'd2) ? 4'b0011 : 4'b0001);
    //B
    assign bready = (state == ysyx_24120011_M_AXI_WRESP) ? 1 : 0;

/* verilator lint_off LATCH */
    always@(posedge clk)begin
        if(w_mem_en == 1 || r_mem_en == 1) LSU_ready <= 1'b0;
        else if(next_state == ysyx_24120011_M_AXI_IDLE) LSU_ready <= 1'b1;
    end
    always@(posedge clk)begin
        if(IFU_valid)begin
            if(LSU_working == 0 && (w_mem_en == 0 && r_mem_en == 0) )begin
                LSU_valid <= 1;
            end
        end
        else begin
            if(LSU_working == 1 && next_state == ysyx_24120011_M_AXI_IDLE)begin
                LSU_valid <= 1;
            end
            else begin
                LSU_valid <= 0;
            end
        end
    end

    always@(posedge clk)begin
        if(rst) begin
            r_mem_data <= 32'b0;
        end
        else begin
            if(state == ysyx_24120011_M_AXI_RDATA) begin
                if(r_mem_len == 8'd1)begin
                    if(sign_extension)begin
                        r_mem_data <= {{24{rdata[7]}},rdata[7:0]};
                    end
                    else begin
                        r_mem_data <= {24'b0,rdata[7:0]};
                    end
                end
                else if(r_mem_len == 8'd2)begin
                    if(sign_extension)begin
                        r_mem_data <= {{16{rdata[15]}},rdata[15:0]};
                    end
                    else begin
                        r_mem_data <= {16'b0,rdata[15:0]};
                    end
                end
                else if(r_mem_len == 8'd4)begin
                    r_mem_data <= rdata;
                end
                else begin//shouldn't in
                    r_mem_data <= 32'b11111111;
                end
            end
        end
    end

    always@(posedge clk)begin
        if(rst) begin
            start_read_delay <= 0;
            start_write_delay <= 0;
        end
        else begin
            start_read_delay <= r_mem_en;
            start_write_delay <= w_mem_en;
        end
    end

    always@(*)begin
        case(state)
            ysyx_24120011_M_AXI_IDLE: next_state = (start_read_delay) ? 
                                                    ysyx_24120011_M_AXI_RADDR : 
                                                    ((start_write_delay) ? ysyx_24120011_M_AXI_WADDR : ysyx_24120011_M_AXI_IDLE);
            ysyx_24120011_M_AXI_RADDR: if (arvalid && arready) next_state = ysyx_24120011_M_AXI_RDATA;
            ysyx_24120011_M_AXI_RDATA: if (rvalid  && rready ) next_state = ysyx_24120011_M_AXI_IDLE;
            ysyx_24120011_M_AXI_WADDR: if (awvalid && awready) next_state = ysyx_24120011_M_AXI_WDATA;
            ysyx_24120011_M_AXI_WDATA: if (wvalid  && wready ) next_state = ysyx_24120011_M_AXI_WRESP;
            ysyx_24120011_M_AXI_WRESP: if (bvalid  && bready ) next_state = ysyx_24120011_M_AXI_IDLE;
            default : next_state = ysyx_24120011_M_AXI_IDLE;
        endcase
    end

    always@(posedge clk)begin
        if(rst) begin
            state <= ysyx_24120011_M_AXI_IDLE;
        end
        else begin
            state <= next_state;
        end
    end
/* verilator lint_on LATCH */

// always@(posedge clk)begin
//     if(w_mem_en && !r_mem_en)begin
//         rtl_pmem_write(w_mem_addr,w_mem_data,w_mem_len);
//         if(IFU_valid) begin
//             LSU_valid = 1'b1;
//         end
//         else begin
//             LSU_valid = 1'b0;
//         end
//         //r_mem_data_tmp = 32'b00000000;
//         //r_mem_data = 32'b00000000;
//     end
    
//     else if(r_mem_en && !w_mem_en)begin
//         //r_mem_data_tmp = rtl_pmem_read(r_mem_addr);
//         if(IFU_valid) begin
//             LSU_valid = LSU_valid_tmp;
//         end
//         else begin
//             LSU_valid = 1'b0;
//         end
//         if(r_mem_len == 8'd1)begin
//             if(sign_extension)begin
//                 r_mem_data = {{24{r_mem_data_tmp[7]}},r_mem_data_tmp[7:0]};
//             end
//             else begin
//                 r_mem_data = {24'b0,r_mem_data_tmp[7:0]};
//             end
//         end
//         else if(r_mem_len == 8'd2)begin
//             if(sign_extension)begin
//                 r_mem_data = {{16{r_mem_data_tmp[15]}},r_mem_data_tmp[15:0]};
//             end
//             else begin
//                 r_mem_data = {16'b0,r_mem_data_tmp[15:0]};
//             end
//         end
//         else if(r_mem_len == 8'd4)begin
//             r_mem_data = r_mem_data_tmp;
//         end

//         else begin//shouldn't in
//             r_mem_data = 32'b11111111;
//         end
//     end

//     else begin
//         if(IFU_valid) begin
//             LSU_valid = 1'b1;
//         end
//         else begin
//             LSU_valid = 1'b0;
//         end
//         //r_mem_data_tmp = 32'b11111111;
//         //r_mem_data = 32'b11111111;
//     end
// end
endmodule