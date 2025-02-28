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
    output LSU_valid
);

reg [31:0] r_mem_data_tmp;
reg LSU_valid_tmp;

SRAMold i_SRAMold(
    .clk              ( clk              ),
    .rst              ( rst              ),
    .sram_rd_en       ( r_mem_en         ),      
    .sram_rd_addr     ( r_mem_addr       ),
    .sram_rd_data_out ( r_mem_data_tmp   ),
    .sram_valid       ( LSU_valid_tmp    )
);



always@(posedge clk)begin
    if(w_mem_en && !r_mem_en)begin
        rtl_pmem_write(w_mem_addr,w_mem_data,w_mem_len);
        if(IFU_valid) begin
            LSU_valid = 1'b1;
        end
        else begin
            LSU_valid = 1'b0;
        end
        //r_mem_data_tmp = 32'b00000000;
        //r_mem_data = 32'b00000000;
    end
    
    else if(r_mem_en && !w_mem_en)begin
        //r_mem_data_tmp = rtl_pmem_read(r_mem_addr);
        if(IFU_valid) begin
            LSU_valid = LSU_valid_tmp;
        end
        else begin
            LSU_valid = 1'b0;
        end
        if(r_mem_len == 8'd1)begin
            if(sign_extension)begin
                r_mem_data = {{24{r_mem_data_tmp[7]}},r_mem_data_tmp[7:0]};
            end
            else begin
                r_mem_data = {24'b0,r_mem_data_tmp[7:0]};
            end
        end
        else if(r_mem_len == 8'd2)begin
            if(sign_extension)begin
                r_mem_data = {{16{r_mem_data_tmp[15]}},r_mem_data_tmp[15:0]};
            end
            else begin
                r_mem_data = {16'b0,r_mem_data_tmp[15:0]};
            end
        end
        else if(r_mem_len == 8'd4)begin
            r_mem_data = r_mem_data_tmp;
        end

        else begin//shouldn't in
            r_mem_data = 32'b11111111;
        end
    end

    else begin
        if(IFU_valid) begin
            LSU_valid = 1'b1;
        end
        else begin
            LSU_valid = 1'b0;
        end
        //r_mem_data_tmp = 32'b11111111;
        //r_mem_data = 32'b11111111;
    end
end
endmodule