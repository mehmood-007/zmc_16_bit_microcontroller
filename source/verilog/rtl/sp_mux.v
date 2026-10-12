`timescale 1ns / 100ps

module sp_mux(push_i,
	    pop_i,
	    sp_wr_i,
            reg_alu_opb_bus_i,
	    init_sp,
	    ptr_i,
	    pointer
           );

	input push_i;
    	input pop_i;
	input sp_wr_i;
	input init_sp;
	input [15:0] ptr_i;
    	input [15:0] reg_alu_opb_bus_i;
	output [15:0] pointer;
	reg [15:0] pointer;


always @( push_i or 
	pop_i or 
	sp_wr_i or 
	reg_alu_opb_bus_i or 
	init_sp or ptr_i
	) begin


pointer[15:0] = ptr_i;

if (push_i == 1'b1)
	pointer[15:0] = ptr_i[15:0] - 16'h0001; // post-decrement sp
else if (pop_i == 1'b1)
	pointer[15:0] = ptr_i[15:0] + 16'h0001;  // pre-increment sp
else if (sp_wr_i == 1'b1 )
	pointer[15:0] = reg_alu_opb_bus_i[15:0];
else if(init_sp)
	pointer[15:0] = 16'hffff;		
end 	   

endmodule
