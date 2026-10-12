`timescale 1ns / 100ps

module signed_multiplier( clk,
                          a_reset_l,
                          reg_abs_opa,
                          opb,
                          opa_msb,
                          sel_smult_i,
                          smult_zero_flag_o,
                          smult_sign_flag_o,
                          ack_smult_o,
                          smult_lower_bits_o,
                          smult_higher_bits_o
                        );
    input clk;
    input a_reset_l;    
    input [15:0] reg_abs_opa;  // Multiplicand   
    input [15:0] opb; // Multiplier
    input opa_msb;
    
    output [15:0] smult_lower_bits_o;
    output [15:0] smult_higher_bits_o;    
    
    output smult_zero_flag_o;
    output smult_sign_flag_o;        
    output ack_smult_o;
        
    input sel_smult_i;
    reg [1:0] current_state;
    
    reg [31:0] res;    
    reg [3:0] k;
    
    reg smult_zero_flag_o;
    reg smult_sign_flag_o;
    reg ack_smult_o;
     
    reg [15:0] reg_opa;
    reg [31:0] shift_reg_b;
         
    parameter READY = 2'b00;
    parameter SMULT_STARTED = 2'b01;
    parameter ACK_SEND = 2'b10;
            
always@(posedge clk or negedge a_reset_l)   begin
    if( a_reset_l == 1'b0 ) begin
        res <= 32'd0;
        k <= 4'h0;
        current_state <= READY;
        ack_smult_o <= 1'b0;
        shift_reg_b <= 32'd0;
    end
    else begin 
    case(current_state)
	READY:
	begin
		if(sel_smult_i == 1'b1)	begin
		//  res[31:16] <= opb[15:0];//(abs_opb << 1);		  
		//  res[15:0] <= 16'd0;  
		  current_state <= SMULT_STARTED;		  
		end
   		ack_smult_o <= 1'b0;  
       	 	k <= 4'h0;
        	res <= 32'd0;  	
	end
	SMULT_STARTED:
	begin
        if(k == 4'h0)  begin
            shift_reg_b <= (opb[15]== 1'b1) ? (-opb << 1) : (opb << 1);  
            if(opb[15] == 1'b1)
                res[15:0] <= ((reg_abs_opa[k]) == 1'b1) ? -opb : res[15:0];
            else 
                res[15:0] <= (reg_abs_opa[k]== 1'b1) ? opb : res[15:0];
        end    		
           // res[31:16] <= res[31:16]<<1;
           // res[15:0] <= (absolute_opa[k] == 1'b1) ? (res[15:0] + res[31:16]) : res[15:0];
        else begin
                shift_reg_b <= shift_reg_b<<1;
                res[31:0] <= (reg_abs_opa[k] == 1'b1) ? (res + shift_reg_b) : res;
        end
        if(k == 4'hf)   begin
	        current_state <= ACK_SEND;
            ack_smult_o <= 1'b1;
        end
        else
            current_state <= SMULT_STARTED;
        k <= k + 4'h1;
    end
    ACK_SEND:
	begin                 
       current_state <= READY;
   	end
	endcase
    end 
end
/*
always@(sel_smult_i or opb or opa) begin
    absolute_opb = 16'd0;
    absolute_opa = 16'd0;
        
    if ( sel_smult_i == 1'b1 ) begin
        absolute_opb = (opb[15] == 1'b1) ? -opb : opb;
        absolute_opa = (opa[15] == 1'b1) ? -opa : opa;
    end    
end
*/
reg [31:0] smult_res;
always@( res or opa_msb or opb ) begin
    smult_res = res;
    smult_sign_flag_o = 1'b0;
    smult_zero_flag_o = 1'b0;
       if(opa_msb ^ opb[15])  begin
          smult_res = -res;     
       end
       smult_sign_flag_o = (smult_res[31] == 1'b1) ? 1'b1: 1'b0;
       smult_zero_flag_o = (smult_res[31:0] == 32'd0) ? 1'b1: 1'b0; 
end

assign smult_lower_bits_o[15:0] = smult_res[15:0];      
assign smult_higher_bits_o[15:0] = smult_res[31:16];      

endmodule
