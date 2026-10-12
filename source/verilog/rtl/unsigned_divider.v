`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/13/2018 12:28:30 AM
// Design Name: 
// Module Name: multiplier
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


module unsigned_divider( clk,
                         a_reset_l,
                         opa,
                         opb,
                         remainder,
                         quotient,
                         sel_div_i,
                         div_zero_flag_o,
                         div_ov_flag_o,
                         ack_division_o
                       );
    input clk;
    input a_reset_l;    
    input sel_div_i;
    input [15:0] opa;  // Dividend
    input [15:0] opb; // Divider

    output [15:0] remainder;
    output [15:0] quotient;
    output ack_division_o;
    output div_zero_flag_o;
    output div_ov_flag_o;
        
       
    reg [15:0] quotient;  
    reg [31:0] dividend_copy; 
    reg [31:0] divider_copy;
    reg [31:0] diff;
    
    reg [1:0] current_state;
    reg div_zero_flag_o, div_ov_flag_o;
    reg [1:0] div_op_state;
    reg ack_division_o;
    reg[4:0] step_counter;

    parameter READY = 2'b00;
    parameter DIV_STARTED = 2'b01;
    parameter ACK_SEND = 2'b10; 
    
    parameter D_SUB = 2'b01;
    parameter D_SHIFT = 2'b10;
        
always@(posedge clk or negedge a_reset_l)   begin
    if( a_reset_l == 1'b0 ) begin
        current_state <= READY;
        quotient <= 16'h0000;
        dividend_copy <= 32'd0;
        divider_copy <= 32'd0;
        div_zero_flag_o <= 1'b0;
        div_ov_flag_o <= 1'b0;
        diff <= 32'd0;
        div_op_state <= D_SUB;
        ack_division_o <= 1'b0;
        step_counter <= 5'd0;
    end
    else	begin
     case(current_state)
      READY: begin
         if( sel_div_i == 1'b1 ) begin
            current_state <= DIV_STARTED;
         end
         dividend_copy <= 32'd0;
         divider_copy <= 32'd0;
         ack_division_o <= 1'b0;
         step_counter <= 5'd0;
         div_ov_flag_o <= 1'b0;
         quotient <= 16'd0;
         diff <= 32'd0;
         div_op_state <= D_SUB;           
      end   
      DIV_STARTED:  begin 
            if( step_counter == 5'd0 )  begin  
	    	if(opb!= 16'd0)	begin
                	dividend_copy <= {16'h0000, opa};
                	divider_copy <= {1'b0, opb, 15'h0000};          
                	diff <= ({16'h0000, opa} - {1'b0, opb, 15'h0000});
                	div_op_state <= D_SHIFT;
                	quotient <= (quotient << 1); 
		end      
             end
             else  begin
                    case (div_op_state)
                     D_SUB:
                     begin
                            diff <= (dividend_copy - divider_copy);
                            div_op_state <= D_SHIFT;
                            quotient <= (quotient << 1);                    
                     end
                     D_SHIFT:
                     begin
                      if( diff[31] == 1'b0 ) begin
                         dividend_copy <= diff;
                         quotient[0] <= 1'b1;
                      end            
                      div_op_state <= D_SUB;
                      divider_copy <= divider_copy >> 1;               
                     end
                 endcase                
             end
             step_counter <= step_counter + 5'd1;
             if(step_counter == 5'd31 || opb == 16'd0 )   begin
                current_state <= ACK_SEND;
                ack_division_o <= 1'b1;
             end         
      end 
      ACK_SEND: begin
            div_zero_flag_o <= (quotient == 16'd0) ? 1'b1: 1'b0;
            div_ov_flag_o <= (opb == 16'd0) ? 1'b1: 1'b0;
            current_state <= READY;	    
      end
    endcase
  end
end
assign remainder[15:0] = dividend_copy[15:0];
endmodule
