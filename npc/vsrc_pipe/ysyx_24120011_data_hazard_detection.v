module ysyx_24120011_data_hazard_detection ( 
    input [4:0] i_IDU_rs1,
    input [4:0] i_IDU_rs2,

    //input [4:0] i_IDEX_rd,
    input [4:0] i_EXU_rd,
    input [4:0] i_EXMEM_rd,
    input [4:0] i_MEM_rd,
    input [4:0] i_MEMWB_rd,
    input [4:0] i_WBU_rd,

    //input i_IDEX_ready,
    input i_EXU_ready,
    input i_EXMEM_ready,
    input i_MEM_ready,
    input i_MEMWB_ready,
    input i_WBU_ready,
    input i_GPR_en,

    output o_stop_pipe
);

    //wire hazard_idex  = ((i_IDU_rs1 == i_IDEX_rd)  || (i_IDU_rs2 == i_IDEX_rd))  && (!i_IDEX_ready );
    wire hazard_exu   = ((i_IDU_rs1 == i_EXU_rd)   || (i_IDU_rs2 == i_EXU_rd))   && (!i_EXU_ready  );
    wire hazard_exmem = ((i_IDU_rs1 == i_EXMEM_rd) || (i_IDU_rs2 == i_EXMEM_rd)) && (!i_EXMEM_ready);
    wire hazard_mem   = ((i_IDU_rs1 == i_MEM_rd)   || (i_IDU_rs2 == i_MEM_rd))   && (!i_MEM_ready  );
    wire hazard_memwb = ((i_IDU_rs1 == i_MEMWB_rd) || (i_IDU_rs2 == i_MEMWB_rd)) && (!i_MEMWB_ready);
    wire hazard_wbu   = ((i_IDU_rs1 == i_WBU_rd)   || (i_IDU_rs2 == i_WBU_rd))   && (!i_WBU_ready  );
    wire hazard_gpr   = i_GPR_en;
    assign o_stop_pipe = //hazard_idex | 
                        hazard_exu | hazard_exmem | hazard_mem | hazard_memwb | hazard_wbu | hazard_gpr;

endmodule
