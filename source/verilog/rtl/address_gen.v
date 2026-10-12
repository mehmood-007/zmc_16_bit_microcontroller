`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/31/2018 12:12:15 PM
// Design Name: 
// Module Name: address_gen
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


module address_gen ( segment_i,
		   segment_zero_i,
                   ra_addr_i,
                   rb_addr_i,
                   ra_phy_address_o,
                   rb_phy_address_o
                 );
                    
input [3:0] ra_addr_i;
input [3:0] rb_addr_i;
 
parameter SEGMENT_WIDTH = 1;

parameter SEGMENT_SIZE = SEGMENT_WIDTH - 1;
parameter ADDRESS_WIDTH = 3 + SEGMENT_SIZE;

output [ADDRESS_WIDTH : 0] ra_phy_address_o;
output [ADDRESS_WIDTH : 0] rb_phy_address_o;

input [SEGMENT_SIZE : 0] segment_i;
input [SEGMENT_SIZE : 0] segment_zero_i;

reg [ADDRESS_WIDTH : 0] ra_phy_address;
reg [ADDRESS_WIDTH : 0] rb_phy_address;

assign ra_phy_address_o[ADDRESS_WIDTH : 0] = ra_phy_address[ADDRESS_WIDTH : 0];
assign rb_phy_address_o[ADDRESS_WIDTH : 0] = rb_phy_address[ADDRESS_WIDTH : 0];

always@( segment_i or segment_zero_i or ra_addr_i or rb_addr_i)
  begin
  ra_phy_address[ ADDRESS_WIDTH : 0] = {segment_zero_i[SEGMENT_SIZE:0], ra_addr_i[2:0]};
  rb_phy_address[ ADDRESS_WIDTH : 0] = {segment_zero_i[SEGMENT_SIZE:0], rb_addr_i[2:0]};

   if(ra_addr_i[3] == 1'b1)
	ra_phy_address[ ADDRESS_WIDTH : 0] = {segment_i[SEGMENT_SIZE:0], ra_addr_i[2:0]};
   if(rb_addr_i[3] == 1'b1)		
       	rb_phy_address[ ADDRESS_WIDTH : 0] = {segment_i[SEGMENT_SIZE:0], rb_addr_i[2:0]};

  end
endmodule
