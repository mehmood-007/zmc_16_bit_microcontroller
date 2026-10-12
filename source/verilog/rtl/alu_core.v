`timescale 1ns/100ps

module alu_core( clk,               
                 a_reset_l,
                 reg_alu_opa_bus_i,
                 reg_alu_opb_bus_i,
                 data_in_i,
                 ra_operand_i,
                 opcode_i,
                 sel_airth_i,   
                 sel_logic_i, 
                 sel_shift_i,
                 sel_div_i,
                 sel_smult_i,
                 sel_mult_i,
                 sel_rem_i,
                 sel_quo_i, 
                 sel_mult_lo_i,
                 sel_mult_hi_i,
                 sel_smult_lo_i,
                 sel_smult_hi_i,
                 ack_smult_o,
                 ack_mult_o,
                 ack_division_o,  
                 sel_pop_flags_i,   
                 sel_operand_a_i,
                 sel_data_in_i,
                 arith_cont_i,
                 carry_flag_i,
                 z_flag_i,
                 sign_flag_i,
                 overflow_flag_i,
                 alu_result_o,
                 carry_o,
                 z_flag_o,
                 sign_flag_o,
                 overflow_flag_o,
		 carry_flag_intr_i,
		 sign_flag_intr_i,
    		 zero_flag_intr_i,
    		 overflow_flag_intr_i	             
	    );     
    input [15:0] reg_alu_opa_bus_i;
    input [15:0] reg_alu_opb_bus_i;
    input [7:0] opcode_i;
    input [15:0] data_in_i;
    input [15:0] ra_operand_i;
    
    input clk;
    input a_reset_l;     
    input z_flag_i;
    input sign_flag_i;
    input carry_flag_i;
    input overflow_flag_i;
    
    input sel_airth_i;
    input sel_shift_i;
    input sel_logic_i;
    input sel_operand_a_i;
    input sel_div_i;
    input sel_smult_i;
    input sel_mult_i;
    input sel_rem_i;
    input sel_quo_i;
    input sel_pop_flags_i;
    
    input sel_mult_lo_i;
    input sel_mult_hi_i;
    input sel_smult_lo_i;
    input sel_smult_hi_i;
           
    input arith_cont_i;
    input sel_data_in_i;
    
    input carry_flag_intr_i;
    input sign_flag_intr_i;
    input zero_flag_intr_i;
    input overflow_flag_intr_i;
     
    output [15:0] alu_result_o; 
    output carry_o;  
    output z_flag_o;
    output sign_flag_o;
    output overflow_flag_o;

    output ack_smult_o;
    output ack_mult_o;
    output ack_division_o;
          
    wire carry_arith_o;   
    wire carry_shift_o;
    wire [15:0] alu_logic_result;
    wire [15:0] alu_shift_result;
    wire [15:0] alu_airth_result;
    wire [15:0] alu_div_rem;
    wire [15:0] alu_div_quo;
    wire [15:0] mult_lower_bits;
    wire [15:0] mult_higher_bits;

    wire [15:0] smult_lower_bits;
    wire [15:0] smult_higher_bits;
        
    wire sign_flag_airth_shift;
    wire overflow_flag_airth;

    wire mult_zero_flag;

    wire smult_sign_flag;
    wire smult_zero_flag;
    
    wire div_zero_flag;
    wire div_ov_flag;
    wire[15:0] reg_opa;
    wire[15:0] reg_opb;
    wire[15:0] reg_abs_opa;
           
alu_arithmetic alu_arithmetic_i( .reg_alu_opa_bus_i(reg_alu_opa_bus_i),
                                 .reg_alu_opb_bus_i(reg_alu_opb_bus_i),
                                 .carry_flag_i(carry_flag_i),
                                 .opcode_i(opcode_i),
                                 .carry_arith_o(carry_arith_o),
                                 .overflow_i(overflow_flag_i),
                                 .overflow_o(overflow_flag_airth),
                                 .alu_airth_result_o(alu_airth_result)                                 
	                           );   
 				      
alu_shift alu_shift_i( .reg_alu_opb_bus_i(reg_alu_opb_bus_i), 
                       .carry_flag_i(carry_flag_i),
                       .opcode_i(opcode_i),
                       .carry_shift_o(carry_shift_o),
                       .alu_shift_result_o(alu_shift_result)
                    );	       
		    
alu_logic alu_logic_i( .reg_alu_opa_bus_i(reg_alu_opa_bus_i),
                       .reg_alu_opb_bus_i(reg_alu_opb_bus_i),
                       .opcode_i(opcode_i),
                       .alu_logic_result_o(alu_logic_result)
                      );

operand_flip_flop operand_flip_flop_i( .clk(clk),
                                       .a_reset_l(a_reset_l),
                                       .reg_alu_opa_bus_i(reg_alu_opa_bus_i),
                                       .reg_alu_opb_bus_i(reg_alu_opb_bus_i),
                                       .reg_opa(reg_opa),
                                       .reg_opb(reg_opb),
                                       .reg_abs_opa(reg_abs_opa)                   
                                      );
                                                   
unsigned_divider unsigned_divider_i( .clk(clk),
                                     .a_reset_l(a_reset_l),
                                     .opa(reg_opa),
                                     .opb(reg_opb),
                                     .sel_div_i(sel_div_i),
                                     .remainder(alu_div_rem),
                                     .quotient(alu_div_quo),
                                     .ack_division_o(ack_division_o),
                                     .div_ov_flag_o(div_ov_flag),
                                     .div_zero_flag_o(div_zero_flag)                                    
                                   );                               
                                      
unsigned_multiplier unsigned_multiplier_i(.clk(clk),
                                          .a_reset_l(a_reset_l),
                                          .opa(reg_opa),
                                          .opb(reg_opb),
                                          .sel_mult_i(sel_mult_i),
                                          .ack_mult_o(ack_mult_o),
                                          .mult_zero_flag_o(mult_zero_flag),
                                          .mult_lower_bits_o(mult_lower_bits),
                                          .mult_higher_bits_o(mult_higher_bits)                                    
                                         ); 

signed_multiplier signed_multiplier_i( .clk(clk),
                                       .a_reset_l(a_reset_l),
                                       .opa_msb(reg_opa[15]),
                                       .opb(reg_opb),
                                       .reg_abs_opa(reg_abs_opa),
                                       .sel_smult_i(sel_smult_i),
                                       .ack_smult_o(ack_smult_o),
                                       .smult_sign_flag_o(smult_sign_flag),
                                       .smult_zero_flag_o(smult_zero_flag),
                                       .smult_lower_bits_o(smult_lower_bits),
                                       .smult_higher_bits_o(smult_higher_bits) 
                                    );
                                      
alu_mux alu_mux_i( .alu_airth_result_i(alu_airth_result),
                   .alu_shift_result_i(alu_shift_result),
                   .alu_logic_result_i(alu_logic_result),                   
                   .alu_mult_result_lower_bits(mult_lower_bits),
                   .alu_mult_result_higher_bits(mult_higher_bits),   
                   .alu_smult_result_lower_bits(smult_lower_bits),
                   .alu_smult_result_higher_bits(smult_higher_bits),                                    
                   .alu_div_quo_i(alu_div_quo),
                   .alu_div_rem_i(alu_div_rem),
                   .sign_flag_smult_i(smult_sign_flag),
                   .zero_flag_smult_i(smult_zero_flag),
                   .zero_flag_mult_i(mult_zero_flag), 
                   .zero_flag_div_i(div_zero_flag),            
                   .sel_rem_i(sel_rem_i),
                   .sel_quo_i(sel_quo_i),  
                   .sel_smult_lo_i(sel_smult_lo_i),
                   .sel_smult_hi_i(sel_smult_hi_i),
                   .sel_mult_lo_i(sel_mult_lo_i),
                   .sel_mult_hi_i(sel_mult_hi_i), 
                   .sel_airth_i(sel_airth_i),
		   .arith_cont_i(arith_cont_i),
                   .sel_shift_i(sel_shift_i),
                   .sel_logic_i(sel_logic_i),
                   .sel_data_in_i(sel_data_in_i),
                   .sel_operand_a_i(sel_operand_a_i),
		   .sel_pop_flags_i(sel_pop_flags_i),                
                   .ra_operand_i(ra_operand_i),
                   .carry_arith_i(carry_arith_o),
                   .carry_shift_i(carry_shift_o),
  		   .carry_flag_i(carry_flag_i),
  		   .sign_i(sign_flag_i),
  		   .zero_i(z_flag_i),
  		   .overflow_i(overflow_flag_i),
  		   .overflow_flag_airth_i(overflow_flag_airth),
                   .overflow_flag_div_i(div_ov_flag),
        	   .carry_flag_intr_i(carry_flag_intr_i),
		   .sign_flag_intr_i(sign_flag_intr_i),
    		   .zero_flag_intr_i(zero_flag_intr_i),
    		   .overflow_flag_intr_i(overflow_flag_intr_i),		                                  
                   .data_in_i(data_in_i),
                   .carry_o(carry_o),
                   .sign_o(sign_flag_o),
                   .zero_o(z_flag_o),
                   .overflow_flag_o(overflow_flag_o),     
                   .alu_result_o(alu_result_o)
                );
endmodule
