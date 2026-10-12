`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/17/2018 07:36:00 PM
// Design Name: 
// Module Name: condition_mnemonics
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


module condition_mnemonics( mask_i,
                            carry_flag_i,
                            z_flag_i,
                            sign_flag_i,
                            ov_flag_i,
                            condition_o
                           );    
    
input [3:0] mask_i;
input carry_flag_i;
input z_flag_i;
input sign_flag_i;
input ov_flag_i;

output condition_o;
reg condition_o;
    
parameter CND_TRUE = 4'b0000;
parameter CND_LE = 4'b0001;
parameter CND_C = 4'b0010;
parameter CND_OVR = 4'b0011;
parameter CND_NEG = 4'b0100;
parameter CND_Z = 4'b0101;
parameter CND_POS = 4'b0110;
parameter CND_GE = 4'b0111;
parameter CND_FALSE = 4'b1000;
parameter CND_GT = 4'b1001;
parameter CND_NC = 4'b1010;
parameter CND_NOVR = 4'b1011;
parameter CND_NNEG = 4'b1100;
parameter CND_NZ = 4'b1101;
parameter CND_NPOS = 4'b1110;
parameter CND_LT = 4'b1111;

always@( mask_i or carry_flag_i or 
         z_flag_i or sign_flag_i or 
         ov_flag_i)   begin
condition_o = 1'b0;         
    case(mask_i)
        CND_TRUE:
        begin
            condition_o = 1'b1;           
        end
        CND_LE:
        begin
            condition_o = (z_flag_i | (ov_flag_i ^ sign_flag_i));
        end
        CND_C:
        begin
            condition_o = carry_flag_i;
        end               
        CND_OVR:
        begin
            condition_o = ov_flag_i;
        end    
        CND_NEG:
        begin
            condition_o = sign_flag_i;
        end
        CND_Z:
        begin
            condition_o = z_flag_i;
        end
        CND_POS:
        begin
            condition_o = ~(sign_flag_i | z_flag_i);
        end
        CND_GE:
        begin
            condition_o = ~(ov_flag_i ^ sign_flag_i);
        end    
        CND_FALSE:
        begin
            condition_o = 1'b0;
        end
        CND_GT:
        begin
            condition_o = ~(z_flag_i | (ov_flag_i ^ sign_flag_i));
        end
        CND_NC:
        begin
            condition_o = ~carry_flag_i;
        end
        CND_NOVR:
        begin
            condition_o = ~ov_flag_i;
        end
        CND_NNEG:
        begin
            condition_o = ~sign_flag_i;
        end
        CND_NZ:
        begin
            condition_o = ~z_flag_i;        
        end
        CND_NPOS:
        begin
            condition_o = (sign_flag_i | z_flag_i);
        end
        CND_LT:
        begin
            condition_o = (ov_flag_i ^ sign_flag_i);
        end        
    endcase
end
endmodule
