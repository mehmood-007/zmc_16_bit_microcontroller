`timescale 1ns / 100ps


module reg_wb( clk,               
                    a_reset_l,
                    reg_wb_dat_ack_o,
                    reg_wb_dat_in_o,
                    reg_wb_dat_out_o,
                    reg_wb_adr_o, 
                    wb_adr_i,
                    wb_dat_ack_i,
                    wb_dat_in_i,
                    wb_dat_out_i,
                    wb_cyc_i,
                    wb_stb_i,
                    wb_we_i,
                    reg_wb_dat_cyc_o,
                    reg_wb_dat_stb_o,
                    reg_wb_we_o
                  );
input clk;
input a_reset_l;
input wb_dat_ack_i;
input wb_cyc_i;
input wb_stb_i;
input wb_we_i;
input[15:0] wb_adr_i;
input[15:0] wb_dat_in_i;
input[15:0] wb_dat_out_i;


output reg_wb_dat_ack_o;
output reg_wb_dat_stb_o;
output reg_wb_dat_cyc_o;
output[15:0] reg_wb_dat_in_o;
output[15:0] reg_wb_dat_out_o;
output[15:0] reg_wb_adr_o;
output reg_wb_we_o;

reg [15:0] reg_wb_adr_o;
reg [15:0] reg_wb_dat_in_o;
reg [15:0] reg_wb_dat_out_o;
reg reg_wb_dat_ack_o;
reg reg_wb_dat_stb_o; 
reg reg_wb_dat_cyc_o;
reg reg_wb_we_o;
// Write registers
always@(posedge clk or negedge a_reset_l) 
begin
    if (a_reset_l == 1'b0) 
        begin
           reg_wb_adr_o <= 16'h0000;
           reg_wb_dat_in_o <= 16'h0000;
           reg_wb_dat_out_o <= 16'h0000;
           reg_wb_dat_ack_o <= 1'b0;
           reg_wb_dat_cyc_o <= 1'b0;
           reg_wb_dat_stb_o <= 1'b0; 
           reg_wb_we_o <= 1'b0;
        end
    else 
        begin
           reg_wb_adr_o <= wb_adr_i;
           reg_wb_dat_in_o <= wb_dat_in_i;
           reg_wb_dat_out_o <= wb_dat_out_i;
           reg_wb_dat_ack_o <= wb_dat_ack_i;
           reg_wb_dat_cyc_o <= wb_cyc_i;
           reg_wb_dat_stb_o <= wb_stb_i;
           reg_wb_we_o <= wb_we_i;                      		             
        end
end
    
endmodule
