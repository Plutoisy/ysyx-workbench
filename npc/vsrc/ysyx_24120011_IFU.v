module ysyx_24120011_IFU(
    input clk,
    input rst,
    input [31:0] pc,
    output [31:0] inst,
    output IFU_valid
);

SRAMold i_SRAM(
    .clk              ( clk              ),
    .rst              ( rst              ),
    .sram_rd_en       ( 1'b1             ),
    .sram_rd_addr     ( pc               ),
    .sram_rd_data_out ( inst             ),
    .sram_valid       ( IFU_valid        )
);

endmodule