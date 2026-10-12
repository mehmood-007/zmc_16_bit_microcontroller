`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/09/2018 02:15:56 PM
// Design Name: 
// Module Name: ext_dat_mux
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


module ext_dat_mux(reg_alu_opa_bus_i,
                  pc_counter_i,
                  data_out_o,
                  sel_pc_ext_i,
                  sel_flag_ex_i,
                  sel_opa_ext_i,
                  z_flag_i,
                  s_flag_i,
                  c_flag_i,
                  o_flag_i  
                  );
 input[15:0] reg_alu_opa_bus_i;
 input[11:0] pc_counter_i;
 input sel_pc_ext_i;            
 input sel_opa_ext_i;
 input sel_flag_ex_i;
 input z_flag_i;
 input s_flag_i;
 input c_flag_i;
 input o_flag_i;
 
output[15:0] data_out_o;
    
reg[15:0] data_out_o; 

always@( reg_alu_opa_bus_i or sel_pc_ext_i or 
         pc_counter_i or sel_opa_ext_i or 
         sel_flag_ex_i or z_flag_i or 
         s_flag_i or c_flag_i or o_flag_i ) begin
  data_out_o = 16'h0000;  

  if ( sel_pc_ext_i == 1'b1 && sel_flag_ex_i == 1'b0)
      data_out_o[15:0] = {4'h0, pc_counter_i[11:0] + 12'h001};  
      
  else if ( sel_pc_ext_i == 1'b1 && sel_flag_ex_i == 1'b1 ) 
      data_out_o[15:0] = { c_flag_i, s_flag_i, z_flag_i, o_flag_i , pc_counter_i[11:0] };

  else if ( sel_opa_ext_i == 1'b1 )
      data_out_o[15:0] = reg_alu_opa_bus_i[15:0];
 
end
              
endmodule
 /*     
  else if ( sel_opa_ext_i == 1'b1 )
      data_out_o[15:0] = reg_alu_opa_bus_i[15:0];
     */ 
