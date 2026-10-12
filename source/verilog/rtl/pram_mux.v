`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/08/2018 10:47:32 PM
// Design Name: 
// Module Name: pram_mux
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

module pram_mux( pram_address_o,
               pc_counter_i,
               direct_addr_i,
               sel_direct_addr_i
             );
  input [11:0] pc_counter_i;
  input [11:0] direct_addr_i; 
  
  input sel_direct_addr_i; 
  output [11:0] pram_address_o;
  
  reg [11:0] pram_address_o;
    
always @(pc_counter_i or direct_addr_i or sel_direct_addr_i)
  begin
  	pram_address_o[11:0] =  pc_counter_i[11:0];
  	if ( sel_direct_addr_i == 1'b1 )
      		pram_address_o[11:0] = direct_addr_i [11:0];           
  end
endmodule
