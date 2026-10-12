`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/26/2018 11:11:43 AM
// Design Name: 
// Module Name: flag_bank
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
module flag_bank( clk,
                  a_reset_l,
                  wr_cy_i,
                  wr_zo_i,
                  wr_sn_i,
                  wr_ov_i,
                  carry_i,
                  z_flag_i,
                  sign_flag_i,
                  ov_flag_i,
                  carry_flag_o,
                  z_flag_o,
                  sign_flag_o,
                  ov_flag_o                     
                );
    
     input carry_i;
     input z_flag_i;
     input sign_flag_i;
     input ov_flag_i;
     input wr_cy_i;
     input wr_zo_i;
     input wr_sn_i;
     input wr_ov_i;
       
     input clk;
     input a_reset_l;
          
     output carry_flag_o;
     output z_flag_o;
     output sign_flag_o;
     output ov_flag_o;
     
     
     reg carry_flag_o; 
     reg z_flag_o; 
     reg sign_flag_o;
     reg ov_flag_o;
      
// Write registers
always@(posedge clk or negedge a_reset_l) 
    begin
        if (a_reset_l == 1'b0) 
            begin
                carry_flag_o <= 1'b0;
                z_flag_o <= 1'b0;
                sign_flag_o <= 1'b0;
                ov_flag_o <= 1'b0;
            end
        else 
            begin
            if (wr_cy_i == 1'b1)
                carry_flag_o <= carry_i;
		
            if (wr_zo_i == 1'b1)
                z_flag_o <= z_flag_i;
                		
            if (wr_sn_i == 1'b1)
                sign_flag_o <= sign_flag_i;

            if (wr_ov_i == 1'b1)
                ov_flag_o <= ov_flag_i;                
	    end
    end
endmodule

