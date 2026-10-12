`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/06/2018 11:00:18 PM
// Design Name: 
// Module Name: wishbone_master
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


module wishbone_master(  clk,
                         a_reset_l,
                         wb_ack_i,
                         wb_we_o,
                         wb_stb_o,
                         wb_cyc_o,
                         wb_adr_o,
                         wb_dat_i,
                         wb_dat_o,
                         zm_adr_i,
                         zm_dat_i,
                         zm_dat_o,
                         zm_en_rd_ext_i,
                         zm_en_wr_ext_i,
                         zm_data_ack_o
                      );
    input clk;
    input a_reset_l;
    input wb_ack_i;
    input[15:0] wb_dat_i;
    input[15:0] zm_dat_i;
    input[15:0] zm_adr_i;
    input zm_en_rd_ext_i;
    input zm_en_wr_ext_i;   
    
    output wb_we_o;
    output wb_stb_o;
    output wb_cyc_o;
    output[15:0] wb_adr_o;
    output[15:0] wb_dat_o;
    output[15:0] zm_dat_o;
    output zm_data_ack_o;  
    
    reg wb_we_o;
    reg wb_stb_o;
    reg wb_cyc_o;
    reg[15:0] wb_adr_o;
    reg[15:0] wb_dat_o;
    reg[15:0] zm_dat_o;
    reg zm_data_ack_o;    
     
    reg [1:0] current_state;
    reg [1:0] next_state;
    
    parameter S_WAIT_FOR_ZM = 2'b00; 
    parameter S_POLL_WB_RD_ACK_SLAVE = 2'b01;  
    parameter S_POLL_WB_WR_ACK_SLAVE = 2'b10;   
      
always@(posedge clk or negedge a_reset_l) begin
        if(a_reset_l == 1'b0) begin
            current_state <= S_WAIT_FOR_ZM;                              
          end
        else 
            current_state <= next_state;                        
    end
    
always@(current_state or zm_en_rd_ext_i or 
        zm_en_wr_ext_i or wb_ack_i or wb_dat_i 
        or zm_dat_i or zm_adr_i) begin 
    wb_we_o = 1'b0;
    wb_stb_o = 1'b0;
    wb_cyc_o = 1'b0;
    wb_adr_o = 16'h0000;
    wb_dat_o = 16'h0000;
    zm_dat_o  = 16'h0000;
    zm_data_ack_o = 1'b0;        
        next_state = S_WAIT_FOR_ZM;
        case (current_state)	
            S_WAIT_FOR_ZM:	begin
                if (zm_en_rd_ext_i == 1'b1)	begin
                    next_state = S_POLL_WB_RD_ACK_SLAVE;
	                wb_cyc_o = 1'b1; 
                    wb_stb_o = 1'b1; 
                    wb_adr_o[15:0] = zm_adr_i[15:0];  
		        end   
                else if(zm_en_wr_ext_i == 1'b1)	begin
                    next_state = S_POLL_WB_WR_ACK_SLAVE;      
                    wb_cyc_o = 1'b1; 
                    wb_stb_o = 1'b1; 
                    wb_adr_o[15:0] = zm_adr_i[15:0]; 
                    wb_dat_o[15:0] = zm_dat_i[15:0]; 
                    wb_we_o = 1'b1; 	
		        end 
	        end 	               
            S_POLL_WB_WR_ACK_SLAVE:	begin
	              wb_cyc_o = 1'b1; 
                  wb_stb_o = 1'b1; 
                  wb_adr_o[15:0] = zm_adr_i[15:0]; 
                  wb_dat_o[15:0] = zm_dat_i[15:0];
		         if (wb_ack_i == 1'b1)	begin          
                     zm_data_ack_o = 1'b1;
		             next_state = S_WAIT_FOR_ZM;
	                 wb_cyc_o = 1'b0;
                     wb_stb_o = 1'b0;  
		          end		  
                 else
                    next_state = S_POLL_WB_WR_ACK_SLAVE;
            end
            S_POLL_WB_RD_ACK_SLAVE:	begin
                  wb_cyc_o = 1'b1;
                  wb_stb_o = 1'b1;
                  wb_adr_o[15:0] = zm_adr_i[15:0];
                if (wb_ack_i == 1'b1) begin  
                    next_state = S_WAIT_FOR_ZM;
		    zm_data_ack_o = 1'b1;
                    zm_dat_o[15:0] = wb_dat_i[15:0]; 
		    wb_cyc_o = 1'b0;
                    wb_stb_o = 1'b0;
                end 
                else
                    next_state = S_POLL_WB_RD_ACK_SLAVE;
	    end	    			    
        endcase
    end	
    /*        
always@(current_state or zm_adr_i or zm_dat_i or zm_en_rd_ext_i or zm_en_wr_ext_i or wb_dat_i  or wb_ack_i) begin
    wb_we_o = 1'b0;
    wb_stb_o = 1'b0;
    wb_cyc_o = 1'b0;
    wb_adr_o = 16'h0000;
    wb_dat_o = 16'h0000;
    zm_dat_o  = 16'h0000;
    zm_data_ack_o = 1'b0;
        case (current_state)
            S_WAIT_FOR_ZM:
                 if (zm_en_rd_ext_i == 1'b1) begin
                    wb_cyc_o = 1'b1; 
                    wb_stb_o = 1'b1; 
                    wb_adr_o[15:0] = zm_adr_i[15:0];        
                 end
                 else if (zm_en_wr_ext_i == 1'b1) begin
                    wb_cyc_o = 1'b1; 
                    wb_stb_o = 1'b1; 
                    wb_adr_o[15:0] = zm_adr_i[15:0]; 
                    wb_dat_o[15:0] = zm_dat_i[15:0]; 
                    wb_we_o = 1'b1;                                    
                 end
            S_POLL_WB_RD_ACK_SLAVE:
            begin
                  wb_cyc_o = 1'b1;
                  wb_stb_o = 1'b1;
                  wb_adr_o[15:0] = zm_adr_i[15:0];
                 if (wb_ack_i == 1'b1) begin          
                    zm_data_ack_o = 1'b1;
                    zm_dat_o[15:0] = wb_dat_i[15:0]; 
		    wb_cyc_o = 1'b0;
                    wb_stb_o = 1'b0;
                 end
            end
            S_POLL_WB_WR_ACK_SLAVE:
            begin
                wb_cyc_o = 1'b1; 
                wb_stb_o = 1'b1; 
                wb_adr_o[15:0] = zm_adr_i[15:0]; 
                wb_dat_o[15:0] = zm_dat_i[15:0];
                wb_we_o = 1'b1; 
                 if (wb_ack_i == 1'b1)	begin          
                     zm_data_ack_o = 1'b1;
		 end    
            end         
        endcase
    end  
    */
endmodule
