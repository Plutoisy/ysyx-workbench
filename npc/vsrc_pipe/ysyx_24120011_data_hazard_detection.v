module ysyx_24120011_data_hazard_detection ( 
    input [3:0] i_IDU_rs1,
    input [3:0] i_IDU_rs2,
    //input [4:0] i_IDEX_rd,
    input [3:0] i_EXU_rd,
    input [2:0] i_EXU_rd_ctrl,
    //input [4:0] i_EXMEM_rd,
    input [3:0] i_MEM_rd,
    input [2:0] i_MEM_rd_ctrl,
    //input [4:0] i_MEMWB_rd,
    input [3:0] i_WBU_rd,
    input [2:0] i_WBU_rd_ctrl,
    input [31:0] i_WBU_rd_data,
    input [3:0] i_GPR_rd,
    //input i_IDEX_ready,
    input i_EXU_ready,
    //input i_EXMEM_ready,
    input i_MEM_ready,
    //input i_MEMWB_ready,
    input i_WBU_ready,
    input i_GPR_en,
    

    output o_stop_pipe,
    output o_rs1_or_rs2,
    output o_bypass,
    output [31:0] o_rd_data
);
    assign o_rd_data = hazard_wbu ? i_WBU_rd_data : 32'b0;
    assign o_bypass  = hazard_wbu ? 1'b1 : 1'b0;
    assign o_rs1_or_rs2 = (i_IDU_rs1 == i_WBU_rd) ? 1'b0 : 1'b1;
    //wire hazard_idex  = ((i_IDU_rs1 == i_IDEX_rd)  || (i_IDU_rs2 == i_IDEX_rd))  && (!i_IDEX_ready );
    wire hazard_exu   = ((i_IDU_rs1 == i_EXU_rd)   || (i_IDU_rs2 == i_EXU_rd))   && (!i_EXU_ready  )&& (i_EXU_rd_ctrl != 3'd4);
    //wire hazard_exmem = ((i_IDU_rs1 == i_EXMEM_rd) || (i_IDU_rs2 == i_EXMEM_rd)) && (!i_EXMEM_ready);
    wire hazard_mem   = ((i_IDU_rs1 == i_MEM_rd)   || (i_IDU_rs2 == i_MEM_rd))   && (!i_MEM_ready  )&& (i_MEM_rd_ctrl != 3'd4);
    //wire hazard_memwb = ((i_IDU_rs1 == i_MEMWB_rd) || (i_IDU_rs2 == i_MEMWB_rd)) && (!i_MEMWB_ready);
    wire hazard_wbu   = ((i_IDU_rs1 == i_WBU_rd)   || (i_IDU_rs2 == i_WBU_rd))   && (!i_WBU_ready  )&& (i_WBU_rd_ctrl != 3'd4);
    wire hazard_gpr   = ((i_IDU_rs1 == i_GPR_rd)   || (i_IDU_rs2 == i_GPR_rd))   && (i_GPR_en  );
    assign o_stop_pipe = //hazard_idex | 
                        hazard_exu 
                        //| hazard_exmem 
                        | hazard_mem 
                        //| hazard_memwb 
                        //| hazard_wbu 
                        | hazard_gpr;

endmodule
