`timescale 1ns / 100ps

module stack_pointer ( clk,
	                   a_reset_l,
			pointer,
	                   ptr_o 
		   );
	input clk;
	input a_reset_l;
	input [15:0] pointer;
	output [15:0] ptr_o;
	reg [15:0] ptr_o;
	
always @( posedge clk or negedge a_reset_l ) begin
	if (a_reset_l == 1'b0)	begin
		ptr_o[15:0] <= 16'hffff;
	end	
	else	begin
		ptr_o[15:0] <= pointer[15:0]; 	
	end
end

endmodule
