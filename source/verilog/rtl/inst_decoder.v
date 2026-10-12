`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/29/2018 10:28:01 PM
// Design Name: 
// Module Name: inst_decoder
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

module inst_decoder ( inst_reg_i,
                      opcode_i,
                      current_inst_i,
                      state_i,
                      zm_wb_data_ack_i,
                      ack_mult_i,
                      ack_smult_i,
                      ack_division_i,
                      condition_i,
		      sync_h_i,
  		      intr_flag_i,
		      init_pc_o, 
			init_sp_o,
                      mask_o,                         
                      ra_wr_o,
                      ra_addr_o,
                      rb_addr_o,
                      sel_airth_o,
		      sel_move_o,
                      sel_logic_o,
                      sel_shift_o,
                      sel_div_o,
                      sel_smult_o,
                      sel_mult_o,
                      sel_rem_o,
                      sel_quo_o,                      
                      sel_data_in_o,
                      sel_jmp_add_o,
                      sel_sp_o,
                      sel_operand_b_o,
                      sel_operand_a_o,
                      sel_operand_add_o,
                      sel_pc_ext_o,
                      sel_opa_ext_o,
                      sel_stored_pc_o,
                      sel_mult_lo_o,
                      sel_mult_hi_o,
                      sel_smult_lo_o,
                      sel_smult_hi_o,
                      arith_cont_o,          
                      sr_wr_o,
		      sp_wr_o,
                      wr_cy_o,
                      wr_zo_o,
                      wr_sn_o,
                      wr_ov_o,
                      segment_o,
                      ra_o,
                      jmp_address_o,
                      stop_pc_inc_o,
                      zm_en_rd_ext_o,
                      zm_en_wr_ext_o,
                      push_o,
                      pop_o,
                      intr_ack_h_o,
		      sel_pram_add_ext_o,
		      wr_pram_en_o,
		      sel_flag_ext_o,
		      reti_o,
		      sel_pop_flags_o,
		      sel_indirect_addr_o,
		      finish_init_o
                     );
parameter INTRPT_SV_ROUTINE = 12'h00f;
  
input [7:0] opcode_i;
input [4:0] state_i;
input [7:0] inst_reg_i;
input [15:0] current_inst_i;
input condition_i;

input zm_wb_data_ack_i;
input ack_smult_i;
input ack_mult_i;
input ack_division_i;

input intr_flag_i;
input sync_h_i;

output ra_wr_o;
output sr_wr_o;
output sp_wr_o;
output [3:0] ra_addr_o;
output [3:0] rb_addr_o;
output wr_cy_o;
output wr_zo_o;
output wr_sn_o;
output wr_ov_o;
output[3:0] mask_o;
output push_o;
output pop_o;
output init_sp_o;

output sel_airth_o;
output sel_move_o;
output sel_shift_o;
output sel_logic_o;
output sel_data_in_o;
output sel_stored_pc_o;
output sel_smult_o;
output sel_mult_o;
output sel_rem_o;
output sel_quo_o;
output sel_div_o;
output arith_cont_o;

output [3:0] segment_o;
output [15:0] ra_o;
output sel_jmp_add_o;
output [11:0] jmp_address_o;
output stop_pc_inc_o;
output zm_en_rd_ext_o;
output zm_en_wr_ext_o;

output sel_sp_o;
output sel_operand_b_o;
output sel_operand_a_o;
output sel_operand_add_o;
output sel_mult_lo_o;
output sel_mult_hi_o;

output sel_smult_hi_o;
output sel_smult_lo_o;

output sel_pc_ext_o; // for storing pc in external memory
output sel_opa_ext_o; // for storing operand A in external memory
output sel_indirect_addr_o;

output intr_ack_h_o;
output sel_pram_add_ext_o;
output wr_pram_en_o;
output init_pc_o;
output sel_flag_ext_o;
output reti_o;
output sel_pop_flags_o;
output finish_init_o;

reg sel_airth_o;
reg sel_shift_o;
reg sel_logic_o;
reg sel_smult_o;
reg sel_mult_o;
reg sel_rem_o;
reg sel_quo_o;
reg sel_div_o;
reg sel_mult_lo_o;
reg sel_mult_hi_o;
reg sel_smult_hi_o;
reg sel_smult_lo_o;
reg sel_move_o;
reg init_sp_o;
reg sel_operand_a_o;
reg sel_operand_add_o;

reg sel_pc_ext_o;
reg sel_opa_ext_o;
reg sel_pop_flags_o;

reg arith_cont_o;
    
reg wr_cy_o;
reg wr_sn_o;
reg wr_zo_o;
reg wr_ov_o;

reg ra_wr_o;
reg sel_jmp_add_o;

reg push_o;
reg pop_o;

reg sel_sp_o;
reg sel_operand_b_o;

reg [3:0] ra_addr_o;
reg [3:0] rb_addr_o;
reg sr_wr_o;
reg sp_wr_o;
reg [3:0] segment_o;
reg [15:0] ra_o ;
reg [11:0] jmp_address_o; 
reg stop_pc_inc_o;
reg sel_stored_pc_o;
reg sel_indirect_addr_o;

reg zm_en_rd_ext_o;
reg zm_en_wr_ext_o;
reg sel_data_in_o;

reg intr_ack_h_o;
reg[3:0] mask_o;
//reg sel_reg_addr_o;
reg sel_pram_add_ext_o;
reg wr_pram_en_o;
reg init_pc_o;
reg sel_flag_ext_o;
reg reti_o;
reg finish_init_o;

parameter ADD = 8'h08; 
parameter SUB = 8'h0b;
parameter INCC = 8'h21;
parameter NEGC = 8'h23;
parameter DECC = 8'h24;
parameter ADC = 8'h28;
parameter SUBC = 8'h2b;
parameter NEG = 8'h03;
parameter DEC = 8'h04;
parameter INC = 8'h01; 
parameter MUL = 8'h02; 
parameter SMUL = 8'h22; 
parameter DIV = 8'h0f;
parameter WT = 8'hf7;
parameter HLT = 8'hf8;
parameter MOV = 8'h00;
parameter MOV_SP = 8'h20;


parameter LG_0  = 8'h40;
parameter Z_NOR  = 8'h41;
parameter A_AND_NOT_B = 8'h42;
parameter NOT_B = 8'h43;
parameter NOT_A_AND_B = 8'h44;
parameter NOT_A = 8'h45;
parameter Z_XOR = 8'h46;
parameter Z_NAND = 8'h47;
parameter Z_AND = 8'h48;
parameter Z_XNOR = 8'h49;
parameter LG_A = 8'h4a;
parameter A_OR_NOT_B = 8'h4b;
parameter LG_B = 8'h4c;
parameter NOT_A_OR_B = 8'h4d;
parameter Z_OR = 8'h4e;
parameter LG_1 = 8'h4f;

parameter SHR0 = 8'h80;
parameter SHR1 = 8'h81;
parameter SHRA = 8'h82;
parameter SHRC = 8'h83;
parameter ROTR = 8'h84;
parameter ROTRC = 8'h85;
parameter SHL0 = 8'h88;
parameter SHL1 = 8'h89;
parameter SHLA = 8'h8a;
parameter SHLC = 8'h8b;
parameter ROTL = 8'h8c;
parameter ROTLC = 8'h8d;
  
parameter SEG = 8'hf9;  
parameter LDR = 8'hf5;
parameter MRD = 8'hf0;
parameter MWR = 8'hf2;

parameter JMP = 4'hc;
parameter CALL = 4'hd;
parameter RET = 8'hfa;
parameter RETI = 8'hfb;
parameter JMPR = 8'hf1;
parameter CALLR = 8'hf3;
parameter CND = 8'hf6;
  
parameter S_READY_FOR_INSTR = 5'b00000;
parameter S_LDD_OP = 5'b00001;  // // store oprand from PRAM Address
parameter WAIT_FOR_WB_RD_ACK = 5'b00011;
parameter WAIT_FOR_WB_WR_ACK = 5'b00100;

parameter WAIT_FOR_WB_PUSH_ACK = 5'b00101;
parameter WAIT_FOR_WB_POP_ACK = 5'b00110;

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

         
always @( state_i or opcode_i or inst_reg_i or 
          zm_wb_data_ack_i or current_inst_i or 
          ack_mult_i or ack_smult_i or ack_division_i or 
          condition_i or sync_h_i or intr_flag_i ) begin
init_sp_o = 1'b0;			  
    ra_addr_o = 4'h0;
    rb_addr_o = 4'h0;
    ra_o = 16'h0000;
    ra_wr_o = 1'b0;
    sel_airth_o = 1'b0;
    sel_move_o = 1'b0;
    sel_shift_o = 1'b0;
    sel_logic_o = 1'b0;
    sel_mult_o = 1'b0;
    sel_mult_lo_o = 1'b0;
    sel_mult_hi_o = 1'b0;
    mask_o = 4'h0; 
    sel_smult_o = 1'b0;
    sel_smult_hi_o = 1'b0;
    sel_smult_lo_o = 1'b0;
    sel_rem_o = 1'b0;
    sel_quo_o = 1'b0;
    sel_div_o = 1'b0;       
    sel_data_in_o = 1'b0;
    sel_stored_pc_o = 1'b0;
    arith_cont_o = 1'b0; 	
    wr_cy_o = 1'b0;
    wr_zo_o = 1'b0;
    wr_sn_o = 1'b0;
    wr_ov_o = 1'b0; 
    sr_wr_o = 1'b0;
    sp_wr_o = 1'b0;
    sel_jmp_add_o = 1'b0;
    jmp_address_o = 12'h0;
    segment_o = 4'h0;
    stop_pc_inc_o = 1'b0;
    zm_en_rd_ext_o = 1'b0; 
    zm_en_wr_ext_o = 1'b0;
    push_o = 1'b0; 
    pop_o = 1'b0; 
    sel_operand_b_o = 1'b0; ///// to SP MUX
    sel_operand_a_o  = 1'b0; ///// to ALU MUX 
    sel_sp_o = 1'b0;
    sel_pc_ext_o = 1'b0;
    sel_opa_ext_o = 1'b0;
    sel_operand_add_o = 1'b0;
    sel_pram_add_ext_o = 1'b0;
    intr_ack_h_o = 1'b0;
    wr_pram_en_o = 1'b1;
    sel_flag_ext_o = 1'b0;
    init_pc_o = 1'b0; 
    reti_o = 1'b0; 
    sel_pop_flags_o = 1'b0;
    finish_init_o = 1'b0;
    sel_indirect_addr_o = 1'b0;
    
        case (state_i)
          S_READY_FOR_INSTR:
            begin
            case(intr_flag_i)    
	    1'b1:
	     begin
                sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
                sel_flag_ext_o = 1'b1; // Write Flags to Ext Mem
                stop_pc_inc_o = 1'b1;
                sel_sp_o = 1'b1; // Select SP as an I/O address       	
             end
            default:
             begin
                  case (opcode_i)          
                      ADD, SUB, NEG, DEC, INC, INCC, NEGC, DECC, ADC, SUBC:
                      begin
                          ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          wr_cy_o = 1'b1;
                          wr_zo_o = 1'b1;
                          wr_sn_o = 1'b1;
                          wr_ov_o = 1'b1;
                          sel_airth_o = 1'b1;
                          ra_wr_o = 1'b1;	
                          arith_cont_o = ((opcode_i[7:0]&8'h20) == 8'h20) ? 1'b1: 1'b0;
                      end
                      
                    LG_0, Z_NOR, A_AND_NOT_B, NOT_B, NOT_A_AND_B, NOT_A, Z_XOR, Z_NAND, Z_AND, Z_XNOR, LG_A, A_OR_NOT_B, LG_B, NOT_A_OR_B, Z_OR, LG_1:
                      begin
                          ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          wr_zo_o = 1'b1;
                          wr_sn_o = 1'b1;
                          sel_logic_o = 1'b1;
                          ra_wr_o = 1'b1; 
                      end
              
                    SHR0, SHR1, SHRA, SHRC, ROTR, ROTRC, SHL0, SHL1, SHLA, SHLC, ROTL, ROTLC:
                     begin
                          ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          wr_cy_o = (opcode_i[7:0] == ROTRC || opcode_i[7:0] == ROTLC) ? 1'b1 : 1'b0; 
                          wr_zo_o = 1'b1;
                          wr_sn_o = 1'b1;
                          sel_shift_o = 1'b1;
                          ra_wr_o = 1'b1;
                     end
		     
		     MOV:
		     begin
		     	rb_addr_o [3:0] = current_inst_i[7:4];
      		        ra_addr_o [3:0] = current_inst_i[3:0];
     		        ra_wr_o = 1'b1;
     		        sel_move_o = 1'b1;
		     end
		      
		     MOV_SP:
		     begin
		     	sp_wr_o = 1'b1;
		      	rb_addr_o [3:0] = current_inst_i[7:4];
		     end 
		     
		     MUL:
              		begin
                     	  ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          sel_mult_o = 1'b1;    
                          stop_pc_inc_o = 1'b1;                   
             		 end
			 
        	     SMUL:
                	 begin
                          ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          sel_smult_o = 1'b1;
          	              stop_pc_inc_o = 1'b1;
      	  		   end
			   
   	             DIV:
    	    	     begin
               		  ra_addr_o [3:0] = current_inst_i[3:0];
                          rb_addr_o [3:0] = current_inst_i[7:4];
                          sel_div_o = 1'b1;
          	          stop_pc_inc_o = 1'b1;
              	     end	
					
                    LDR:
                      begin
                         rb_addr_o [3:0] = current_inst_i[7:4];
                         sel_operand_add_o = 1'b1;
                      end
		      
                    MRD:
                      begin
                       //  zm_en_rd_ext_o = 1'b1;
                         rb_addr_o [3:0]  = current_inst_i[7:4];
                         stop_pc_inc_o = 1'b1;
                         sel_operand_b_o = 1'b1;
                      end 
		      
                    MWR:
                      begin
                          stop_pc_inc_o = 1'b1;
                          ra_addr_o [3:0] = current_inst_i[7:4];
                          rb_addr_o [3:0] = current_inst_i[3:0];
                          sel_operand_b_o = 1'b1;
                         // zm_en_wr_ext_o = 1'b1; /////////////
                          sel_opa_ext_o = 1'b1; // Write opA to Ext Mem 
                      end
		      
                    RET:
                      begin
                        pop_o = 1'b1;
                        sel_sp_o = 1'b1; // Select sp as I/O address
                        stop_pc_inc_o = 1'b1;
                      //  zm_en_rd_ext_o = 1'b1;  
                      end
		      
                    RETI:
                      begin
                        pop_o = 1'b1;
                        sel_sp_o = 1'b1; // Select sp as I/O address
                      //  zm_en_rd_ext_o = 1'b1;			                        
                      end
		        
                    JMPR:
                      begin
                        mask_o[3:0] = current_inst_i[3:0];
                        rb_addr_o [3:0] = current_inst_i[7:4];
                        if( condition_i == 1'b1 )    begin
                            stop_pc_inc_o = 1'b0;
                            sel_indirect_addr_o = 1'b1;  // Select pram adddress as jump address                
                        end
                      end
					  
                    CALLR:
                      begin
                        mask_o[3:0] = current_inst_i[3:0];
                      //  rb_addr_o [3:0] = current_inst_i[7:4];
                        if( condition_i == 1'b1 ) begin
                            sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
			                 stop_pc_inc_o = 1'b1;
                         //   zm_en_wr_ext_o = 1'b1; // Enable WB_WR signal to write Ext Mem
                            sel_sp_o = 1'b1; // Select sp as I/O address                            
                        end
                      end					  
		    SEG:
		    begin
		    	sr_wr_o = 1'b1;
		      	segment_o = current_inst_i[3:0];			  		
		    end
                CND:
                  mask_o[3:0] = current_inst_i[3:0];
           
                WT:	begin
		
		if(sync_h_i == 1'b1)	begin
 	               	stop_pc_inc_o = 1'b0;
			finish_init_o = 1'b1;
        	end
		else
			stop_pc_inc_o = 1'b1;			
	        end  
                HLT: 
                  stop_pc_inc_o = 1'b1;    
                endcase
                  case (opcode_i[7:4])
                      JMP:
                      begin
                         stop_pc_inc_o = 1'b0;  
                         sel_jmp_add_o = 1'b1; 	// select jmp address for PC
                         jmp_address_o = current_inst_i[11:0];  
                      end
                      CALL://///////////////// Check call with delayed Memory
                      begin                         
                         sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
                         stop_pc_inc_o = 1'b1;
                        // zm_en_wr_ext_o = 1'b1; // enable WB_WR signal to write Ext Mem
                         sel_sp_o = 1'b1; // Select sp as I/O address
                         //jmp_address_o = current_inst_i[11:0];                
                         //sel_jmp_add_o = 1'b1;  
                      end
                  endcase
               end
             endcase  
            end
              MULT:
               begin         
                    sel_mult_o = 1'b1;  
                    ra_addr_o [3:0] = inst_reg_i[3:0];
                    rb_addr_o [3:0] = inst_reg_i[7:4];   
                    stop_pc_inc_o = 1'b1;  
                   if ( ack_mult_i == 1'b1 ) begin
                        ra_wr_o = 1'b1;
                        sel_mult_lo_o = 1'b1;
                        wr_zo_o = 1'b1; 
			                               
                   end      
               end
              SMULT:
              begin
                sel_smult_o = 1'b1;  
                ra_addr_o [3:0] = inst_reg_i[3:0];
                rb_addr_o [3:0] = inst_reg_i[7:4];   
                stop_pc_inc_o = 1'b1;  
                if ( ack_smult_i == 1'b1 ) begin
                    ra_wr_o = 1'b1;
                    sel_smult_lo_o = 1'b1; 
                    wr_zo_o = 1'b1;
                    wr_sn_o = 1'b1;                            
                end             
              end
              DIVISION:
              begin
                sel_div_o = 1'b1;  
                ra_addr_o [3:0] = inst_reg_i[3:0];
                rb_addr_o [3:0] = inst_reg_i[7:4];   
                stop_pc_inc_o = 1'b1;  
                if ( ack_division_i == 1'b1 ) begin
                    ra_wr_o = 1'b1;
                    sel_quo_o = 1'b1;
                     wr_zo_o = 1'b1;
                     wr_ov_o = 1'b1;                        
                end     
              end  
			  
              STORE_MULT_RES:
                begin  
                    ra_addr_o [3:0] = inst_reg_i[3:0] + 4'b0001;
                    ra_wr_o = 1'b1;
                    sel_mult_hi_o = 1'b1; 
                    wr_zo_o = 1'b1;
                end
              STORE_SMULT_RES:
                begin
                    ra_addr_o [3:0] = inst_reg_i[3:0] + 4'b0001;
                    ra_wr_o = 1'b1;
                    sel_smult_hi_o = 1'b1;
                    wr_zo_o = 1'b1;
                    wr_sn_o = 1'b1;  
                end
              STORE_DIV_RES:
                begin  
                    ra_addr_o [3:0] = inst_reg_i[3:0] + 4'b0001;
                    ra_wr_o = 1'b1;
                    sel_rem_o = 1'b1;
                    wr_zo_o = 1'b1;
                    wr_ov_o = 1'b1;   
                end
	      WAIT_FOR_CALLR_WB_PUSH_ACK:
	      begin
                 sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
                 stop_pc_inc_o = 1'b1;	// default PC won't increment ////////////////////////////////////
                 zm_en_wr_ext_o = 1'b1; // Enable WB_WR signal to write Ext Mem
                 sel_sp_o = 1'b1;    // Select SP as I/O address	    
                 if(zm_wb_data_ack_i == 1'b1)
                 begin
		    rb_addr_o [3:0] = inst_reg_i[7:4];		  
		    stop_pc_inc_o = 1'b0;
		    sel_indirect_addr_o = 1'b1;  // Select pram adddress as jump address	
                    zm_en_wr_ext_o = 1'b0;
                    push_o = 1'b1;
                 end
	      end	                          
              WAIT_FOR_WB_PUSH_ACK:
               begin
                    sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
                    stop_pc_inc_o = 1'b1;	// default PC won't increment ////////////////////////////////////
                    zm_en_wr_ext_o = 1'b1; // Enable WB_WR signal to write Ext Mem
                    sel_sp_o = 1'b1;    // Select sp as I/O address	    
                    if(zm_wb_data_ack_i == 1'b1)
                    begin
                        zm_en_wr_ext_o = 1'b0;
                      //  sel_pc_ext_o = 1'b0;
                      //  sel_sp_o = 1'b0;  // Select sp as I/O address  
                        push_o = 1'b1;
                        jmp_address_o = current_inst_i[11:0];                
                        sel_jmp_add_o = 1'b1;                        
                    end              
               end		                                 
              WAIT_FOR_WB_RD_ACK:
                begin
                    stop_pc_inc_o = 1'b1;
                    rb_addr_o [3:0]  = inst_reg_i[7:4];
                    sel_operand_b_o = 1'b1;
                    zm_en_rd_ext_o = 1'b1;
                    if( zm_wb_data_ack_i == 1'b1)
                    begin
                        ra_addr_o [3:0] = inst_reg_i[3:0];
                        ra_wr_o = 1'b1;
                        sel_data_in_o = 1'b1;
                        stop_pc_inc_o = 1'b0;
                        zm_en_rd_ext_o = 1'b0;
                    end
                end	      
              WAIT_FOR_WB_WR_ACK:
                begin
                    if( zm_wb_data_ack_i == 1'b1)
                    begin   
                        stop_pc_inc_o = 1'b0;  
                        zm_en_wr_ext_o = 1'b0; 
                        sel_opa_ext_o = 1'b0; // Write opA to Ext Mem  
                        sel_operand_b_o = 1'b0;
                    end
                    else	begin
                                stop_pc_inc_o = 1'b1;	
                                ra_addr_o [3:0] = inst_reg_i[7:4];
                                rb_addr_o [3:0] = inst_reg_i[3:0];
                                sel_operand_b_o = 1'b1;
                                zm_en_wr_ext_o = 1'b1;
                                sel_opa_ext_o = 1'b1; // Write opA to Ext Mem 		
                    end            
                end
	      WAIT_FOR_WB_POP_ACK:
              begin	
                  stop_pc_inc_o = 1'b1;
                  sel_sp_o = 1'b1; // Select sp as I/O address
                  zm_en_rd_ext_o = 1'b1;              
                  if( zm_wb_data_ack_i == 1'b1 )
                  begin
                      stop_pc_inc_o = 1'b0;
                      sel_stored_pc_o = 1'b1; // Data out -> PC 
		      
                      zm_en_rd_ext_o = 1'b0;
                  end                      
              end	      
	      INTR_WAIT_FOR_WB_POP_ACK:
	      begin
                  stop_pc_inc_o = 1'b1;
                  sel_sp_o = 1'b1; // Select sp as I/O address
                  zm_en_rd_ext_o = 1'b1;              
                  if( zm_wb_data_ack_i == 1'b1)
                  begin
                      stop_pc_inc_o = 1'b0;
                      sel_stored_pc_o = 1'b1; // Data out -> PC 
                      sel_pop_flags_o = 1'b1; // Data out -> Flag Bank 
                      zm_en_rd_ext_o = 1'b0;
                      reti_o = 1'b1;
                      wr_cy_o = 1'b1;
                      wr_zo_o = 1'b1;
                      wr_sn_o = 1'b1;
                      wr_ov_o = 1'b1;
                  end   	      		 	
	      end 
	      
              INTR_WAIT_FOR_WB_PUSH_ACK:
              begin
                  sel_pc_ext_o = 1'b1; // Write PC to Ext Mem
	           	  sel_flag_ext_o = 1'b1; // Write Flags to Ext Mem
                  stop_pc_inc_o = 1'b1;    // default PC won't increment ////////////////////////////////////
                  zm_en_wr_ext_o = 1'b1;
                  sel_sp_o = 1'b1;    // Select sp as I/O address
		  
                  if(zm_wb_data_ack_i == 1'b1)
                  begin   
                      zm_en_wr_ext_o = 1'b0;
                      stop_pc_inc_o = 1'b0;
                      sel_pc_ext_o = 1'b0;
                      sel_sp_o = 1'b0;  // Select sp as I/O address  
                      push_o = 1'b1;
                      sel_jmp_add_o = 1'b1; // select jmp address for PC
                      jmp_address_o = INTRPT_SV_ROUTINE;
		      intr_ack_h_o  = 1'b1;  // int ack signal 
                  end             
              end
              S_LDD_OP:
                begin 
                   ra_addr_o [3:0] = inst_reg_i[3:0];
                   ra_o [15:0] = current_inst_i[15:0];
                   ra_wr_o = 1'b1;
                   sel_operand_a_o = 1'b1; 
                end
	      S_LDR_OP:
	        begin
                   ra_addr_o [3:0] = inst_reg_i[3:0];
                   ra_o [15:0] = current_inst_i[15:0];
                   ra_wr_o = 1'b1;
                   sel_operand_a_o = 1'b1; 
		   stop_pc_inc_o = 1'b1;		
		end
		 	  
          INIT_PC:
	  begin
            stop_pc_inc_o = 1'b1;
	    init_sp_o = 1'b1;
      	  end
      	  FINISH_INIT_SEQ: 
      	  begin
             init_pc_o = 1'b1;
             finish_init_o = 1'b1;
          end
	  
	  INC_STORE_PC:
          begin
            stop_pc_inc_o = 1'b0;
            wr_pram_en_o = 1'b1;
	        sel_pram_add_ext_o = 1'b1;
	        zm_en_rd_ext_o = 1'b0;
            // set read enable to 0
          end
	  
          RD_WB_ACK_PRAM:
          begin   	                           	
            zm_en_rd_ext_o = 1'b1;
            sel_pram_add_ext_o = 1'b1;
            stop_pc_inc_o = 1'b1;
            if(zm_wb_data_ack_i == 1'b1)
                begin
                 stop_pc_inc_o = 1'b1;
                 wr_pram_en_o = 1'b0;
                 zm_en_rd_ext_o = 1'b0;
                end       
          end                                       
            endcase
        end
endmodule
