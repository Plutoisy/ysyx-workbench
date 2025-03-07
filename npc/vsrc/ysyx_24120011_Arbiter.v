module ysyx_24120011_Arbiter (
    input clk,
    input rst,
    //============M0=============//        
    //AR
    input  [31:0]     M0_araddr,
    input             M0_arvalid,
    output            M0_arready,
    //R               
    output reg [31:0] M0_rdata,
    output [1:0]      M0_rresp,
    output reg        M0_rvalid,
    input             M0_rready,
    //AW
    input  [31:0]     M0_awaddr,
    input             M0_awvalid,
    output            M0_awready,
    //W
    input  [31:0]     M0_wdata,
    input  [3:0]      M0_wstrb,
    input             M0_wvalid,
    output reg        M0_wready,
    //B
    output [1:0]      M0_bresp,
    output            M0_bvalid,
    input             M0_bready,
    //============M1=============//         
    //AR
    input  [31:0]     M1_araddr,
    input             M1_arvalid,
    output            M1_arready,
    //R               
    output reg [31:0] M1_rdata,
    output [1:0]      M1_rresp,
    output reg        M1_rvalid,
    input             M1_rready,
    //AW
    input  [31:0]     M1_awaddr,
    input             M1_awvalid,
    output            M1_awready,
    //W
    input  [31:0]     M1_wdata,
    input  [3:0]      M1_wstrb,
    input             M1_wvalid,
    output reg        M1_wready,
    //B
    output [1:0]      M1_bresp,
    output            M1_bvalid,
    input             M1_bready,
    //============S1=============// 
    //AR
    output  [31:0]    S0_araddr,
    output            S0_arvalid,
    input             S0_arready,
    //R                
    input reg [31:0]  S0_rdata,
    input [1:0]       S0_rresp,
    input reg         S0_rvalid,
    output            S0_rready,
    //AW 
    output  [31:0]    S0_awaddr,
    output            S0_awvalid,
    input             S0_awready,
    //W 
    output  [31:0]    S0_wdata,
    output  [3:0]     S0_wstrb,
    output            S0_wvalid,
    input reg         S0_wready,
    //B 
    input [1:0]       S0_bresp,
    input             S0_bvalid,
    output            S0_bready,
);

    parameter ysyx_24120011_Arbiter_IDLE = 3'b000;
    parameter ysyx_24120011_Arbiter_M0 = 3'b001;
    parameter ysyx_24120011_Arbiter_M1 = 3'b010;

    reg [2:0] read_state;
    reg [2:0] read_next_state;
    reg [2:0] write_state;
    reg [2:0] write_next_state;

    reg [2:0] last_read_master;
    reg [2:0] last_write_master;

    wire read_done;
    wire write_done;

    wire [2:0] read_choose;
    wire [2:0] write_choose;

    assign read_done = S0_rready && S0_rvalid;
    assign write_done = S0_bready && S0_bvalid;

    assign S0_araddr  = (read_state == ysyx_24120011_Arbiter_M0 ? M0_araddr :
                       (read_state == ysyx_24120011_Arbiter_M1 ? M1_araddr : 32'b0))
    assign S0_arvalid = (read_state == ysyx_24120011_Arbiter_M0 ? M0_arvalid :
                       (read_state == ysyx_24120011_Arbiter_M1 ? M1_arvalid : 32'b0))
    assign S0_arready = (read_state == ysyx_24120011_Arbiter_M0 ? M0_arready :
                       (read_state == ysyx_24120011_Arbiter_M1 ? M1_arready : 32'b0))
    assign S0_arready = (read_state == ysyx_24120011_Arbiter_M0 ? M0_arready :
                       (read_state == ysyx_24120011_Arbiter_M1 ? M1_arready : 32'b0))
    /* verilator lint_off LATCH */
    //状态跳转
    always@(posedge clk)begin
        if(rst)begin
            read_state <= ysyx_24120011_Arbiter_IDLE;
            write_state <= ysyx_24120011_Arbiter_IDLE;
        end
        else begin
            read_state <= read_next_state;
            write_state <= write_next_state;
        end
    end
    //保存上一次连通的主机
    always@(posedge clk)begin
        if(rst)begin
            last_read_master <= 3'd1;//use highest index to start from M0
            last_read_master <= 3'd1;//use highest index to start from M0
        end
        else begin
            if (write_done) begin
                if (write_state == ysyx_24120011_Arbiter_M0)
                    last_write_master <= 1'b0;
                else if (write_state == ysyx_24120011_Arbiter_M1)
                    last_write_master <= 1'b1;
            end
            if (read_done) begin
                if (read_state == ysyx_24120011_Arbiter_M0)
                    last_read_master <= 1'b0;
                else if (read_state == ysyx_24120011_Arbiter_M1)
                    last_read_master <= 1'b1;
            end
        end
    end
    //next_state切换
    always@(*)begin
        case(read_state)
            ysyx_24120011_Arbiter_IDLE:begin
                if(last_read_master == 3'd1)begin
                    if(M0_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        read_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
                else if(last_read_master == 3'd0)begin
                    if(M1_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else if(M0_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else begin
                        read_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            ysyx_24120011_Arbiter_M0:begin
                if(read_done)begin
                    if(M1_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else if(M0_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else begin
                        read_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            ysyx_24120011_Arbiter_M1:begin
                if(read_done)begin
                    if(M0_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_arvalid)begin
                        read_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        read_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            default:read_next_state = ysyx_24120011_Arbiter_IDLE;
        endcase
        case(write_state)
            ysyx_24120011_Arbiter_IDLE:begin
                if(last_write_master == 3'd1)begin
                    if(M0_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        write_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
                else if(last_write_master == 3'd0)begin
                    if(write_done) begin
                        if(M1_awvalid)begin
                            write_next_state = ysyx_24120011_Arbiter_M1;
                        end
                        else if(M0_awvalid)begin
                            write_next_state = ysyx_24120011_Arbiter_M0;
                        end
                        else begin
                            write_next_state = ysyx_24120011_Arbiter_IDLE;
                        end
                    end
                end
            end
            ysyx_24120011_Arbiter_M0:begin
                if(write_done) begin
                    if(M1_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else if(M0_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else begin
                        write_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            ysyx_24120011_Arbiter_M1:begin
                if(write_done) begin
                    if(M0_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M0;
                    end
                    else if(M1_awvalid)begin
                        write_next_state = ysyx_24120011_Arbiter_M1;
                    end
                    else begin
                        write_next_state = ysyx_24120011_Arbiter_IDLE;
                    end
                end
            end
            default:write_next_state = ysyx_24120011_Arbiter_IDLE;
        endcase
    end
    /* verilator lint_on LATCH */
endmodule