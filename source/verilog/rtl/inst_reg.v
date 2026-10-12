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


module inst_reg( clk,
                 a_reset_l,
                 instruction_i,
                 ire_o,
		 opcode_o
               );

   input clk;
   input a_reset_l;
   input [15:0] instruction_i;
   output [7:0] ire_o;
   output [7:0] opcode_o;
    
   reg [15:0] ire;
   assign ire_o = ire;
   //reg [7:0] opcode_o;
   assign opcode_o[7:0] = instruction_i[15:8];
   
   always @(posedge clk or negedge a_reset_l)
      begin
         if (a_reset_l == 1'b0)
           begin
              ire <= 16'h0000;
           end
         else
              ire <= instruction_i;
	      
      end
 /* always @(instruction_i) begin
  	opcode_o[7:0] = instruction_i[15:8];	
  end
  */
endmodule
