module ysyx_24120011_Xbar(
    input clk,
    input rst,
    //============Xbar=============//        
    //AR
    input  [31:0]     Xbar_araddr,
    input             Xbar_arvalid,
    output            Xbar_arready,
    //R               
    output [31:0]     Xbar_rdata,
    output [1:0]      Xbar_rresp,
    output            Xbar_rvalid,
    input             Xbar_rready,
    //AW
    input  [31:0]     Xbar_awaddr,
    input             Xbar_awvalid,
    output            Xbar_awready,
    //W
    input  [31:0]     Xbar_wdata,
    input  [3:0]      Xbar_wstrb,
    input             Xbar_wvalid,
    output            Xbar_wready,
    //B
    output [1:0]      Xbar_bresp,
    output            Xbar_bvalid,
    input             Xbar_bready,
    //============S0=============// 
    //AR
    output [31:0]     Xbar_S0_araddr,
    output            Xbar_S0_arvalid,
    input             Xbar_S0_arready,
    //R                
    input  [31:0]     Xbar_S0_rdata,
    input  [1:0]      Xbar_S0_rresp,
    input             Xbar_S0_rvalid,
    output            Xbar_S0_rready,
    //AW 
    output [31:0]     Xbar_S0_awaddr,
    output            Xbar_S0_awvalid,
    input             Xbar_S0_awready,
    //W 
    output [31:0]     Xbar_S0_wdata,
    output [3:0]      Xbar_S0_wstrb,
    output            Xbar_S0_wvalid,
    input             Xbar_S0_wready,
    //B 
    input [1:0]       Xbar_S0_bresp,
    input             Xbar_S0_bvalid,
    output            Xbar_S0_bready,
    //============S1=============// 
    //AR
    output [31:0]     Xbar_S1_araddr,
    output            Xbar_S1_arvalid,
    input             Xbar_S1_arready,
    //R                
    input  [31:0]     Xbar_S1_rdata,
    input  [1:0]      Xbar_S1_rresp,
    input             Xbar_S1_rvalid,
    output            Xbar_S1_rready,
    //AW 
    output [31:0]     Xbar_S1_awaddr,
    output            Xbar_S1_awvalid,
    input             Xbar_S1_awready,
    //W 
    output [31:0]     Xbar_S1_wdata,
    output [3:0]      Xbar_S1_wstrb,
    output            Xbar_S1_wvalid,
    input             Xbar_S1_wready,
    //B 
    input [1:0]       Xbar_S1_bresp,
    input             Xbar_S1_bvalid,
    output            Xbar_S1_bready,
    //============S2=============// 
    //AR
    output [31:0]     Xbar_S2_araddr,
    output            Xbar_S2_arvalid,
    input             Xbar_S2_arready,
    //R                
    input  [31:0]     Xbar_S2_rdata,
    input  [1:0]      Xbar_S2_rresp,
    input             Xbar_S2_rvalid,
    output            Xbar_S2_rready,
    //AW 
    output [31:0]     Xbar_S2_awaddr,
    output            Xbar_S2_awvalid,
    input             Xbar_S2_awready,
    //W 
    output [31:0]     Xbar_S2_wdata,
    output [3:0]      Xbar_S2_wstrb,
    output            Xbar_S2_wvalid,
    input             Xbar_S2_wready,
    //B 
    input [1:0]       Xbar_S2_bresp,
    input             Xbar_S2_bvalid,
    output            Xbar_S2_bready
);
    parameter ysyx_24120011_Xbar_IDLE = 3'b000;
    parameter ysyx_24120011_Xbar_S0 = 3'b001;
    parameter ysyx_24120011_Xbar_S1 = 3'b010;
    parameter ysyx_24120011_Xbar_S2 = 3'b011;

    reg [2:0] r_Xbar_state;
    reg [2:0] r_Xbar_next_state;
    reg [2:0] w_Xbar_state;
    reg [2:0] w_Xbar_next_state;

    reg [31:0] reg_Xbar_rdata     ;
    reg [1:0]  reg_Xbar_rresp     ;
    reg        reg_Xbar_rvalid    ;
    reg        reg_Xbar_awready   ;
    reg        reg_Xbar_wready    ;
    reg [1:0]  reg_Xbar_bresp     ;
    reg        reg_Xbar_bvalid    ;
    reg        reg_Xbar_arready   ;

    reg [31:0] reg_Xbar_S0_araddr ;
    reg        reg_Xbar_S0_arvalid;
    reg        reg_Xbar_S0_rready ;
    reg [31:0] reg_Xbar_S0_awaddr ;
    reg        reg_Xbar_S0_awvalid;
    reg [31:0] reg_Xbar_S0_wdata  ;
    reg [3:0]  reg_Xbar_S0_wstrb  ;
    reg        reg_Xbar_S0_wvalid ;
    reg        reg_Xbar_S0_bready ;

    reg [31:0] reg_Xbar_S1_araddr ;
    reg        reg_Xbar_S1_arvalid;
    reg        reg_Xbar_S1_rready ;
    reg [31:0] reg_Xbar_S1_awaddr ;
    reg        reg_Xbar_S1_awvalid;
    reg [31:0] reg_Xbar_S1_wdata  ;
    reg [3:0]  reg_Xbar_S1_wstrb  ;
    reg        reg_Xbar_S1_wvalid ;
    reg        reg_Xbar_S1_bready ;
    
    reg [31:0] reg_Xbar_S2_araddr ;
    reg        reg_Xbar_S2_arvalid;
    reg        reg_Xbar_S2_rready ;
    reg [31:0] reg_Xbar_S2_awaddr ;
    reg        reg_Xbar_S2_awvalid;
    reg [31:0] reg_Xbar_S2_wdata  ;
    reg [3:0]  reg_Xbar_S2_wstrb  ;
    reg        reg_Xbar_S2_wvalid ;
    reg        reg_Xbar_S2_bready ;
    
    

    wire read_S0_done;
    wire write_S0_done;
    wire read_S1_done;
    wire write_S1_done;
    wire read_S2_done;
    wire write_S2_done;

    assign read_S0_done = Xbar_S0_rready && Xbar_S0_rvalid;
    assign write_S0_done = Xbar_S0_bready && Xbar_S0_bvalid;
    assign read_S1_done = Xbar_S1_rready && Xbar_S1_rvalid;
    assign write_S1_done = Xbar_S1_bready && Xbar_S1_bvalid;
    assign read_S2_done = Xbar_S2_rready && Xbar_S2_rvalid;
    assign write_S2_done = Xbar_S2_bready && Xbar_S2_bvalid;

    
    assign Xbar_rdata      = reg_Xbar_rdata     ;
    assign Xbar_rresp      = reg_Xbar_rresp     ;
    assign Xbar_rvalid     = reg_Xbar_rvalid    ;
    assign Xbar_awready    = reg_Xbar_awready   ;
    assign Xbar_wready     = reg_Xbar_wready    ;
    assign Xbar_bresp      = reg_Xbar_bresp     ;
    assign Xbar_bvalid     = reg_Xbar_bvalid    ;
    assign Xbar_arready    = reg_Xbar_arready   ;

    assign Xbar_S0_araddr  = reg_Xbar_S0_araddr ;
    assign Xbar_S0_arvalid = reg_Xbar_S0_arvalid;
    assign Xbar_S0_rready  = reg_Xbar_S0_rready ;
    assign Xbar_S0_awaddr  = reg_Xbar_S0_awaddr ;
    assign Xbar_S0_awvalid = reg_Xbar_S0_awvalid;
    assign Xbar_S0_wdata   = reg_Xbar_S0_wdata  ;
    assign Xbar_S0_wstrb   = reg_Xbar_S0_wstrb  ;
    assign Xbar_S0_wvalid  = reg_Xbar_S0_wvalid ;
    assign Xbar_S0_bready  = reg_Xbar_S0_bready ;

    assign Xbar_S1_araddr  = reg_Xbar_S1_araddr ;
    assign Xbar_S1_arvalid = reg_Xbar_S1_arvalid;
    assign Xbar_S1_rready  = reg_Xbar_S1_rready ;
    assign Xbar_S1_awaddr  = reg_Xbar_S1_awaddr ;
    assign Xbar_S1_awvalid = reg_Xbar_S1_awvalid;
    assign Xbar_S1_wdata   = reg_Xbar_S1_wdata  ;
    assign Xbar_S1_wstrb   = reg_Xbar_S1_wstrb  ;
    assign Xbar_S1_wvalid  = reg_Xbar_S1_wvalid ;
    assign Xbar_S1_bready  = reg_Xbar_S1_bready ;

    assign Xbar_S2_araddr  = reg_Xbar_S2_araddr ;
    assign Xbar_S2_arvalid = reg_Xbar_S2_arvalid;
    assign Xbar_S2_rready  = reg_Xbar_S2_rready ;
    assign Xbar_S2_awaddr  = reg_Xbar_S2_awaddr ;
    assign Xbar_S2_awvalid = reg_Xbar_S2_awvalid;
    assign Xbar_S2_wdata   = reg_Xbar_S2_wdata  ;
    assign Xbar_S2_wstrb   = reg_Xbar_S2_wstrb  ;
    assign Xbar_S2_wvalid  = reg_Xbar_S2_wvalid ;
    assign Xbar_S2_bready  = reg_Xbar_S2_bready ;

    //接线
    always@(*) begin
        case(r_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                reg_Xbar_arready    = 'd0;
                reg_Xbar_rdata      = 'd0;
                reg_Xbar_rresp      = 'd0;
                reg_Xbar_rvalid     = 'd0;

                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;

                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;

                reg_Xbar_S2_araddr  = 'd0;
                reg_Xbar_S2_arvalid = 'd0;
                reg_Xbar_S2_rready  = 'd0;
            end
            ysyx_24120011_Xbar_S0:begin
                reg_Xbar_arready    = Xbar_S0_arready;
                reg_Xbar_rdata      = Xbar_S0_rdata;
                reg_Xbar_rresp      = Xbar_S0_rresp;
                reg_Xbar_rvalid     = Xbar_S0_rvalid;

                reg_Xbar_S0_araddr  = Xbar_araddr;
                reg_Xbar_S0_arvalid = Xbar_arvalid;
                reg_Xbar_S0_rready  = Xbar_rready;

                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;

                reg_Xbar_S2_araddr  = 'd0;
                reg_Xbar_S2_arvalid = 'd0;
                reg_Xbar_S2_rready  = 'd0;
            end
            ysyx_24120011_Xbar_S1:begin
                
                reg_Xbar_arready    = Xbar_S1_arready;
                reg_Xbar_rdata      = Xbar_S1_rdata;
                reg_Xbar_rresp      = Xbar_S1_rresp;
                reg_Xbar_rvalid     = Xbar_S1_rvalid;

                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;

                reg_Xbar_S1_araddr  = Xbar_araddr;
                reg_Xbar_S1_arvalid = Xbar_arvalid;
                reg_Xbar_S1_rready  = Xbar_rready;

                reg_Xbar_S2_araddr  = 'd0;
                reg_Xbar_S2_arvalid = 'd0;
                reg_Xbar_S2_rready  = 'd0;
            end
            ysyx_24120011_Xbar_S2:begin
                
                reg_Xbar_arready    = Xbar_S2_arready;
                reg_Xbar_rdata      = Xbar_S2_rdata;
                reg_Xbar_rresp      = Xbar_S2_rresp;
                reg_Xbar_rvalid     = Xbar_S2_rvalid;

                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;

                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;

                reg_Xbar_S2_araddr  = Xbar_araddr;
                reg_Xbar_S2_arvalid = Xbar_arvalid;
                reg_Xbar_S2_rready  = Xbar_rready;
            end
            default:begin
                reg_Xbar_arready    = 'd0;
                reg_Xbar_rdata      = 'd0;
                reg_Xbar_rresp      = 'd0;
                reg_Xbar_rvalid     = 'd0;

                reg_Xbar_S0_araddr  = 'd0;
                reg_Xbar_S0_arvalid = 'd0;
                reg_Xbar_S0_rready  = 'd0;
                
                reg_Xbar_S1_araddr  = 'd0;
                reg_Xbar_S1_arvalid = 'd0;
                reg_Xbar_S1_rready  = 'd0;

                reg_Xbar_S2_araddr  = 'd0;
                reg_Xbar_S2_arvalid = 'd0;
                reg_Xbar_S2_rready  = 'd0;
            end
        endcase
        case(w_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                reg_Xbar_awready    = 'd0;
                reg_Xbar_wready     = 'd0;
                reg_Xbar_bresp      = 'd0;
                reg_Xbar_bvalid     = 'd0;

                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_bready  = 'd0;

                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_bready  = 'd0;

                reg_Xbar_S2_awaddr  = 'd0;
                reg_Xbar_S2_awvalid = 'd0;
                reg_Xbar_S2_wdata   = 'd0;
                reg_Xbar_S2_wstrb   = 'd0;
                reg_Xbar_S2_wvalid  = 'd0;
                reg_Xbar_S2_bready  = 'd0;
            end
            ysyx_24120011_Xbar_S0:begin
                reg_Xbar_awready    = Xbar_S0_awready;
                reg_Xbar_wready     = Xbar_S0_wready;
                reg_Xbar_bresp      = Xbar_S0_bresp;
                reg_Xbar_bvalid     = Xbar_S0_bvalid;

                reg_Xbar_S0_wdata   = Xbar_wdata;
                reg_Xbar_S0_wstrb   = Xbar_wstrb;
                reg_Xbar_S0_wvalid  = Xbar_wvalid;
                reg_Xbar_S0_awaddr  = Xbar_awaddr;
                reg_Xbar_S0_awvalid = Xbar_awvalid;
                reg_Xbar_S0_bready  = Xbar_bready;

                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_bready  = 'd0;

                reg_Xbar_S2_awaddr  = 'd0;
                reg_Xbar_S2_awvalid = 'd0;
                reg_Xbar_S2_wdata   = 'd0;
                reg_Xbar_S2_wstrb   = 'd0;
                reg_Xbar_S2_wvalid  = 'd0;
                reg_Xbar_S2_bready  = 'd0;
            end
            ysyx_24120011_Xbar_S1:begin
                reg_Xbar_awready    = Xbar_S1_awready;
                reg_Xbar_wready     = Xbar_S1_wready;
                reg_Xbar_bresp      = Xbar_S1_bresp;
                reg_Xbar_bvalid     = Xbar_S1_bvalid;

                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_bready  = 'd0;

                reg_Xbar_S1_wdata   = Xbar_wdata;
                reg_Xbar_S1_wstrb   = Xbar_wstrb;
                reg_Xbar_S1_wvalid  = Xbar_wvalid;
                reg_Xbar_S1_awaddr  = Xbar_awaddr;
                reg_Xbar_S1_awvalid = Xbar_awvalid;
                reg_Xbar_S1_bready  = Xbar_bready;

                reg_Xbar_S2_awaddr  = 'd0;
                reg_Xbar_S2_awvalid = 'd0;
                reg_Xbar_S2_wdata   = 'd0;
                reg_Xbar_S2_wstrb   = 'd0;
                reg_Xbar_S2_wvalid  = 'd0;
                reg_Xbar_S2_bready  = 'd0;
            end
            default:begin
                reg_Xbar_awready    = 'd0;
                reg_Xbar_wready     = 'd0;
                reg_Xbar_bresp      = 'd0;
                reg_Xbar_bvalid     = 'd0;

                reg_Xbar_S0_wdata   = 'd0;
                reg_Xbar_S0_wstrb   = 'd0;
                reg_Xbar_S0_wvalid  = 'd0;
                reg_Xbar_S0_awaddr  = 'd0;
                reg_Xbar_S0_awvalid = 'd0;
                reg_Xbar_S0_bready  = 'd0;

                reg_Xbar_S1_awaddr  = 'd0;
                reg_Xbar_S1_awvalid = 'd0;
                reg_Xbar_S1_wdata   = 'd0;
                reg_Xbar_S1_wstrb   = 'd0;
                reg_Xbar_S1_wvalid  = 'd0;
                reg_Xbar_S1_bready  = 'd0;

                reg_Xbar_S2_awaddr  = 'd0;
                reg_Xbar_S2_awvalid = 'd0;
                reg_Xbar_S2_wdata   = 'd0;
                reg_Xbar_S2_wstrb   = 'd0;
                reg_Xbar_S2_wvalid  = 'd0;
                reg_Xbar_S2_bready  = 'd0;
            end
        endcase
    end
    //next_state赋值
    always@(*) begin
        case(r_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                if(Xbar_arvalid) begin
                    if(Xbar_araddr == 32'ha0000048 || Xbar_araddr == 32'ha000004c) begin
                        r_Xbar_next_state = ysyx_24120011_Xbar_S2;
                    end
                    else begin
                        r_Xbar_next_state = ysyx_24120011_Xbar_S0;
                    end
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
            end
            ysyx_24120011_Xbar_S0:begin
                if(read_S0_done)begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_S0;
                end
            end
            ysyx_24120011_Xbar_S1:begin
                if(read_S1_done)begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_S1;
                end
            end
            ysyx_24120011_Xbar_S2:begin
                if(read_S2_done)begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    r_Xbar_next_state = ysyx_24120011_Xbar_S2;
                end
            end
            default: r_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
        endcase
        case(w_Xbar_state)
            ysyx_24120011_Xbar_IDLE:begin
                if(Xbar_awvalid) begin
                    if(Xbar_awaddr == 32'ha00003f8) begin
                        w_Xbar_next_state = ysyx_24120011_Xbar_S1;
                    end
                    else begin
                        w_Xbar_next_state = ysyx_24120011_Xbar_S0;
                    end
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
            end
            ysyx_24120011_Xbar_S0:begin
                if(write_S0_done)begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_S0;
                end
            end
            ysyx_24120011_Xbar_S1:begin
                if(write_S1_done)begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_S1;
                end
            end
            ysyx_24120011_Xbar_S2:begin
                if(write_S2_done)begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
                end
                else begin
                    w_Xbar_next_state = ysyx_24120011_Xbar_S2;
                end
            end
            default: w_Xbar_next_state = ysyx_24120011_Xbar_IDLE;
        endcase
    end
    //状态跳转
    always@(posedge clk) begin
        if(rst) begin
            r_Xbar_state <= ysyx_24120011_Xbar_IDLE;
            w_Xbar_state <= ysyx_24120011_Xbar_IDLE;
        end
        else begin
            r_Xbar_state <= r_Xbar_next_state;
            w_Xbar_state <= w_Xbar_next_state;
        end
    end
endmodule