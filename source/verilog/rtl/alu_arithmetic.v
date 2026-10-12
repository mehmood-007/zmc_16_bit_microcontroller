`timescale 1ns/100ps

module alu_arithmetic(  reg_alu_opa_bus_i,
                        reg_alu_opb_bus_i,
                        carry_flag_i,
                        opcode_i,
                        overflow_i,
                        carry_arith_o,
                        alu_airth_result_o,
                        overflow_o
                      );
  	parameter ADD = 8'h08;
   	parameter SUB = 8'h0b;
   
   	parameter INCC = 8'h21;
   	parameter NEGC = 8'h23;

   	parameter DECC = 8'h24;
   	parameter ADC = 8'h28;

   	parameter SUBC = 8'h2b;
   	parameter NEG = 8'h03;

   	parameter DEC = 8'h04;
   	parameter INC = 8'h01;
	
    	input carry_flag_i;
    	input overflow_i;
	input [15:0] reg_alu_opa_bus_i;
	input [15:0] reg_alu_opb_bus_i;
	input [7:0] opcode_i;

	output [15:0] alu_airth_result_o;
	output carry_arith_o;
	output overflow_o;
	
	wire [15:0] temp_negate;	
		
	reg carry_arith_o;
	reg carry_in;	
	reg [15:0] alu_airth_result;
	
	assign temp_negate[15:0] = (~reg_alu_opb_bus_i[15:0]) + 1'b1;
		
	reg [14:0] opa;
	reg [14:0] opb;	
	reg [14:0] opc;
	wire[14:0] res;
	wire cout;

assign alu_airth_result_o[15:0] = alu_airth_result[15:0];

always @( reg_alu_opa_bus_i or reg_alu_opb_bus_i or 
          carry_flag_i or overflow_i or 
          opcode_i or  res or temp_negate or cout)

begin
	opa = 15'h0000;
	opb = 15'h0000;
	opc = 15'h0000;
	alu_airth_result[14:0] = res[14:0];
	case(opcode_i)
	ADD:
	begin
	    	opa = reg_alu_opa_bus_i[14:0];
		opb = reg_alu_opb_bus_i[14:0];
		{carry_arith_o, alu_airth_result[15]} = reg_alu_opa_bus_i[15] + reg_alu_opb_bus_i[15] + cout;
	end

	SUB:
	begin
		opa = reg_alu_opa_bus_i[14:0];
		opb = temp_negate[14:0];		
		{carry_arith_o, alu_airth_result[15]} = cout + reg_alu_opa_bus_i[15] + temp_negate[15];	
	end

	NEG:
	begin		
		opb = temp_negate[14:0];
		alu_airth_result[15] = temp_negate[15];	
		carry_arith_o = overflow_i;	
		//carry_in = carry_arith_o^overflow_i;
	end

	DEC:
	begin
		opa = reg_alu_opb_bus_i[14:0];
		opb = 15'h7fff;
		{carry_arith_o, alu_airth_result[15]} = cout + reg_alu_opb_bus_i[15] + 1'b1;
	end
		
	INC: 
	begin
		opa = reg_alu_opb_bus_i[14:0];
		opb = 15'h0001;
		{carry_arith_o, alu_airth_result[15]} = cout + reg_alu_opb_bus_i[15];
	end
			
	INCC:
	begin
		opa = reg_alu_opb_bus_i[14:0];
		opb = {14'h0, carry_flag_i};	
		{carry_arith_o, alu_airth_result[15]} = cout + reg_alu_opb_bus_i[15];

	end
		
	NEGC:
	begin
		opa = temp_negate[14:0];
		opb = 15'h7fff;
		opc = {14'h0, carry_flag_i};				
		{carry_arith_o, alu_airth_result[15]} = cout + temp_negate[15] + 1'b1;		            
	end
		
	DECC:
	begin
		opa = reg_alu_opb_bus_i[14:0];
		opb = 15'h7fff;
		opc = {14'h0, carry_flag_i};
		{ carry_arith_o, alu_airth_result[15] } = cout + reg_alu_opb_bus_i[15] + 1'b1; 
				
	end
	
	ADC:
	begin
		opa = reg_alu_opa_bus_i[14:0];
		opb = reg_alu_opb_bus_i[14:0];
		opc = {14'h0, carry_flag_i};
		{carry_arith_o, alu_airth_result[15]} = cout + reg_alu_opa_bus_i[15] + reg_alu_opb_bus_i[15];
	end
			
	SUBC: // SUBC 
	begin
		opa = reg_alu_opa_bus_i[14:0];
		opb = ~reg_alu_opb_bus_i[14:0];
		opc = {14'h0, carry_flag_i};
		{carry_arith_o, alu_airth_result[15]} = cout + (reg_alu_opa_bus_i[15] + ~reg_alu_opb_bus_i[15]);
	end
	
	default:	/* Default MOV Instruction */
	begin
		opb = reg_alu_opb_bus_i[14:0];
		{carry_arith_o, alu_airth_result[15]} = reg_alu_opb_bus_i[15];
	end			
	endcase
	
end		
assign overflow_o = cout^carry_arith_o;
	
adder_unit adder_unit_i( .reg_alu_opa_bus_i(opa),
           		         .reg_alu_opb_bus_i(opb),
			             .reg_alu_opc_bus_i(opc),			  
	               		 .cout(cout),
	  	                 .result(res)
               	       );
endmodule
