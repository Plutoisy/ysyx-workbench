import "DPI-C" function void rtl_pmem_write (input int waddr, input int wdata, input byte len);
import "DPI-C" function int rtl_pmem_read(int raddr);
module ysyx_24120011_MemProcessor(
    input [31:0] waddr,
    input [31:0] raddr,
    input [7:0] w_mem_len,
    input [7:0] r_mem_len,
    input w_mem_en,
    input r_mem_en,
    input sign_extension,
    input [31:0] wdata,
    output reg [31:0] rdata
);
reg [31:0] rdata_tmp;
always@(*)begin
    if(w_mem_en)begin
        rtl_pmem_write(waddr,wdata,w_mem_len);
        rdata_tmp = 32'b00000000;
        rdata = 32'b00000000;
    end
    if(r_mem_en)begin
        rdata_tmp = rtl_pmem_read(raddr);
        if(r_mem_len == 8'd1)begin
            if(sign_extension)begin
                rdata = {{24{rdata_tmp[7]}},rdata_tmp[7:0]};
            end
            else begin
                rdata = {24'b0,rdata_tmp[7:0]};
            end
        end
        if(r_mem_len == 8'd2)begin
            if(sign_extension)begin
                rdata = {{16{rdata_tmp[7]}},rdata_tmp[15:0]};
            end
            else begin
                rdata = {16'b0,rdata_tmp[15:0]};
            end
        end
        if(r_mem_len == 8'd4)begin
            rdata = rdata_tmp;
        end
    end
    else begin
        rdata_tmp = 32'b00000000;
        rdata = 32'b00000000;
    end
end
endmodule