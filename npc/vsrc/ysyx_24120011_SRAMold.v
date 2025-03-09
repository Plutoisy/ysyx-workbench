`timescale 1ns/1ps
module SRAMold (
    input wire clk,
    input wire rst,
    input wire sram_rd_en,
    input wire [31:0] sram_rd_addr,
    output reg [31:0] sram_rd_data_out,
    output reg sram_valid
);

    reg read_request;

    always @(posedge clk) begin
        if (rst) begin
            sram_rd_data_out <= 32'b0;
            sram_valid <= 1'b0;
            read_request <= 1'b0;
        end else begin
            if(sram_rd_en) begin
                if (read_request) begin
                    sram_valid <= 1'b0;
                    read_request <= 1'b0;
                end else begin
                    sram_rd_data_out <= rtl_pmem_read(sram_rd_addr);
                    sram_valid <= 1'b1;
                    read_request <= 1'b1;
                end
            end
        end
    end

endmodule