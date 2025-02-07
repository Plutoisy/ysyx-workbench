import "DPI-C" function void rtl_pmem_write (input int w_mem_addr, input int w_mem_data, input byte w_mem_len);
import "DPI-C" function int rtl_pmem_read(int r_mem_addr);
module ysyx_24120011_MemProcessor(
    input [31:0] w_mem_addr,
    input [31:0] r_mem_addr,
    input [7:0] w_mem_len,
    input [7:0] r_mem_len,
    input w_mem_en,
    input r_mem_en,
    input sign_extension,
    input [31:0] w_mem_data,
    output reg [31:0] r_mem_data
);
reg [31:0] r_mem_data_tmp;
always@(*)begin
    if(w_mem_en)begin
        rtl_pmem_write(w_mem_addr,w_mem_data,w_mem_len);
        r_mem_data_tmp = 32'b00000000;
        r_mem_data = 32'b00000000;
    end
    else begin
        r_mem_data_tmp = 32'b00000000;
        r_mem_data = 32'b00000000;
    end
    if(r_mem_en)begin
        r_mem_data_tmp = rtl_pmem_read(r_mem_addr);
        if(r_mem_len == 8'd1)begin
            if(sign_extension)begin
                r_mem_data = {{24{r_mem_data_tmp[7]}},r_mem_data_tmp[7:0]};
            end
            else begin
                r_mem_data = {24'b0,r_mem_data_tmp[7:0]};
            end
        end
        if(r_mem_len == 8'd2)begin
            if(sign_extension)begin
                r_mem_data = {{16{r_mem_data_tmp[7]}},r_mem_data_tmp[15:0]};
            end
            else begin
                r_mem_data = {16'b0,r_mem_data_tmp[15:0]};
            end
        end
        if(r_mem_len == 8'd4)begin
            r_mem_data = r_mem_data_tmp;
        end
    end
    else begin
        r_mem_data_tmp = 32'b00000000;
        r_mem_data = 32'b00000000;
    end
end
endmodule