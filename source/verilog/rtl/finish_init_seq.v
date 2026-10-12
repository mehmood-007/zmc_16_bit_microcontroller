`timescale 1ns / 100ps

module finish_init_seq( address_i,
	     	      finish_init_pram_o			
             	     );
	     
input [11:0] address_i;
output finish_init_pram_o;
reg finish_init_pram_o;

always @(address_i)
begin
	finish_init_pram_o = (address_i == 12'hfff) ? 1'b1 : 1'b0;

end

endmodule
