module ysyx_24120011_IFU(
    input LSU_valid,
    input clk,
    input rst,
    input [31:0] pc,
    output [31:0] inst,
    output IFU_valid
);

SRAM i_SRAM(
    .clk              ( clk              ),
    .rst              ( rst              ),
    .en               ( LSU_valid        ),
    .sram_rd_addr     ( pc               ),
    .sram_rd_data_out ( inst             ),
    .sram_valid       ( IFU_valid        )
);

endmodule