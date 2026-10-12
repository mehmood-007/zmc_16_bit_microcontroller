`timescale 1ns / 100ps

module pc_mux(address_i,
              sel_jmp_add_i,
              current_addr_i,
              data_in_i,
              addr_bus_o,
              stop_pc_inc_i,
	      init_pc_i,
              sel_stored_pc_i,
	      sel_indirect_addr_i,
	      indirect_addr_i
             );
	     
input [11:0] address_i;
input [11:0] current_addr_i;

input [11:0] data_in_i;
input[11:0] indirect_addr_i;

input init_pc_i;
input sel_jmp_add_i;
input stop_pc_inc_i;
input sel_stored_pc_i;
input sel_indirect_addr_i;

output [11:0] addr_bus_o;
reg [11:0] addr_bus_o;


always @( address_i or sel_jmp_add_i or 
        current_addr_i or stop_pc_inc_i or 
        sel_stored_pc_i or data_in_i or 
	indirect_addr_i or  sel_indirect_addr_i or  
	init_pc_i )
begin
  addr_bus_o[11:0] = current_addr_i[11:0] + 12'h001;
  
  if ( sel_jmp_add_i == 1'b1 )
    addr_bus_o[11:0] = address_i[11:0];
	
  else if ( stop_pc_inc_i == 1'b1 )
    addr_bus_o[11:0] = current_addr_i[11:0];
    
  else if ( sel_stored_pc_i == 1'b1 )	
    addr_bus_o[11:0] = data_in_i[11:0];

  else if ( sel_indirect_addr_i == 1'b1 )
    addr_bus_o[11:0] = indirect_addr_i [11:0];    

  else if ( init_pc_i == 1'b1 )
    addr_bus_o[11:0] = 12'h000;
end  	   

endmodule
