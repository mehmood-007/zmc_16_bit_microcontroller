`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09/06/2018 11:00:18 PM
// Design Name: 
// Module Name: wishbone_slave
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


module wishbone_slave(     clk,
                         a_reset_l,
                         wb_ack_o,
                         wb_we_i,
                         wb_stb_i,
                         wb_cyc_i,
                         wb_adr_i,
                         wb_dat_o,
                         wb_dat_i
                     );
      input clk;
      input a_reset_l;

      input[15:0] wb_dat_i;
      input wb_we_i;
      input wb_stb_i;
      input wb_cyc_i;      
      input[15:0] wb_adr_i;
      
      output[15:0] wb_dat_o;   
      output wb_ack_o;

      // external RAM interfacing    
      wire[15:0] ext_adr;
      wire ext_wr;
      wire ext_funny_ack;
      wire[15:0] ext_dat_o; 
      wire en_rd;
        
    reg[15:0] wb_dat_o;
    reg wb_ack_o;

    reg ext_wr_o;

    reg[15:0] ext_dat_i;
    reg[15:0] ext_adr_o;
  
    reg [1:0] current_state;
    reg [1:0] next_state;
    reg ext_en_rd_o;    
    
    parameter S_WAIT_FOR_MASTER = 2'b00; 
    parameter S_WSS = 2'b01; 

    assign ext_wr = ext_wr_o;
    assign ext_adr = ext_adr_o;
    assign en_rd = ext_en_rd_o;
           
always@(posedge clk or negedge a_reset_l) begin
        if(a_reset_l == 1'b0) begin
            current_state <= S_WAIT_FOR_MASTER;                              
          end
        else 
            current_state <= next_state;                         
    end

always@(current_state or wb_stb_i or wb_cyc_i or ext_funny_ack)
    begin  
    next_state = S_WSS;
        case (current_state)
            S_WAIT_FOR_MASTER:
                if (wb_stb_i == 1'b0 && wb_cyc_i== 1'b0)
                    next_state = S_WAIT_FOR_MASTER;
            S_WSS:
                if(ext_funny_ack == 1'b1 && wb_stb_i == 1'b0 && wb_cyc_i== 1'b0)
                    next_state = S_WAIT_FOR_MASTER;               
        endcase
    end  

always@(current_state or wb_stb_i or wb_cyc_i or wb_we_i or wb_adr_i or wb_dat_i  or ext_funny_ack or ext_dat_o)
    begin 
    ext_adr_o = 16'h0000;
    ext_dat_i = 16'h0000;
    wb_dat_o = 16'h0000;
    wb_ack_o = 1'b0; 
    ext_wr_o = 1'b0;
    ext_en_rd_o = 1'b0;
        case (current_state)
            S_WAIT_FOR_MASTER:
                if (wb_stb_i == 1'b1 && wb_cyc_i == 1'b1) begin
                ext_adr_o = wb_adr_i;
                    if( wb_we_i == 1'b0)
                            ext_en_rd_o = 1'b1;
                     else
                        begin       
                            ext_dat_i = wb_dat_i; 
                            ext_wr_o = 1'b1;
                        end                 
                end
            S_WSS:
            begin
            ext_adr_o = wb_adr_i;
                if( wb_we_i == 1'b0)    // Read Block
                begin
                    ext_en_rd_o = 1'b1;
                    if(ext_funny_ack == 1'b1) begin
                        wb_dat_o = ext_dat_o;
                        wb_ack_o = 1'b1;  
			            ext_en_rd_o = 1'b0;               
                    end
                end
                else  // Write Block
                begin                    
                    ext_dat_i = wb_dat_i; 
                    ext_wr_o = 1'b1;
                    if(ext_funny_ack == 1'b1) begin
                        wb_ack_o = 1'b1;  
                    end
                end
            end    
        endcase
    end  
   
ext_mem ext_mem_i(.clk(clk),
                  .a_reset_l(a_reset_l),
                  .data_i(ext_dat_i),
                  .data_wr_i(ext_wr),
                  .data_address_i(ext_adr),
		  .en_rd_i(en_rd),
                  .ext_funny_ack_o(ext_funny_ack),
                  .data_o(ext_dat_o)
                 ); 
endmodule
