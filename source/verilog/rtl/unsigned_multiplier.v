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


module unsigned_multiplier( clk,
                            a_reset_l,
                            opa,
                            opb,
                            sel_mult_i,
                            ack_mult_o,
                            mult_zero_flag_o,
                            mult_lower_bits_o,
                            mult_higher_bits_o
                          );
    input clk;
    input a_reset_l;    
    input [15:0] opa; 
    input [15:0] opb; // Multiplier
    input sel_mult_i;
    
    output mult_zero_flag_o;
    output ack_mult_o;
    output [15:0] mult_lower_bits_o;
    output [15:0] mult_higher_bits_o;
    
    reg [1:0] current_state;
    reg [31:0] res;    
    reg [3:0] k;
    reg mult_zero_flag_o;
    reg ack_mult_o;
    reg [31:0] shift_reg_b;
         
    parameter READY = 2'b00;
    parameter MULT_STARTED = 2'b01;
    parameter ACK_SEND = 2'b10;    
    
always@(posedge clk or negedge a_reset_l)   begin
    if( a_reset_l == 1'b0 ) begin
        res <= 32'd0;
        k <= 4'h0;
        current_state <= READY;
        mult_zero_flag_o <= 1'b0;
        shift_reg_b <= 32'd0;
    end
    else 
    begin
    case(current_state)	
        READY: begin       // READY State default
           if( sel_mult_i == 1'b1 )
                  current_state <= MULT_STARTED;          
                    ack_mult_o <= 1'b0;  
                    k <= 4'h0;
                    res <= 32'd0;
                    mult_zero_flag_o <= 1'b0;
        end
        MULT_STARTED: begin	
            case(k)
                4'h0: begin
                    shift_reg_b <= opb[15:0]<<1;
                    res <= (opa[k] == 1'b1) ? opb[15:0] : res;
                end
                default: begin
                    shift_reg_b <= shift_reg_b<<1;
                    res[31:0] <= (opa[k] == 1'b1) ? (res + shift_reg_b) : res;
                end
            endcase 
            k <= k + 4'd1;
            if(k == 4'hf)   begin
                current_state <= ACK_SEND;
                ack_mult_o <= 1'b1;
            end
            else
                current_state <= MULT_STARTED;            
           // current_state <= ((k == 4'hf) || (opa[15:0]&opb[15:0])==16'd0) ? ACK_SEND : MULT_STARTED;
        end  
        ACK_SEND:  begin
            mult_zero_flag_o <= (res[31:0] == 32'd0) ? 1'b1: 1'b0;
            current_state <= READY;
        end

       endcase
   end        
end

assign mult_lower_bits_o[15:0] = res[15:0];      
assign mult_higher_bits_o[15:0] = res[31:16];
         
endmodule
