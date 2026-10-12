`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/30/2018 10:46:04 PM
// Design Name: 
// Module Name: tb_ctrl
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
module tb_zm_processor(
    );

    reg  clk;
    reg  a_reset_l;
    reg intr_h;
    reg sync_h;  
  
    wire wb_we; 
    wire wb_stb;
    wire wb_ack;
    wire wb_cyc;
    wire[15:0] wb_adr;
    wire[15:0] wb_dat_o;
    wire[15:0] wb_dat_i;
    wire intr_ack_h;
    
    parameter CLKPERIODE = 12;
  
    initial clk = 1'b1;
    always #(CLKPERIODE/2) clk = !clk;
  
    initial 
    begin
        a_reset_l = 1'b0;
        #33
        a_reset_l = 1'b1;
    end
					    

wishbone_slave wishbone_slave_i( .clk(clk),
                                 .a_reset_l(a_reset_l),
                                 .wb_ack_o(wb_ack),
                                 .wb_we_i(wb_we),
                                 .wb_stb_i(wb_stb),
                                 .wb_cyc_i(wb_cyc),
                                 .wb_adr_i(wb_adr),
                                 .wb_dat_o(wb_dat_o),
                                 .wb_dat_i(wb_dat_i)
                                );
				   
zm_processor zm_processor_i(.clk(clk),
                            .a_reset_l(a_reset_l),
			    .wb_ack(wb_ack),
   		            .wb_we(wb_we),
                 	    .wb_stb(wb_stb),
      	                    .wb_cyc(wb_cyc),
                 	    .wb_adr(wb_adr),
                  	    .wb_dat_i(wb_dat_i),
		            .wb_dat_o(wb_dat_o),
        		    .intr_h_i(intr_h),
        		    .intr_ack_h_o(intr_ack_h),
        		    .sync_h_i(sync_h)
                           );   

 // Template for testcase specific pattern generation
// File has to be situated in simulation/<simulator_name>/[testcase] directory
`include "testcase.v"  

endmodule
