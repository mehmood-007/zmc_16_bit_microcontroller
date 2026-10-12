`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/30/2018 09:06:46 PM
// Design Name: 
// Module Name: ctrl
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

module ctrl( clk,
             a_reset_l,  
             ire_i,
             prog_mem_i,
             zm_wb_data_ack_i,
             condition_i, 
             intr_h_i,
    	     init_pc_o,
	     init_sp_o,
             sync_h_i,
	     ack_smult_i,
             ack_mult_i,
             ack_division_i,
	     opcode_i,
	     finish_init_pram_i,
             mask_o,
             sel_jmp_add_o,
             push_o,
             pop_o,
             sel_airth_o,
	     sel_move_o,
             sel_logic_o,
             sel_shift_o,            
             sel_div_o,
             sel_smult_o,
             sel_mult_o,
             sel_rem_o,
             sel_quo_o,
             sel_mult_lo_o,
             sel_mult_hi_o,
             sel_smult_lo_o,
             sel_smult_hi_o,            
             sel_data_in_o,
             sel_sp_o,
             sel_operand_b_o,
             sel_operand_a_o,
             sel_operand_add_o,
             sel_pc_ext_o,
             sel_opa_ext_o,
             sel_stored_pc_o,
	     sel_pop_flags_o,
	     sel_indirect_addr_o,
             arith_cont_o,
             sr_wr_o,
    	     sp_wr_o,
             wr_cy_o,
             wr_zo_o,
             wr_sn_o,
             wr_ov_o,
             ra_operand_o,
             ra_addr_o,
             rb_addr_o,
             ra_wr_o,
             segment_o,
             jmp_address_o,
             stop_pc_inc_o,
             zm_en_rd_ext_o,
             zm_en_wr_ext_o,
	     sel_pram_add_ext_o,
             intr_ack_h_o,
	     wr_pram_en_o,
	     sel_flag_ext_o
          );      
	  
parameter INTRPT_SV_ROUTINE = 12'h00f;
	       
input clk;
input a_reset_l;
input [7:0] ire_i;
input [15:0] prog_mem_i;
input zm_wb_data_ack_i;
input [7:0] opcode_i;
input condition_i;
input sync_h_i;
input intr_h_i;
output init_pc_o;
output init_sp_o;

input ack_smult_i;
input ack_mult_i;
input ack_division_i;
input finish_init_pram_i;

output sel_sp_o;
output sel_operand_b_o;
output sel_operand_a_o;
output sel_pram_add_ext_o;

output sr_wr_o;
output sp_wr_o;
output wr_cy_o;
output wr_zo_o;
output wr_sn_o;
output wr_ov_o;
output[3:0] mask_o;

output arith_cont_o;
output sel_shift_o;
output sel_logic_o;
output sel_airth_o;
//output sel_reg_addr_o;
output sel_smult_o;
output sel_mult_o;
output sel_rem_o;
output sel_quo_o;
output sel_div_o;
output sel_mult_lo_o;
output sel_mult_hi_o;
output sel_smult_lo_o;
output sel_smult_hi_o;
output sel_move_o;

output sel_data_in_o;
output sel_operand_add_o;
output sel_pc_ext_o;
output sel_opa_ext_o;
output sel_stored_pc_o;
output sel_indirect_addr_o;

output [3:0] ra_addr_o;
output [3:0] rb_addr_o;
output ra_wr_o; 
output [15:0] ra_operand_o;
output [3:0] segment_o;

output sel_jmp_add_o;
output [11:0] jmp_address_o;

output push_o;
output pop_o;

output zm_en_rd_ext_o;
output zm_en_wr_ext_o;
output stop_pc_inc_o;
output sel_pop_flags_o;

output intr_ack_h_o;
output wr_pram_en_o;
output sel_flag_ext_o;
 
wire [4:0] state;
wire isr_flag;
wire sync_flag;
wire reti;
wire finish_init;

fsm fsm_i( .clk(clk),
           .a_reset_l(a_reset_l),
           .current_state(state),
           .opcode_i(opcode_i),
           .condition_i(condition_i),
           .zm_wb_data_ack_i(zm_wb_data_ack_i),
           .ack_mult_i(ack_mult_i), 
           .ack_smult_i(ack_smult_i),
           .ack_div_i(ack_division_i),
	   .finish_init_pram_i(finish_init_pram_i),
	   .intr_flag_i(isr_flag),
	   .sync_flag_i(sync_flag)
	 );

inter_sync_reg inter_sync_reg(.clk(clk),
       		              .a_reset_l(a_reset_l),
      			      .intr_ack_h_i(intr_ack_h_o),
     	         	      .intr_h_i(intr_h_i),
        	    	      .sync_h_i(sync_h_i),
        	 	      .finish_init_i(finish_init),
         		      .reti_i(reti),
         	 	      .intr_flag_comb(isr_flag),
			      .sync_flag_comb(sync_flag)

        		     );
		
inst_decoder #(.INTRPT_SV_ROUTINE(INTRPT_SV_ROUTINE)) inst_decoder_i(.inst_reg_i(ire_i),
                            .current_inst_i(prog_mem_i),
                            .opcode_i(opcode_i),                            
                            .state_i(state),
                            .zm_wb_data_ack_i(zm_wb_data_ack_i), 
                            .condition_i(condition_i),
                            .ack_mult_i(ack_mult_i),
                            .ack_smult_i(ack_smult_i),
                            .ack_division_i(ack_division_i),
	      		    .sync_h_i(sync_flag),
	             	    .init_pc_o(init_pc_o),
		    	    .init_sp_o(init_sp_o),
                            .ra_wr_o(ra_wr_o),
                            .ra_addr_o(ra_addr_o),
                            .rb_addr_o(rb_addr_o),
                            .sel_airth_o(sel_airth_o),
                            .sel_logic_o(sel_logic_o),
                            .sel_shift_o(sel_shift_o),
                            .sel_move_o(sel_move_o),
                            .sel_div_o(sel_div_o),
                            .sel_smult_o(sel_smult_o),
                            .sel_mult_o(sel_mult_o),
                            .sel_rem_o(sel_rem_o),
                            .sel_quo_o(sel_quo_o),
                            .sel_mult_lo_o(sel_mult_lo_o),
                            .sel_mult_hi_o(sel_mult_hi_o),
                            .sel_smult_lo_o(sel_smult_lo_o),
                            .sel_smult_hi_o(sel_smult_hi_o),                               
                            .sel_data_in_o(sel_data_in_o),
                            .sel_sp_o(sel_sp_o),
                            .sel_operand_b_o(sel_operand_b_o), // to sp mux
                            .sel_operand_a_o(sel_operand_a_o),
                            .sel_operand_add_o(sel_operand_add_o),
                            .sel_opa_ext_o(sel_opa_ext_o),
                            .sel_pc_ext_o(sel_pc_ext_o),
                            .sel_stored_pc_o(sel_stored_pc_o),
	              	    .sel_pram_add_ext_o(sel_pram_add_ext_o),
			    .sel_pop_flags_o(sel_pop_flags_o),
                            .arith_cont_o(arith_cont_o),
                            .sr_wr_o(sr_wr_o),
			    .sp_wr_o(sp_wr_o),
                            .wr_cy_o(wr_cy_o),
                            .wr_zo_o(wr_zo_o),
                            .wr_sn_o(wr_sn_o),
                            .wr_ov_o(wr_ov_o),
                            .mask_o(mask_o),
                            .segment_o(segment_o),
                            .sel_flag_ext_o(sel_flag_ext_o),
                            .ra_o(ra_operand_o),
                            .sel_jmp_add_o(sel_jmp_add_o),
			    .sel_indirect_addr_o(sel_indirect_addr_o),
                            .jmp_address_o(jmp_address_o),
                            .stop_pc_inc_o(stop_pc_inc_o),
                            .zm_en_rd_ext_o(zm_en_rd_ext_o),
                            .zm_en_wr_ext_o(zm_en_wr_ext_o),
                            .push_o(push_o),
                            .pop_o(pop_o),
		       	    .intr_ack_h_o(intr_ack_h_o),
        	            .wr_pram_en_o(wr_pram_en_o),
			    .reti_o(reti),
			    .intr_flag_i(isr_flag),
			    .finish_init_o(finish_init)
                          );
endmodule
