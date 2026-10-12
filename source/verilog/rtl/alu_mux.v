`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/25/2018 02:41:02 PM
// Design Name: 
// Module Name: alu_mux
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
module alu_mux( sign_i,
                zero_i,
                overflow_i,
                carry_flag_i,                
                alu_airth_result_i,
                alu_shift_result_i,
                alu_logic_result_i,
                alu_smult_result_lower_bits,
                alu_smult_result_higher_bits,
                alu_mult_result_lower_bits,
                alu_mult_result_higher_bits,                                
                alu_div_quo_i,
                alu_div_rem_i,
                carry_arith_i,
                carry_shift_i,
                sign_flag_smult_i,
                overflow_flag_airth_i,
                overflow_flag_div_i,
                zero_flag_smult_i,
                zero_flag_mult_i,
                zero_flag_div_i,
                ra_operand_i,         
                sel_airth_i,
		arith_cont_i,
                sel_shift_i,
                sel_logic_i,
                sel_rem_i,
                sel_quo_i,
                sel_data_in_i,
                sel_operand_a_i,
                sel_smult_lo_i,
                sel_smult_hi_i,
                sel_mult_lo_i,
                sel_mult_hi_i,		        
		data_in_i,
		carry_flag_intr_i,
		sign_flag_intr_i,
    		zero_flag_intr_i,
    		overflow_flag_intr_i,
		sel_pop_flags_i,	
                alu_result_o,
   	        carry_o,
   	        overflow_flag_o,
   	        zero_o,
   	        sign_o	            
               );

input [15:0] alu_airth_result_i;
input [15:0] alu_shift_result_i;
input [15:0] alu_logic_result_i;
input [15:0] alu_smult_result_lower_bits;
input [15:0] alu_smult_result_higher_bits;
input [15:0] alu_mult_result_lower_bits;
input [15:0] alu_mult_result_higher_bits;
input arith_cont_i;

input [15:0] alu_div_quo_i;
input [15:0] alu_div_rem_i;

input [15:0] ra_operand_i;

input carry_arith_i;
input carry_shift_i;
input carry_flag_i;
input overflow_flag_div_i;
input overflow_flag_airth_i;
input zero_flag_smult_i;
input zero_flag_mult_i;
input zero_flag_div_i;
input sign_flag_smult_i;

input sign_i;
input zero_i;
input overflow_i;

input [15:0] data_in_i;
input sel_airth_i;
input sel_shift_i;
input sel_logic_i;
input sel_data_in_i;
input sel_quo_i;
input sel_rem_i;
input sel_operand_a_i;
input sel_smult_lo_i;
input sel_smult_hi_i;
input sel_mult_lo_i;
input sel_mult_hi_i;

input carry_flag_intr_i;
input sign_flag_intr_i;
input zero_flag_intr_i;
input overflow_flag_intr_i;
input sel_pop_flags_i;

 
output [15:0] alu_result_o;
output carry_o;
output overflow_flag_o;
output zero_o;
output sign_o;    

reg [15:0] alu_result_o;
reg carry_o;
reg overflow_flag_o;
reg zero_o;
reg sign_o;


   always @( alu_logic_result_i or alu_airth_result_i or alu_shift_result_i or
             alu_smult_result_lower_bits or alu_smult_result_higher_bits or
             alu_mult_result_lower_bits or alu_mult_result_higher_bits or
             alu_div_rem_i or alu_div_quo_i or arith_cont_i or 
             sel_logic_i or sel_airth_i or sel_rem_i or sel_operand_a_i or
             sel_quo_i or sel_shift_i or sel_data_in_i or   
             sel_smult_lo_i or sel_mult_lo_i or sel_smult_hi_i or sel_mult_hi_i or             
             sign_i or zero_i or overflow_i or 
             carry_arith_i or carry_shift_i or overflow_flag_airth_i or 
             overflow_flag_div_i or zero_flag_smult_i or zero_flag_mult_i or
             zero_flag_div_i or sign_flag_smult_i or carry_flag_i  or 
	     data_in_i or ra_operand_i or carry_flag_intr_i or sign_flag_intr_i or 
	     zero_flag_intr_i or overflow_flag_intr_i or sel_pop_flags_i)
	 begin

	      
       if(sel_logic_i == 1'b1) begin
          alu_result_o [15:0] = alu_logic_result_i [15:0];
          carry_o = carry_flag_i;
          zero_o = zero_i;
          sign_o = sign_i;
          overflow_flag_o = overflow_i;
       end
       else if (sel_airth_i == 1'b1) begin
            alu_result_o [15:0] = alu_airth_result_i [15:0];
            carry_o = carry_arith_i;
            overflow_flag_o = overflow_flag_airth_i; 
	    zero_o =  (alu_result_o[15:0] == 16'h0000) ? 1'b1: 1'b0;
	    if (arith_cont_i == 1'b1)
            	zero_o =  (alu_result_o[15:0] == 16'h0000 && zero_i == 1'b1) ? 1'b1: 1'b0;
		
            sign_o = (alu_result_o[15] == 1'b1) ? 1'b1: 1'b0;
       end
       else if (sel_rem_i == 1'b1) begin    
            alu_result_o [15:0] = alu_div_rem_i [15:0];
            overflow_flag_o = overflow_flag_div_i;
            zero_o = zero_flag_div_i;
            sign_o = sign_i;
            carry_o = carry_flag_i;
       end       
       else if (sel_quo_i == 1'b1) begin    
            alu_result_o [15:0] = alu_div_quo_i [15:0]; 
            zero_o = zero_i; 
            sign_o = sign_i;  
            carry_o = carry_flag_i; 
            overflow_flag_o = overflow_i;                         
            end
       else if (sel_smult_lo_i == 1'b1)  begin
            alu_result_o [15:0] = alu_smult_result_lower_bits [15:0];
            zero_o = zero_flag_smult_i;
            sign_o = sign_flag_smult_i;
            carry_o = carry_flag_i;
            overflow_flag_o = overflow_i;
       end     
       else if (sel_smult_hi_i == 1'b1)  begin
            alu_result_o [15:0] = alu_smult_result_higher_bits [15:0];
            zero_o = zero_i;
            sign_o = sign_i;
            carry_o = carry_flag_i;
            overflow_flag_o = overflow_i;
       end
       else if (sel_mult_lo_i == 1'b1)  begin
            alu_result_o [15:0] = alu_mult_result_lower_bits [15:0];
            zero_o = zero_flag_mult_i;
            sign_o = sign_i;
            carry_o = carry_flag_i;
            overflow_flag_o = overflow_i;
       end
       else if (sel_mult_hi_i == 1'b1)  begin
            alu_result_o [15:0] = alu_mult_result_higher_bits [15:0];
            zero_o = zero_i;
            sign_o = sign_i;
            carry_o = carry_flag_i;
            overflow_flag_o = overflow_i;
       end       
       else if(sel_shift_i == 1'b1) begin
            alu_result_o [15:0] = alu_shift_result_i [15:0];
            carry_o = carry_shift_i;	    
            zero_o =  (alu_result_o[15:0] == 16'h0000) ? 1'b1: 1'b0;
            sign_o = (alu_result_o[15] == 1'b1) ? 1'b1: 1'b0;
            overflow_flag_o = overflow_i;

       end
       else if (sel_data_in_i == 1'b1) begin
            alu_result_o [15:0] = data_in_i [15:0];
            carry_o = carry_flag_i;
            zero_o = zero_i;
            sign_o = sign_i; 
            overflow_flag_o = overflow_i; 
       end
       else if (sel_operand_a_i == 1'b1) begin
             alu_result_o [15:0] = ra_operand_i [15:0];
             carry_o = carry_flag_i;
             zero_o = zero_i;
             sign_o = sign_i;
             overflow_flag_o = overflow_i;               
       end
       else if (sel_pop_flags_i == 1'b1) begin
             alu_result_o [15:0] = 16'h0000;
             carry_o = carry_flag_intr_i;
             zero_o = zero_flag_intr_i;
             sign_o = sign_flag_intr_i;
             overflow_flag_o = overflow_flag_intr_i;               
       end
       else begin  
	     alu_result_o [15:0] = alu_airth_result_i [15:0]; // default is Move 
 	     carry_o = carry_flag_i;
   	     zero_o = zero_i;
      	     sign_o = sign_i;
	     overflow_flag_o = overflow_i;                
       end
  end
endmodule
