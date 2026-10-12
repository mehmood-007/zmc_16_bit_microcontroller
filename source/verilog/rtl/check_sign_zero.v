`timescale 1ns / 100ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 08/26/2018 01:54:31 PM
// Design Name: 
// Module Name: check_sign_zero
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


module check_sign_zero( alu_logic_result_i,
                        alu_shift_result_i,
                        alu_airth_result_i,
                        sel_airth_i,
                        sel_shift_i,
                        sel_logic_i,
                        z_flag_i,
                        arith_cont_i,
                        sign_flag_o,
                        z_flag_o
                      );

    input [15:0] alu_logic_result_i; 
    input [15:0] alu_shift_result_i; 
    input [15:0] alu_airth_result_i;
    input arith_cont_i;
    input sel_airth_i;
    input sel_shift_i;
    input sel_logic_i;
    input z_flag_i;
    
    output sign_flag_o;
    output z_flag_o;
    

        
    reg sign_flag_res;
    reg z_flag_res; 
    
    assign sign_flag_o = sign_flag_res;
    assign z_flag_o = z_flag_res;    

always @( alu_logic_result_i or sel_logic_i or 
          alu_airth_result_i or arith_cont_i or 
          sel_airth_i or alu_shift_result_i or 
          sel_shift_i or z_flag_i )
    begin
    if( sel_logic_i == 1'b1 )
        begin
        if( alu_logic_result_i == 16'h0000)
            begin
             z_flag_res = 1'b1;
            end    
        else
            begin
             z_flag_res = 1'b0;
            end 
        if ( alu_logic_result_i[15] == 1'b1 )
            begin      
             sign_flag_res = 1'b1;
            end
        else
            begin
             sign_flag_res = 1'b0;
            end
        end
	
    else if( sel_airth_i == 1'b1 )
        begin
        if( alu_airth_result_i == 16'h0000 && arith_cont_i == 1'b1 && z_flag_i == 1'b1 )
            begin
             z_flag_res = 1'b1;
            end
        else if (alu_airth_result_i == 16'h0000 && arith_cont_i == 1'b0)
            begin
             z_flag_res = 1'b1;
            end
        else
            begin
             z_flag_res = 1'b0;
            end 
        if ( alu_airth_result_i[15] == 1'b1 )
            begin      
             sign_flag_res = 1'b1;
            end
        else
            begin
             sign_flag_res = 1'b0;
            end
        end
    else if( sel_shift_i == 1'b1 )
            begin
            if( alu_shift_result_i == 16'h0000 )
                begin
                 z_flag_res = 1'b1;
                end
            else
                begin
                 z_flag_res = 1'b0;
                end 
            if ( alu_shift_result_i[15] == 1'b1 )
                begin      
                 sign_flag_res = 1'b1;
                end
            else
                begin
                 sign_flag_res = 1'b0;
                end
            end  		
    else
        begin
           sign_flag_res = 1'b0;
	       z_flag_res = 1'b0;
        end
    end
endmodule
