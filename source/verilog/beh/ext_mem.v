`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 08/28/2018 08:27:42 AM
// Design Name:
// Module Name: ext_mem
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

module ext_mem(  clk,
                 a_reset_l,
                 data_i,
                 data_wr_i,
                 data_address_i,
                 en_rd_i,
                 ext_funny_ack_o,
                 data_o
                );

parameter MEM_DEPTH = 16;

input clk;
input a_reset_l;
input [15:0] data_i;
input [15:0] data_address_i;
input data_wr_i;
input en_rd_i;

output [15:0] data_o;
output ext_funny_ack_o;

reg [15:0] memory [ 0 : (MEM_DEPTH << 12) - 1];
reg ext_funny_ack_o;

assign data_o = memory[data_address_i];

//initial begin
  //$readmemh("./mem.mem", memory);
//end

// Write registers
always@(posedge clk or negedge a_reset_l)  begin
        if (a_reset_l == 1'b0)
            begin
            ext_funny_ack_o <= 1'b0;
	    $readmemh("./mem.mem", memory);
            //for (i=0; i < 100; i=i+1)
            //   memory[i] <= 16'hffff;
            end
        else if (data_wr_i == 1'b1) begin
            memory[data_address_i] <= data_i;
            ext_funny_ack_o <= 1'b1;
        end
	else if ( en_rd_i == 1'b1 )  begin
    	    ext_funny_ack_o <= 1'b1;
    	end
    end
endmodule
