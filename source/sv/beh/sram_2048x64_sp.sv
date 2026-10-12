/*
 * sram_2048x64_1p
*/

module sram_2048x64_sp #(
    parameter ADDR_BITS=11,
    parameter DATA_WIDTH=64,
    parameter MEM_DEPTH=2048
)(
    input             CLK,
    input             ME,     // memory enable
    input             WE,     // write enable
    input      [ ADDR_BITS-1 : 0] ADR, // addr
    input      [ DATA_WIDTH-1: 0] D,  // data in
    output     [ DATA_WIDTH-1: 0] Q  // data out
);

reg [DATA_WIDTH-1:0] mem [0: MEM_DEPTH-1];  // memory
reg [DATA_WIDTH-1:0] dout;

wire                 clk;
wire [DATA_WIDTH-1:0]din;

assign Q       = dout;

assign clk     = CLK;
assign din     = D;

always @(posedge clk) begin
    if(ME & WE) begin
        mem[ADR] = din;
    end
end

always @(posedge clk) begin
	if(ME && (!WE)) begin
        dout <= mem[ADR];
    end
end

endmodule