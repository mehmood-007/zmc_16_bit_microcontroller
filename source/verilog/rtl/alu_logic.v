`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/23/2018 08:45:01 AM
// Design Name: 
// Module Name: alu_logic
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


module alu_logic( reg_alu_opa_bus_i,
                  reg_alu_opb_bus_i,
                  opcode_i,
                  alu_logic_result_o
                );
    
    input [15:0] reg_alu_opa_bus_i;
    input [15:0] reg_alu_opb_bus_i;
    input [7:0] opcode_i;
    output [15:0] alu_logic_result_o;
   
    reg [15:0] logic_res;    
        
    parameter Z_NOR  = 8'h41;
    parameter A_AND_NOT_B = 8'h42;
    parameter NOT_B = 8'h43;
    parameter NOT_A_AND_B = 8'h44;
    parameter NOT_A = 8'h45;
    parameter Z_XOR = 8'h46;
    parameter Z_NAND = 8'h47;
    parameter Z_AND = 8'h48;
    parameter Z_XNOR = 8'h49;
    parameter LG_A = 8'h4a;
    parameter A_OR_NOT_B = 8'h4b;
    parameter LG_B = 8'h4c;
    parameter NOT_A_OR_B = 8'h4d;
    parameter Z_OR = 8'h4e;
    parameter LG_1 = 8'h4f;
    
    assign alu_logic_result_o = logic_res;
    
always @(reg_alu_opb_bus_i or reg_alu_opa_bus_i or opcode_i)
begin
logic_res = 16'h0000;	// Deault LG_0
        case(opcode_i)            
            NOT_B:
            begin
             logic_res = (~reg_alu_opb_bus_i);
            end            
            Z_NOR:
            begin
              logic_res  = ~((reg_alu_opa_bus_i) | (reg_alu_opb_bus_i));
            end                                
            
            A_AND_NOT_B:
            begin
              logic_res  = (reg_alu_opa_bus_i) & (~reg_alu_opb_bus_i);
            end

            NOT_A_AND_B:
            begin
              logic_res  = (~reg_alu_opa_bus_i) & (reg_alu_opb_bus_i);    
            end
        
            NOT_A: 
            begin
              logic_res = (~reg_alu_opa_bus_i);
            end

            Z_XOR:
            begin
              logic_res = reg_alu_opa_bus_i^reg_alu_opb_bus_i;    
            end
        
            Z_NAND:
            begin
              logic_res = ~((reg_alu_opa_bus_i)&(reg_alu_opb_bus_i));
            end
        
            Z_AND:
            begin
              logic_res = ((reg_alu_opa_bus_i)&(reg_alu_opb_bus_i));
            end

            Z_XNOR:
            begin
              logic_res = ~((reg_alu_opa_bus_i)^(reg_alu_opb_bus_i));
            end

            LG_A:
            begin
              logic_res = reg_alu_opa_bus_i;
            end
            
            A_OR_NOT_B:
            begin
                logic_res = ((reg_alu_opa_bus_i) | (~reg_alu_opb_bus_i));
            end

            LG_B:
            begin
                logic_res = reg_alu_opb_bus_i;
            end
   
            NOT_A_OR_B:
            begin
                logic_res = ~(reg_alu_opa_bus_i) | (reg_alu_opb_bus_i);
            end
  
            Z_OR:
            begin
                logic_res = (reg_alu_opa_bus_i) | (reg_alu_opb_bus_i);
            end
	    
            LG_1:
            begin
                logic_res = 16'h0001;
            end	               
        endcase
  end
endmodule

