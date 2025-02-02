module ysyx_24120011_IDU (
    input [31:0]  inst,
    output [4:0]  rd,
    output [4:0]  rs1,
    output [4:0]  rs2,
    output [31:0] imme,
    output [2:0]  func3,
    output [6:0]  func7,
    output reg [1:0]  pc_ctrl
);

wire [6:0] opcode;
wire [2:0] opcode_type;

assign opcode   = inst[6:0];
assign rd       = inst[11:7];
assign rs1      = inst[19:15];
assign rs2      = inst[24:20];
assign func3    = inst[14:12];
assign func7    = inst[31:25];

ysyx_24120011_TypeFinder i_TypeFinder(
    .opcode ( opcode ),
    .opcode_type   ( opcode_type   )
);

ysyx_24120011_ImmeGen i_ImmeGen(
    .inst ( inst ),
    .opcode_type ( opcode_type ),
    .imme  ( imme  )
);

// 3'd0; I-Type
// 3'd1; U-Type
// 3'd2; J-Type
// 3'd3; S-Type
// 3'd7; Unknown

//2'd0: pc_add_4;
//2'd1: pc_add_imme;
//2'd2: alu_result;

always@(*)begin
    case(opcode_type)
        3'd0:begin //I-Type
            if(opcode == 7'b1100111 && func3 == 3'b000)begin//jalr
                 pc_ctrl = 2'd2;
            end
            else begin
                 pc_ctrl = 2'd0;
            end
        end
        3'd2:    pc_ctrl = 2'd0;//J-Type jal
        default: pc_ctrl = 2'd0;
    endcase
end

endmodule
