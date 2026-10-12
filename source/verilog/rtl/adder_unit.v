`timescale 1ns/100ps

module adder_unit( reg_alu_opa_bus_i,
                 reg_alu_opb_bus_i,
		 reg_alu_opc_bus_i,
		 cout,
	         result
               );
	
input [14:0] reg_alu_opa_bus_i;
input [14:0] reg_alu_opb_bus_i;
input [14:0] reg_alu_opc_bus_i;
output cout;

output [14:0] result;
reg [14:0] result; 	 
reg cout;

always @( reg_alu_opa_bus_i or reg_alu_opb_bus_i or reg_alu_opc_bus_i)
begin
 	{cout, result[14:0]} = reg_alu_opa_bus_i[14:0] + reg_alu_opb_bus_i[14:0] + reg_alu_opc_bus_i[14:0];
end
endmodule
