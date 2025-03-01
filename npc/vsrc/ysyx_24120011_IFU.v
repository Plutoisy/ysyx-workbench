module ysyx_24120011_IFU(
    input clk,
    input rst,
    input [31:0] pc,
    output [31:0] inst,
    output IFU_valid
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

SRAM u_SRAM(
    .clk     ( clk     ),
    .rst     ( rst     ),
    .araddr  ( pc      ),
    .arvalid ( 1'b1    ),
    .arready ( arready ),
    .rdata   ( inst    ),
    .rresp   ( rresp   ),
    .rvalid  ( IFU_valid  ),
    .rready  ( 1'b1  ),
    .awaddr  ( 32'b0  ),
    .awvalid ( 1'b0 ),
    .awready ( awready ),
    .wdata   ( 32'b0   ),
    .wstrb   ( 4'b1111 )
    .wvalid  ( 1'b0  ),
    .wready  ( wready  ),
    .bresp   ( bresp   ),
    .bvalid  ( bvalid  ),
    .bready  ( 1'b1  )
);

endmodule