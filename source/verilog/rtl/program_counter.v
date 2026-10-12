`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/02/2018 11:05:46 PM
// Design Name: 
// Module Name: program_counter
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


module program_counter( clk,
                        a_reset_l,
                        address_pc,
			addr_bus_i,
			prog_en_h
                     );
    
   input clk;
   input a_reset_l;
   output [11:0] address_pc;
   input [11:0] addr_bus_i;
   output prog_en_h;
   
   reg [11:0] address_pc;
   reg prog_en_h;
      
   always @(posedge clk or negedge a_reset_l)
      begin
         if (a_reset_l == 1'b0)
           begin
  	      prog_en_h <= 1'b1;
              address_pc <= 12'h000;
	      
           end
         else begin
              address_pc <= addr_bus_i;
	      prog_en_h <= 1'b1;
	      end
      end
endmodule
