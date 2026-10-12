`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/23/2018 08:45:01 AM
// Design Name: 
// Module Name: alu_shift
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


module alu_shift( reg_alu_opb_bus_i,
                carry_flag_i,
                opcode_i,
                carry_shift_o,
                alu_shift_result_o
              );
    
    input [15:0] reg_alu_opb_bus_i;
    input [7:0] opcode_i;
    input carry_flag_i;
    
    output carry_shift_o;
    output [15:0] alu_shift_result_o;
    
   parameter SHR1 = 8'h81;
   parameter SHRA = 8'h82;
   parameter SHRC = 8'h83;
   parameter ROTR = 8'h84;

   parameter ROTRC = 8'h85;
   parameter SHL0 = 8'h88;
   parameter SHL1 = 8'h89;
   parameter SHLA = 8'h8a;
   parameter SHLC = 8'h8b;
   parameter ROTL = 8'h8c;
   parameter ROTLC = 8'h8d;

reg  [15:0] alu_shift_result_o;
reg  carry_shift_o;

always @(reg_alu_opb_bus_i or carry_flag_i or opcode_i)
begin	
carry_shift_o = carry_flag_i;

        case(opcode_i)           
            SHR1:
            begin
                alu_shift_result_o[15:0] = {2'b00, reg_alu_opb_bus_i[15:2]};       
            end

            SHRA:
            begin
                alu_shift_result_o[15:0]  = {reg_alu_opb_bus_i[15], reg_alu_opb_bus_i[15:1]};
            end

            SHRC:
            begin
               alu_shift_result_o[15:0]  = {carry_flag_i, reg_alu_opb_bus_i[15:1]};           
            end

            ROTR:
            begin
               alu_shift_result_o [15:0] = { reg_alu_opb_bus_i [0], reg_alu_opb_bus_i [15:1] };             
            end
        
            ROTRC: 
            begin
                 alu_shift_result_o [14:0] = reg_alu_opb_bus_i [15:1];
                 alu_shift_result_o [15] = carry_flag_i;
                 carry_shift_o = reg_alu_opb_bus_i[0];
            end

            SHL0:
            begin
	       {alu_shift_result_o[15:0]} = {reg_alu_opb_bus_i[14:0], 1'b0}; 	      
            end
        
            SHL1:
            begin
               {alu_shift_result_o[15:0]} = {reg_alu_opb_bus_i[13:0], 2'b00};	          
            end
        
            SHLA:
            begin
               alu_shift_result_o[15:0] = {reg_alu_opb_bus_i[14:0], 1'b0};	
            end

            SHLC:
            begin
	    	alu_shift_result_o[15:0] = {reg_alu_opb_bus_i[14:0], carry_flag_i}; 	 
            end

            ROTL:
            begin
                alu_shift_result_o [15:0] = { reg_alu_opb_bus_i [14:0], reg_alu_opb_bus_i [15] };                
            end
            
            ROTLC:
            begin
                alu_shift_result_o [15:1] = reg_alu_opb_bus_i [14:0];
                alu_shift_result_o [0] = carry_flag_i;
                carry_shift_o = reg_alu_opb_bus_i[15];
            end
	    
	    default:	// default SHR0
	    begin
    		alu_shift_result_o[15:0] = {1'b0, reg_alu_opb_bus_i[15:1]} ;
	    end	    
        endcase
   end
endmodule
