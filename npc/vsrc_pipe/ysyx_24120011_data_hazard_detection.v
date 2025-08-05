module ysyx_24120011_data_hazard_detection ( 
    input [3:0] i_IDU_rs1,
    input [3:0] i_IDU_rs2,
    input [3:0] i_EXU_rd,
    input [1:0] i_EXU_rd_data_type,
    input [3:0] i_MEM_rd,
    input       i_MEM_rd_data_en,
    input i_EXU_ready,
    input i_MEM_ready,
    

    output o_stop_pipe,
    output o_rs1_or_rs2,
    output o_bypass,
    output [31:0] o_rd_data
);
    //assign o_rd_data = hazard_wbu ? i_WBU_rd_data : 32'b0;
    //assign o_bypass  = hazard_wbu ? 1'b1 : 1'b0;
    //assign o_rs1_or_rs2 = (i_IDU_rs1 == i_WBU_rd) ? 1'b0 : 1'b1;
    assign o_rd_data = 32'b0;
    assign o_bypass  = 1'b0;
    assign o_rs1_or_rs2 = 1'b1;

    wire hazard_exu   = ((i_IDU_rs1 == i_EXU_rd)   || (i_IDU_rs2 == i_EXU_rd))   && (!i_EXU_ready  )&& (i_EXU_rd_data_type != 2'd0);
    wire hazard_mem   = ((i_IDU_rs1 == i_MEM_rd)   || (i_IDU_rs2 == i_MEM_rd))   && (!i_MEM_ready  )&& (i_MEM_rd_data_en != 1'd0);
    //wire hazard_wbu   = ((i_IDU_rs1 == i_WBU_rd)   || (i_IDU_rs2 == i_WBU_rd))   && (!i_WBU_ready  )&& (i_WBU_rd_ctrl != 3'd4);
    assign o_stop_pipe = hazard_exu 
                        | hazard_mem ;

endmodule
