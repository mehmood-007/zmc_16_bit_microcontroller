`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/28/2018 08:27:42 AM
// Design Name: 
// Module Name: reg_file
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
//  Memory with three port (two read, one write)

module reg_file( clk,
                 a_reset_l,
                 ra_i,
                 ra_wr_i,
                 ra_phy_address_i,
                 rb_phy_address_i,
                 ra_o,
                 rb_o
                ); 

parameter MEM_DEPTH = 16;
parameter SEGMENT_WIDTH = 1;
  
parameter ADDR_WIDTH = 4 + (SEGMENT_WIDTH - 1);                

input clk;
input a_reset_l;
input [15:0] ra_i;

input [ ADDR_WIDTH - 1 : 0 ] ra_phy_address_i;
input [ ADDR_WIDTH - 1 : 0 ] rb_phy_address_i;

input ra_wr_i;

output [15:0] ra_o;
output [15:0] rb_o;
    
integer i;
reg [15:0] memory [ 0 : MEM_DEPTH - 1]; // MEM_DEPTH should be defined at pre-synthesis stage

// Memory read logic - multiplexer
assign ra_o = memory[ra_phy_address_i];
assign rb_o = memory[rb_phy_address_i];

// Write registers
always@(posedge clk or negedge a_reset_l) 
    begin
        if (a_reset_l == 1'b0) 
            begin
                for ( i = 0; i < MEM_DEPTH; i = i + 1 )
                    memory[i] <= 16'h0000;
            end 
        else 
        begin
            if(ra_wr_i == 1'b1)
              	memory[ra_phy_address_i] <= ra_i;
    	end
    end	
endmodule
