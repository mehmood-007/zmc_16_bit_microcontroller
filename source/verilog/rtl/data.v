`timescale 1ns / 100ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/01/2018 10:17:45 AM
// Design Name: 
// Module Name: data
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
module data(   clk,
	     a_reset_l,
	     sel_airth_i,
	     sel_move_i,
             sel_logic_i,
             sel_shift_i,
             sel_data_in_i,
             opcode_o,
             sel_operand_a_i,
	     sel_indirect_addr_i,
             mask_i,
             sel_sp_i,
             sel_operand_b_i,
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
             arith_cont_i,
    	     sel_jmp_add_i,
    	     sel_operand_add_i,
    	     sel_pc_ext_i,
    	     sel_opa_ext_i,
             sel_stored_pc_i,
	     sel_pram_add_ext_i,
	     sel_flag_ex_i,
	     sel_pop_flags_i,
	     wr_en_i,
             wr_cy_i,
             wr_zo_i,
             wr_sn_i,
             sr_wr_i,
	     sp_wr_i,
             ra_wr_i,
             wr_ov_i, 
             ra_operand_i,
             ra_addr_i,
             rb_addr_i,
             data_in_i,
             segment_i,
             stop_pc_inc_i,
    	     init_pc_i,
	     init_sp_i,
             prog_mem_o,
    	     jmp_address_i,
    	     push_i,
             pop_i,
    	     inst_reg_o,
             data_out_o,
             io_addr_o,
             condition_o,
    	     finish_init_pram_o
            );
	    	    
    parameter SEGMENT_WIDTH = 1; 
    parameter MEM_DEPTH = 16;   
    
    parameter SEGMENT_SIZE = SEGMENT_WIDTH - 1;   
    parameter ADDRESS_WIDTH = 3 + SEGMENT_SIZE;
    
    input clk;
    input a_reset_l;
    
    output [15:0] prog_mem_o;    
    input [15:0] data_in_i;
       
    input sel_airth_i; 
    input sel_move_i;  
    input sel_logic_i; 
    input sel_shift_i;
    input sel_data_in_i;
    input sel_div_i;
    input sel_smult_i;
    input sel_mult_i;
    input sel_rem_i;
    
    input sel_quo_i;
    input sel_sp_i;
    input sel_operand_b_i;
    input sel_operand_add_i; 
    input sel_pc_ext_i;
    input sel_opa_ext_i;
    input sel_jmp_add_i;
    input sel_pop_flags_i;
    
    input sel_pram_add_ext_i;            
    input arith_cont_i;
    input wr_en_i;
    input wr_cy_i;
    input wr_zo_i;
    input wr_sn_i;
    input wr_ov_i;
    input init_pc_i;
    
    input sr_wr_i;
    input sp_wr_i;
    input ra_wr_i;    
    input [15:0] ra_operand_i;
    input [11:0] jmp_address_i;
    input [3:0] ra_addr_i;
    input [3:0] rb_addr_i;
    input [3:0] segment_i;
    input sel_stored_pc_i;

    input sel_mult_lo_i;
    input sel_mult_hi_i;
    input sel_smult_lo_i;
    input sel_smult_hi_i;             
    input sel_flag_ex_i;
    input sel_indirect_addr_i;
        
    input stop_pc_inc_i;
      
    input push_i;
    input pop_i;
    input sel_operand_a_i;
    input[3:0] mask_i;
    output [7:0] opcode_o;        
    
    wire [11:0] pram_address;
    output [7:0] inst_reg_o;
    output [15:0] io_addr_o;
       
    output condition_o;     
    output ack_smult_o;
    output ack_mult_o;
    output ack_division_o;
    output finish_init_pram_o;
    output [15:0] data_out_o;
	
    wire [ ADDRESS_WIDTH : 0 ] ra_phy_address;
    wire [ ADDRESS_WIDTH : 0 ] rb_phy_address;
    
    wire [ SEGMENT_SIZE : 0 ] segment;
    wire [ SEGMENT_SIZE : 0 ] segment_zero;

    wire [15:0] reg_alu_opa_bus;
    wire [15:0] reg_alu_opb_bus; 
    wire [15:0] ra_operand;
     
    wire z_flag;
    wire sign_flag;
    wire carry_flag;
    wire overflow_flag;
    wire overflow_flag_alu;    
           
    wire carry_alu;
    wire z_flag_alu;
    wire sign_flag_alu;

    wire [15:0] stack_ptr;   
    wire[11:0] address_pc;
    	
    wire carry_flag_intr;
    wire sign_flag_intr;
    wire zero_flag_intr;
    wire overflow_flag_intr;
    wire[11:0] operand_b_add;
    wire[11:0] address_bus;
    wire[11:0] pc_address_poped; 
    wire prog_en_h;
       
    assign overflow_flag_intr = data_in_i[12];
    assign zero_flag_intr = data_in_i[13];
    assign sign_flag_intr = data_in_i[14];
    assign carry_flag_intr = data_in_i[15];
    assign pc_address_poped = data_in_i[11:0];
    
   // assign operand_b_add[11:0] = reg_alu_opb_bus[11:0];
   // assign opb_bus[15:0] = reg_alu_opb_bus[15:0];
   wire[15:0] pointer;
   input init_sp_i;
 
       	
 inst_rom inst_rom_i (.clk(clk),
          	      .prog_en_h(prog_en_h),
                      .adr_p_mem(pram_address),
                      .prog_mem(prog_mem_o),
		      .data_in_i(data_in_i),
		      .wr_en(wr_en_i)
                     );		
		    
 pram_mux pram_mux_i( .pram_address_o(pram_address),
                      .pc_counter_i(address_bus),
                      .direct_addr_i(reg_alu_opb_bus[11:0]),
		      .sel_direct_addr_i(sel_operand_add_i)
                    );

		   
 pc_mux	pc_mux_i(.address_i(jmp_address_i),
                 .sel_jmp_add_i(sel_jmp_add_i),
                 .current_addr_i(address_pc),
                 .stop_pc_inc_i(stop_pc_inc_i),
                 .data_in_i(pc_address_poped),
                 .sel_stored_pc_i(sel_stored_pc_i),
                 .init_pc_i(init_pc_i),
                 .addr_bus_o(address_bus),
                 .sel_indirect_addr_i(sel_indirect_addr_i),
				.indirect_addr_i(reg_alu_opb_bus[11:0])
		);
  
 program_counter program_counter_i( .clk(clk),
                                    .a_reset_l(a_reset_l),
                                    .address_pc(address_pc),
                                    .addr_bus_i(address_bus),
                                    .prog_en_h(prog_en_h)
                                  );

 inst_reg inst_reg_i( .clk(clk),
                      .a_reset_l(a_reset_l),
                      .instruction_i(prog_mem_o),
                      .ire_o(inst_reg_o),
					  .opcode_o(opcode_o)
                    );     
		    				        
 segment_reg #(.SEGMENT_WIDTH(SEGMENT_WIDTH)) segment_reg_i( 
                .clk(clk),
                .a_reset_l(a_reset_l),
                .seg_reg_o(segment),
                .seg_reg_i(segment_i),
                .segment_zero_o(segment_zero),
                .sr_wr_i(sr_wr_i)
               );
                             
 address_gen #(.SEGMENT_WIDTH(SEGMENT_WIDTH)) address_gen_i( .segment_i(segment),
 							.segment_zero_i(segment_zero),
                           				.ra_addr_i(ra_addr_i),
                          				.rb_addr_i(rb_addr_i),
                          				.ra_phy_address_o(ra_phy_address),
                          				.rb_phy_address_o(rb_phy_address)
                            			      );
  ///  three port Mem
 reg_file #(.MEM_DEPTH(MEM_DEPTH),.SEGMENT_WIDTH(SEGMENT_WIDTH)) reg_file_i
 		     ( .clk(clk),
                       .a_reset_l(a_reset_l),
                       .ra_i(ra_operand),
                       .ra_wr_i(ra_wr_i),
                       .ra_o(reg_alu_opa_bus),
                       .rb_o(reg_alu_opb_bus), 
                       .ra_phy_address_i(ra_phy_address),
                       .rb_phy_address_i(rb_phy_address)
                     );
alu_core alu_core_i( .clk(clk),               
                     .a_reset_l(a_reset_l),
                     .reg_alu_opa_bus_i(reg_alu_opa_bus),
    	             .reg_alu_opb_bus_i(reg_alu_opb_bus),
    	             .data_in_i(data_in_i),
      	             .ra_operand_i(ra_operand_i),
    	             .opcode_i(opcode_o),
                     .sel_airth_i(sel_airth_i),
                     .sel_logic_i(sel_logic_i), 
                     .sel_shift_i(sel_shift_i),                     
                     .sel_div_i(sel_div_i),
                     .sel_smult_i(sel_smult_i),
                     .sel_mult_i(sel_mult_i),
                     .sel_rem_i(sel_rem_i),
                     .sel_quo_i(sel_quo_i),
                     .sel_mult_lo_i(sel_mult_lo_i),
                     .sel_mult_hi_i(sel_mult_hi_i),
                     .sel_smult_lo_i(sel_smult_lo_i),
                     .sel_smult_hi_i(sel_smult_hi_i),                   
                     .sel_operand_a_i(sel_operand_a_i),
	             .sel_pop_flags_i(sel_pop_flags_i),
                     .sel_data_in_i(sel_data_in_i),
                     .arith_cont_i(arith_cont_i),
                     .carry_flag_i(carry_flag),
                     .z_flag_i(z_flag),
                     .sign_flag_i(sign_flag),
                     .overflow_flag_i(overflow_flag),
	             .alu_result_o(ra_operand),
                     .carry_o(carry_alu),
                     .z_flag_o(z_flag_alu),
                     .sign_flag_o(sign_flag_alu),
                     .overflow_flag_o(overflow_flag_alu),
                     .ack_mult_o(ack_mult_o),
                     .ack_smult_o(ack_smult_o),
                     .ack_division_o(ack_division_o),
		     .carry_flag_intr_i(carry_flag_intr),
		     .sign_flag_intr_i(sign_flag_intr),
    		     .zero_flag_intr_i(zero_flag_intr),
    		     .overflow_flag_intr_i(overflow_flag_intr)
	            );

                      	               
flag_bank flag_bank_i(.clk(clk),
                      .a_reset_l(a_reset_l),
                      .carry_i(carry_alu),
                      .z_flag_i(z_flag_alu),
                      .sign_flag_i(sign_flag_alu),
                      .ov_flag_i(overflow_flag_alu),
                      .carry_flag_o(carry_flag),
                      .z_flag_o(z_flag),
                      .sign_flag_o(sign_flag),
                      .ov_flag_o(overflow_flag),
                      .wr_cy_i(wr_cy_i),
                      .wr_zo_i(wr_zo_i),
                      .wr_sn_i(wr_sn_i),
                      .wr_ov_i(wr_ov_i)                       
                     );
                     
condition_mnemonics condition_mnemonics_i( .mask_i(mask_i),
                                           .carry_flag_i(carry_flag),
                                           .z_flag_i(z_flag),
                                           .sign_flag_i(sign_flag),
                                           .ov_flag_i(overflow_flag),
                                           .condition_o(condition_o)
                                          );  

ext_add_mux ext_add_mux_i( .stack_pointer_i(stack_ptr),
                          .rb_i(reg_alu_opb_bus),
                          .sel_sp_i(sel_sp_i),
                          .sel_rb_i(sel_operand_b_i),
                          .sel_pram_add_ext_i(sel_pram_add_ext_i),
                          .addr_bus_i(address_bus),
                          .io_addr_o(io_addr_o)
                          );

ext_dat_mux ext_dat_mux_i(.reg_alu_opa_bus_i(reg_alu_opa_bus),
                          .pc_counter_i(address_pc),
                          .data_out_o(data_out_o),
                          .sel_pc_ext_i(sel_pc_ext_i),
                          .sel_flag_ex_i(sel_flag_ex_i),
                          .sel_opa_ext_i(sel_opa_ext_i),
                          .c_flag_i(carry_flag),
                          .z_flag_i(z_flag),
                          .s_flag_i(sign_flag),
                          .o_flag_i(overflow_flag)
                         );

stack_pointer stack_pointer_i ( .clk(clk),               
                                .a_reset_l(a_reset_l),
                                .ptr_o(stack_ptr),
				.pointer(pointer)
                              );

sp_mux sp_mux_i	(.push_i(push_i),
	      	.pop_i(pop_i),
		.sp_wr_i(sp_wr_i),
		.init_sp(init_sp_i),
		.reg_alu_opb_bus_i(reg_alu_opb_bus),
		.pointer(pointer),
		.ptr_i(stack_ptr)
             	);
	     			         
finish_init_seq  finish_init_seq_i( .finish_init_pram_o(finish_init_pram_o),
                                    .address_i(address_bus)	
 				  );                                                       
endmodule
