`timescale 1ns / 100ps
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
module operand_flip_flop( clk,
                          a_reset_l,
                          reg_alu_opa_bus_i,
                          reg_alu_opb_bus_i,
                          reg_opa,
                          reg_opb,
                          reg_abs_opa                    
                        );
    
     input[15:0] reg_alu_opa_bus_i;
     input[15:0] reg_alu_opb_bus_i;
     
     output[15:0] reg_opa;
     output[15:0] reg_opb;
     output[15:0] reg_abs_opa;
     
     input clk;
     input a_reset_l;
        
     reg[15:0] reg_opa; 
     reg[15:0] reg_opb; 
     reg[15:0] reg_abs_opa; 
// Write registers
always@(posedge clk or negedge a_reset_l) 
    begin
        if (a_reset_l == 1'b0) 
            begin
                reg_opa <= 16'b0;
                reg_opb <= 16'b0;
                reg_abs_opa <= 16'b0; 
            end
        else 
            begin
                reg_opa <= reg_alu_opa_bus_i;
                reg_opb <= reg_alu_opb_bus_i;
                reg_abs_opa <= (reg_alu_opa_bus_i[15] == 1'b1) ? (~reg_alu_opa_bus_i + 1'b1): reg_alu_opa_bus_i;                 
	    end
    end
endmodule
