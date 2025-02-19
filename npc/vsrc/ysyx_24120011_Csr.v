module ysyx_24120011_Csr(
    input clk,
    input rst,
    input [11:0] w_csr_addr,
    input [11:0] r_csr_addr,
    input w_csr_en,
    input r_csr_en,
    input w_csr_ecall,
    input [31:0] pc,
    input [31:0] w_csr_data,
    output reg [31:0] r_csr_data
);

reg [31:0] mepc;
reg [31:0] mstatus;
reg [31:0] mcause;
reg [31:0] mtvec; 

always@(posedge clk)begin
    if(rst)begin
        mepc     <= 32'h0000_0000;
        mstatus  <= 32'h0000_0000;
        mcause   <= 32'h0000_0000;
        mtvec    <= 32'h0000_0000;
        r_csr_data   <=  32'b0;
    end
    else begin
        if(w_csr_en)begin
            case(w_csr_addr)
                12'h341: mepc     <= w_csr_data;
                12'h300: mstatus  <= w_csr_data;
                12'h342: mcause   <= w_csr_data;
                12'h305: mtvec    <= w_csr_data;
                default: begin
                    mepc     <=  mepc;     
                    mstatus  <=  mstatus;  
                    mcause   <=  mcause;   
                    mtvec    <=  mtvec;    
                end
            endcase
            r_csr_data   <=  32'b0;
        end
        if(r_csr_en)begin
            case(r_csr_addr)
                12'h341: r_csr_data <= mepc;
                12'h300: r_csr_data <= mstatus;
                12'h342: r_csr_data <= mcause;
                12'h305: r_csr_data <= mtvec;
                default: begin
                    r_csr_data   <=  32'b0;
                end
            endcase
        end
        if(w_csr_ecall)begin
            mepc         <=  pc;     
            mstatus      <=  32'h000b;//11 
            r_csr_data   <=  mtvec;
        end
    end
end
endmodule