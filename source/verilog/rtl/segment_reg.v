`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/30/2018 11:29:57 PM
// Design Name: 
// Module Name: segment_reg
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

module segment_reg
                  ( clk,
                    a_reset_l,
                    seg_reg_o,
                    seg_reg_i,
                    sr_wr_i,
                    segment_zero_o
                  );

parameter SEGMENT_WIDTH = 1;    
parameter SEGMENT_SIZE = SEGMENT_WIDTH - 1;
              
input clk;
input a_reset_l;
input sr_wr_i;
input[3:0] seg_reg_i;

output [ SEGMENT_SIZE : 0 ] seg_reg_o;
output [ SEGMENT_SIZE : 0 ] segment_zero_o;

reg [ SEGMENT_SIZE : 0 ] segment;
reg [ SEGMENT_SIZE : 0 ] segment_zero_o;

assign seg_reg_o = segment;

always @(posedge clk or negedge a_reset_l) 
begin
    if (a_reset_l == 1'b0)
    begin
        segment <= {SEGMENT_WIDTH{1'b0}};
	segment_zero_o <= {SEGMENT_WIDTH{1'b0}};
    end
    else
    begin
        if (sr_wr_i == 1'b1)
        begin
            segment[ SEGMENT_SIZE : 0] <= seg_reg_i[ SEGMENT_SIZE : 0 ];
        end
    end
end
endmodule
