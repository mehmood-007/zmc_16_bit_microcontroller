`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 08/31/2018 12:01:06 AM
// Design Name:
// Module Name: fsm
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module fsm(clk,
         a_reset_l,
         current_state,
         opcode_i,
         zm_wb_data_ack_i,
         condition_i,
         ack_mult_i,
         ack_smult_i,
         ack_div_i,
         finish_init_pram_i,
         intr_flag_i,
	 sync_flag_i
        );

   input clk;
   input a_reset_l;
   input zm_wb_data_ack_i;
   input ack_mult_i;
   input ack_smult_i;
   input ack_div_i;
   input condition_i;
   input [7:0] opcode_i;
   input finish_init_pram_i;
   input sync_flag_i;
   input intr_flag_i;
   output [4:0] current_state;

   reg [4:0] current_state;
   reg [4:0] next_state;


   parameter LD = 8'hF4;
   parameter LDR = 8'hF5;

   parameter MRD = 8'hF0;
   parameter MWR= 8'hF2;

   parameter CALL = 4'hd;
   parameter RET = 8'hfa;
   parameter RETI = 8'hfb;
   parameter MUL = 8'h02;
   parameter SMUL = 8'h22;
   parameter DIV = 8'h0f;
   parameter CALLR = 8'hf3;
   parameter CND = 8'hf6;

   parameter S_READY_FOR_INSTR = 5'b00000;
   parameter S_LDD_OP = 5'b00001;       // Load address of the operand

   parameter WAIT_FOR_WB_RD_ACK = 5'b00011;
   parameter WAIT_FOR_WB_WR_ACK = 5'b00100;
   parameter WAIT_FOR_WB_PUSH_ACK = 5'b00101;
   parameter WAIT_FOR_WB_POP_ACK = 5'b00110;
   parameter BYPASS_CURRENT_INST = 5'b00111;
   parameter MULT = 5'b01000;
   parameter SMULT = 5'b01001;
   parameter DIVISION = 5'b01010;
   parameter STORE_MULT_RES = 5'b01011;
   parameter STORE_SMULT_RES = 5'b01100;
   parameter STORE_DIV_RES = 5'b01101;

   parameter INC_STORE_PC = 5'b01110;
   parameter INIT_PC = 5'b01111;
   parameter RD_WB_ACK_PRAM = 5'b10000;
   parameter FINISH_INIT_SEQ = 5'b10001;
   parameter INTR_WAIT_FOR_WB_PUSH_ACK = 5'b10010;
   parameter INTR_WAIT_FOR_WB_POP_ACK = 5'b10011;
   parameter S_LDR_OP = 5'b10100;
   parameter WAIT_FOR_CALLR_WB_PUSH_ACK = 5'b10101;



always@(posedge clk or negedge a_reset_l)
   begin
        if (a_reset_l == 1'b0)
            current_state <= INIT_PC;
        else
	    current_state <= next_state;
   end

always@( current_state or opcode_i or zm_wb_data_ack_i or
         ack_mult_i or ack_smult_i or ack_div_i or
         condition_i or finish_init_pram_i or
	  sync_flag_i or intr_flag_i)
begin
    case (current_state)
    S_READY_FOR_INSTR:
    begin
        if (intr_flag_i == 1'b1)
            next_state = INTR_WAIT_FOR_WB_PUSH_ACK;
        else
        begin
        case(opcode_i)
            LD:
                next_state = S_LDD_OP;

            LDR:
                next_state = S_LDR_OP;

            MRD:
                next_state = WAIT_FOR_WB_RD_ACK;

            MWR:
                next_state = WAIT_FOR_WB_WR_ACK;

            RET:
                next_state = WAIT_FOR_WB_POP_ACK;

            RETI:
                next_state = INTR_WAIT_FOR_WB_POP_ACK;

            MUL:
                next_state = MULT;

            SMUL:
                next_state = SMULT;

            DIV:
                next_state = DIVISION;
            CALLR:
                begin
                    next_state = S_READY_FOR_INSTR;
                    if(condition_i == 1'b1)
                    next_state = WAIT_FOR_CALLR_WB_PUSH_ACK;
                end
            CND:
                begin
                    next_state = S_READY_FOR_INSTR;
                    if(condition_i == 1'b0)
                    next_state = BYPASS_CURRENT_INST;
                end
            default:
                case(opcode_i[7:4])
                    CALL:
                        begin
                            next_state = WAIT_FOR_WB_PUSH_ACK;
                        end
                    default:
                        next_state = S_READY_FOR_INSTR;
                endcase
            endcase
        end
    end
    MULT:
    begin
        next_state = MULT;
            if(ack_mult_i == 1'b1)
                next_state = STORE_MULT_RES;
    end

    STORE_MULT_RES:
    begin
        next_state = S_READY_FOR_INSTR;
    end

    SMULT:
    begin
        next_state = SMULT;
        if(ack_smult_i == 1'b1)
            next_state = STORE_SMULT_RES;
    end

    STORE_SMULT_RES:
        begin
        next_state = S_READY_FOR_INSTR;
        end

    DIVISION:
        begin
            next_state = DIVISION ;
            if(ack_div_i == 1'b1)
            next_state = STORE_DIV_RES;
        end

    STORE_DIV_RES:
        begin
        next_state = S_READY_FOR_INSTR;
        end

    INTR_WAIT_FOR_WB_PUSH_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
            next_state = S_READY_FOR_INSTR;
        else
            next_state = INTR_WAIT_FOR_WB_PUSH_ACK;
    end

    WAIT_FOR_WB_WR_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
                next_state = S_READY_FOR_INSTR;
        else
                next_state = WAIT_FOR_WB_WR_ACK;
    end

    WAIT_FOR_WB_RD_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
                next_state = S_READY_FOR_INSTR;
        else
                next_state = WAIT_FOR_WB_RD_ACK;
    end

    WAIT_FOR_WB_PUSH_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
                next_state = S_READY_FOR_INSTR;
        else
                next_state = WAIT_FOR_WB_PUSH_ACK;
    end

    WAIT_FOR_CALLR_WB_PUSH_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
                next_state = S_READY_FOR_INSTR;
        else
            next_state = WAIT_FOR_CALLR_WB_PUSH_ACK;
    end

    WAIT_FOR_WB_POP_ACK:
    begin
        if (zm_wb_data_ack_i == 1'b1)
                next_state = S_READY_FOR_INSTR; ///////////////////////////
        else
                next_state = WAIT_FOR_WB_POP_ACK;
    end

    INTR_WAIT_FOR_WB_POP_ACK:
	begin
	    if (zm_wb_data_ack_i == 1'b1)
            next_state = S_READY_FOR_INSTR; ///////////////////////////
        else
            next_state = INTR_WAIT_FOR_WB_POP_ACK;
	end

	INIT_PC: begin
	    next_state = RD_WB_ACK_PRAM;
    end
	RD_WB_ACK_PRAM: begin
	    next_state = (zm_wb_data_ack_i == 1'b1) ? INC_STORE_PC : RD_WB_ACK_PRAM;
    end
	INC_STORE_PC: begin
	    next_state = (finish_init_pram_i == 1'b1 || sync_flag_i == 1'b1) ? FINISH_INIT_SEQ : RD_WB_ACK_PRAM;
    end
    FINISH_INIT_SEQ : begin
        next_state = S_READY_FOR_INSTR;
    end
    default:
        next_state = S_READY_FOR_INSTR;

    endcase
end
endmodule
