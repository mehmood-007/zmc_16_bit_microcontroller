`timescale 1ns / 1ps
// =====================================================================================
// reg_file_vlt.v - SIMULATION-ONLY copy of source/verilog/rtl/reg_file.v for Verilator 4.x
//
// The original resets the array with non-blocking assignments inside a for loop, which
// version 4.x of the simulator rejects (BLKLOOPINIT). Here every register gets its own always block
// (generate loop). Same ports, parameters and behaviour; the original RTL is unchanged.
// The Makefile compiles this file instead of rtl/reg_file.v.
// =====================================================================================
module reg_file( clk,
                 a_reset_l,
                 ra_i,
                 ra_wr_i,
                 ra_phy_address_i,
                 rb_phy_address_i,
                 ra_o,
                 rb_o
                );

parameter MEM_DEPTH = 16;
parameter SEGMENT_WIDTH = 1;

parameter ADDR_WIDTH = 4 + (SEGMENT_WIDTH - 1);

input clk;
input a_reset_l;
input [15:0] ra_i;
input [ ADDR_WIDTH - 1 : 0 ] ra_phy_address_i;
input [ ADDR_WIDTH - 1 : 0 ] rb_phy_address_i;
input ra_wr_i;

output [15:0] ra_o;
output [15:0] rb_o;

reg [15:0] memory [ 0 : MEM_DEPTH - 1];

assign ra_o = memory[ra_phy_address_i];
assign rb_o = memory[rb_phy_address_i];

genvar g;
generate
    for (g = 0; g < MEM_DEPTH; g = g + 1) begin : g_reg
        always @(posedge clk or negedge a_reset_l)
            if (a_reset_l == 1'b0)
                memory[g] <= 16'h0000;
            else if (ra_wr_i == 1'b1 && ra_phy_address_i == g)
                memory[g] <= ra_i;
    end
endgenerate

endmodule
