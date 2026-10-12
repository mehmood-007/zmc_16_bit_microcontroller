`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/01/2018 10:18:47 AM
// Design Name: 
// Module Name: zm_processor
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments
// 
//////////////////////////////////////////////////////////////////////////////////


module zm_processor(clk,
                  a_reset_l,
		  wb_ack,
          	  wb_we,
  	          wb_stb,
               	  wb_cyc,
             	  wb_adr,
        	  wb_dat_i,
             	  sync_h_i,
	          intr_h_i,
             	  wb_dat_o,
             	  intr_ack_h_o
        	);
parameter MEM_DEPTH = 128; 
parameter INTRPT_SV_ROUTINE = 12'h700;	
parameter SEG_WIDTH = (MEM_DEPTH >> 5);
	   
input clk;
input a_reset_l;
input wb_ack;
input [15:0] wb_dat_o;
input intr_h_i;
input sync_h_i;
   			
output wb_we;
output wb_stb;
output wb_cyc; 
output [15:0] wb_adr;
output intr_ack_h_o;
output [15:0] wb_dat_i;
 
wire sel_airth;   
wire sel_logic; 
wire sel_shift;
wire sel_move;

wire sel_smult;
wire sel_mult;
wire sel_rem;
wire sel_quo;
wire sel_div;
wire sel_mult_lo;
wire sel_mult_hi;
wire sel_smult_lo;
wire sel_smult_hi;
wire ack_mult;
wire ack_smult;
wire ack_division;
wire[3:0] mask;
wire condition;
wire sel_data_in;
wire sel_operand_add; 
wire sel_stored_pc;

wire arith_cont;
wire sr_wr;
wire sp_wr;
wire wr_en; 
wire wr_cy;
wire wr_zo;
wire wr_sn;
wire wr_ov;
wire init_pc;

wire[15:0] ra_operand;
wire[3:0] ra_addr;
wire[3:0] rb_addr;
wire ra_wr;    
wire [3:0] segment;
wire [7:0] opcode;
wire [7:0] inst_reg;
wire [15:0] io_addr;
wire [11:0] jmp_address;

wire stop_pc_inc;
wire zm_en_rd_ext;  
wire zm_en_wr_ext; 
wire zm_wb_data_ack;
    
wire push;
wire pop;
wire sel_jmp_add; 
wire sel_sp;
wire sel_operand_b;
wire sel_operand_a;    
wire sel_pc_ext;
wire sel_opa_ext;
wire sel_indirect_addr;

wire finish_init_pram;
wire sel_pram_add_ext;
wire sel_pop_flags;

wire [15:0] data_in;
wire [15:0] data_out; 

wire sel_flag_ext; // push Flags to SP
wire[15:0] prog_mem;

wire[15:0] reg_wb_dat_out;
wire[15:0] reg_wb_dat_in;
wire reg_wb_dat_ack;
wire reg_wb_dat_stb;
wire reg_wb_dat_cyc;
wire reg_wb_we;

wire[15:0] reg_wb_adr;

assign wb_adr = reg_wb_adr; // Ouput to WB Slave
assign wb_dat_i = reg_wb_dat_in; // Ouput to WB Slave
assign wb_stb = reg_wb_dat_stb; // Ouput to WB Slave
assign wb_cyc = reg_wb_dat_cyc; // Ouput to WB Slave
assign wb_we = reg_wb_we; // Ouput to WB Slave

wire[15:0] m_wb_dat_in;
wire[15:0] m_wb_adr;
wire m_wb_cyc;
wire m_wb_stb;
wire m_wb_we;
wire init_sp;

ctrl #(.INTRPT_SV_ROUTINE(INTRPT_SV_ROUTINE)) ctrl_i (.clk(clk),
  					        .a_reset_l(a_reset_l),  
					        .ire_i(inst_reg),
    	      					.prog_mem_i(prog_mem),
    	     					.intr_h_i(intr_h_i),
    	     					.sync_h_i(sync_h_i),
    	     					.zm_wb_data_ack_i(zm_wb_data_ack),
             					.sel_airth_o(sel_airth),
						.sel_move_o(sel_move),
             					.sel_logic_o(sel_logic),
             					.sel_shift_o(sel_shift),
             					.condition_i(condition),
	     					.init_pc_o(init_pc),
						.init_sp_o(init_sp),
             					.mask_o(mask),
            					.ack_mult_i(ack_mult),
             					.ack_smult_i(ack_smult),
             					.ack_division_i(ack_division), 
	     					.finish_init_pram_i(finish_init_pram),               
             					.sel_div_o(sel_div),
             					.sel_smult_o(sel_smult),
            					.sel_mult_o(sel_mult),
            					.sel_rem_o(sel_rem),
             					.sel_quo_o(sel_quo),
             					.sel_mult_lo_o(sel_mult_lo),
             					.sel_mult_hi_o(sel_mult_hi),
             					.sel_smult_lo_o(sel_smult_lo),
             					.sel_smult_hi_o(sel_smult_hi),              
             					.sel_data_in_o(sel_data_in),
             					.sel_sp_o(sel_sp),
             					.sel_operand_a_o(sel_operand_a),
            	 				.sel_operand_b_o(sel_operand_b),
             					.sel_operand_add_o(sel_operand_add),
						.sel_indirect_addr_o(sel_indirect_addr),
    	     					.sel_pram_add_ext_o(sel_pram_add_ext),
             					.sel_pc_ext_o(sel_pc_ext),
             					.sel_opa_ext_o(sel_opa_ext),
             					.sel_stored_pc_o(sel_stored_pc),
	     					.sel_pop_flags_o(sel_pop_flags),
             					.sel_jmp_add_o(sel_jmp_add),
             					.arith_cont_o(arith_cont),
             					.sr_wr_o(sr_wr),
	     					.sp_wr_o(sp_wr),
             					.wr_cy_o(wr_cy),
             					.wr_zo_o(wr_zo),
             					.wr_sn_o(wr_sn),
             					.wr_ov_o(wr_ov),             
	     					.push_o(push),
             					.pop_o(pop),
             					.ra_operand_o(ra_operand),
             					.ra_addr_o(ra_addr),
             					.rb_addr_o(rb_addr),
             					.ra_wr_o(ra_wr),
            					.segment_o(segment),
             					.opcode_i(opcode),
  	     					.jmp_address_o(jmp_address),
 	     					.stop_pc_inc_o(stop_pc_inc),
            					.zm_en_rd_ext_o(zm_en_rd_ext),
            					.zm_en_wr_ext_o(zm_en_wr_ext), 
    	     					.intr_ack_h_o(intr_ack_h_o),
	     					.wr_pram_en_o(wr_en),
	     					.sel_flag_ext_o(sel_flag_ext)	     
           				);    
 
  
        
data #(.MEM_DEPTH(MEM_DEPTH), .SEGMENT_WIDTH(SEG_WIDTH)) data_i(
                             .clk(clk),
                             .a_reset_l(a_reset_l),
                             .sel_airth_i(sel_airth),
			     .sel_move_i(sel_move),
                             .sel_logic_i(sel_logic),
                             .sel_shift_i(sel_shift),                    
                             .sel_div_i(sel_div),
                             .sel_smult_i(sel_smult),
                             .sel_mult_i(sel_mult),
                             .sel_rem_i(sel_rem),
                             .sel_quo_i(sel_quo),  
                             .sel_mult_lo_i(sel_mult_lo),
                             .sel_mult_hi_i(sel_mult_hi),
                             .sel_smult_lo_i(sel_smult_lo),
                             .sel_smult_hi_i(sel_smult_hi),
                             .sel_data_in_i(sel_data_in),
                             .sel_operand_a_i(sel_operand_a),
                             .sel_sp_i(sel_sp),
                             .sel_operand_b_i(sel_operand_b),
                             .sel_operand_add_i(sel_operand_add),
			     .sel_indirect_addr_i(sel_indirect_addr),
                             .sel_pc_ext_i(sel_pc_ext),
                             .sel_opa_ext_i(sel_opa_ext),
                             .sel_stored_pc_i(sel_stored_pc),
			     .sel_pop_flags_i(sel_pop_flags),
	      		     .sel_pram_add_ext_i(sel_pram_add_ext),
                             .arith_cont_i(arith_cont),
                             .stop_pc_inc_i(stop_pc_inc),
            		     .init_pc_i(init_pc),
			     .init_sp_i(init_sp),
			     .wr_en_i(wr_en),         	         
                             .wr_cy_i(wr_cy),
                             .wr_zo_i(wr_zo),
                             .wr_sn_i(wr_sn),
                             .sr_wr_i(sr_wr),
			     .sp_wr_i(sp_wr),
                             .ra_wr_i(ra_wr),
                             .wr_ov_i(wr_ov),
                             .ra_operand_i(ra_operand),
                             .ra_addr_i(ra_addr),
                             .rb_addr_i(rb_addr),
                             .segment_i(segment),
	               	     .opcode_o(opcode),
                             .jmp_address_i(jmp_address),
                             .prog_mem_o(prog_mem),
                             .sel_jmp_add_i(sel_jmp_add),
                             .push_i(push),
                             .pop_i(pop),
                             .condition_o(condition),
                             .mask_i(mask),
                             .inst_reg_o(inst_reg),
                             .data_in_i(data_in),
                             .sel_flag_ex_i(sel_flag_ext),
                             .data_out_o(data_out),
                             .io_addr_o(io_addr),
		             .ack_mult_o(ack_mult),
                             .ack_smult_o(ack_smult),
                             .ack_division_o(ack_division),
	               	     .finish_init_pram_o(finish_init_pram)
    	           	  );  
		  	
reg_wb reg_wb_i(.clk(clk),               
                .a_reset_l(a_reset_l),
                .reg_wb_dat_ack_o(reg_wb_dat_ack),
                .reg_wb_dat_in_o(reg_wb_dat_in),
                .reg_wb_dat_out_o(reg_wb_dat_out),
                .reg_wb_adr_o(reg_wb_adr),
                .reg_wb_dat_stb_o(reg_wb_dat_stb),
                .reg_wb_dat_cyc_o(reg_wb_dat_cyc),
                .reg_wb_we_o(reg_wb_we),
                .wb_adr_i(m_wb_adr),
                .wb_we_i(m_wb_we),
                .wb_dat_ack_i(wb_ack),
                .wb_dat_in_i(m_wb_dat_in),
                .wb_dat_out_i(wb_dat_o),
                .wb_cyc_i(m_wb_cyc),
                .wb_stb_i(m_wb_stb)                                                            
                );
                                                             
wishbone_master wishbone_master_i(.clk(clk),
                                  .a_reset_l(a_reset_l),
                                  .wb_ack_i(reg_wb_dat_ack),
                                  .wb_we_o(m_wb_we),
                                  .wb_stb_o(m_wb_stb),
                                  .wb_cyc_o(m_wb_cyc),
                                  .wb_adr_o(m_wb_adr),
                                  .wb_dat_i(reg_wb_dat_out),
                                  .wb_dat_o(m_wb_dat_in),
                                  .zm_adr_i(io_addr),  /// FROM SP MUX
                                  .zm_dat_i(data_out),  /// FROM REG FILE
                                  .zm_dat_o(data_in), /// to ALU MUX
                                  .zm_en_rd_ext_i(zm_en_rd_ext),
                                  .zm_en_wr_ext_i(zm_en_wr_ext),
                                  .zm_data_ack_o(zm_wb_data_ack)
                                 );
endmodule
