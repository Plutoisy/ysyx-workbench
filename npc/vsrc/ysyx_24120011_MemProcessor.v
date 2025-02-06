import "DPI-C" function void rtl_pmem_write (input int waddr, input int wdata, input byte len);
module ysyx_24120011_MemProcessor(
    input [31:0] waddr,
    input [7:0] w_mem_len,
    input w_mem_en,
    input [31:0] wdata
);
always@(*)begin
    if(w_mem_en)begin
        rtl_pmem_write(waddr,wdata,w_mem_len);
    end
end
endmodule