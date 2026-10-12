`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/06/2018 09:27:13 PM
// Design Name: 
// Module Name: ext_add_mux
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

module ext_add_mux( stack_pointer_i,
                    rb_i,
                    sel_sp_i,
                    sel_rb_i,
                    sel_pram_add_ext_i,
                    addr_bus_i,
                    io_addr_o
                   );

input [15:0] stack_pointer_i;
input [15:0] rb_i; 
input sel_sp_i;
input sel_rb_i;
input sel_pram_add_ext_i;
input [11:0] addr_bus_i;
output[15:0] io_addr_o;
	
reg [15:0] io_addr_o;   
  /* 
always @(posedge clk or negedge a_reset_l)
begin
   if (a_reset_l == 1'b0)
   begin
     operand_b <= 16'h0000;
     p_stack_pointer_i <= 16'h0000;
     p_sel_sp_i <= 1'b0;
     sel_operand_b <= 1'b0;
     p_sel_pram_add_ext_i <= 1'b0;
     p_addr_bus_i <= 16'h0000;
   end
   else
   begin
     operand_b[15:0] <= rb_i[15:0];
     sel_operand_b <= sel_rb_i; 
   
     p_sel_sp_i <= sel_sp_i;  
     p_stack_pointer_i <= stack_pointer_i;
   
     p_addr_bus_i <= addr_bus_i;
     p_sel_pram_add_ext_i <= sel_pram_add_ext_i;
   end	
end  
*/

always @( stack_pointer_i or  rb_i  or 
        sel_sp_i or sel_rb_i or 
	sel_pram_add_ext_i or addr_bus_i )
    begin
      io_addr_o = 16'h0000;     
      if ( sel_sp_i == 1'b1 )
        io_addr_o[15:0] = stack_pointer_i[15:0];
	
      else if ( sel_rb_i == 1'b1 )
        io_addr_o[15:0] = rb_i[15:0];
      
      else if (sel_pram_add_ext_i == 1'b1 )
      	io_addr_o[15:0] = { 4'h0, addr_bus_i[11:0] };  
    end
endmodule