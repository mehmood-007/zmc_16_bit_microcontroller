 `timescale 1ns/100ps
//_____________________________________________
// Company      :   tud
// Author       :   ander
// E-Mail       :   <email>
//
// Date         :   Mon Nov 13 14:04:38 2006
// Last Change  :   Mon Nov 13 14:04:38 2006
// Module Name  :
// Filename     :   inst_rom.v
// Project Name :   prz/tutorial06
// Description  :   <short description>
//
//_____________________________________________
module inst_rom ( clk,
                prog_en_h,
                adr_p_mem,
                prog_mem,
		data_in_i,
		wr_en
              );

//  parameter INITFILE = "none";

   input clk;
   input prog_en_h;
   input [11:0] adr_p_mem;
   input [15:0] data_in_i;

   input wr_en;
   output [15:0] prog_mem;

   wire [15:0] prog_mem;
   wire [11:0] adr_int;
   wire [15:0] data_in;

   wire en_int;
   wire write_enable;

   assign #1 adr_int = adr_p_mem;
   assign #1 en_int = prog_en_h;
   assign #1 data_in = data_in_i;
   assign #1 write_enable = wr_en;
/*
   SU180_4096X16X1BM2 //#(.INITFILE(INITFILE))
   	SU180_4096X16X1BM2_i (.A0(adr_int[0]),
                              .A1(adr_int[1]),
                              .A2(adr_int[2]),
                              .A3(adr_int[3]),
                              .A4(adr_int[4]),
                              .A5(adr_int[5]),
                              .A6(adr_int[6]),
                              .A7(adr_int[7]),
                              .A8(adr_int[8]),
                              .A9(adr_int[9]),
                              .A10(adr_int[10]),
                              .A11(adr_int[11]),
                              .DO0(prog_mem[0]),
                              .DO1(prog_mem[1]),
                              .DO2(prog_mem[2]),
                              .DO3(prog_mem[3]),
                              .DO4(prog_mem[4]),
                              .DO5(prog_mem[5]),
                              .DO6(prog_mem[6]),
                              .DO7(prog_mem[7]),
			      .DO8(prog_mem[8]),
                              .DO9(prog_mem[9]),
                              .DO10(prog_mem[10]),
                              .DO11(prog_mem[11]),
                              .DO12(prog_mem[12]),
                              .DO13(prog_mem[13]),
                              .DO14(prog_mem[14]),
                              .DO15(prog_mem[15]),
                              .DI0(data_in[0]),
                              .DI1(data_in[1]),
                              .DI2(data_in[2]),
                              .DI3(data_in[3]),
                              .DI4(data_in[4]),
                              .DI5(data_in[5]),
                              .DI6(data_in[6]),
                              .DI7(data_in[7]),
			      .DI8(data_in[8]),
                              .DI9(data_in[9]),
                              .DI10(data_in[10]),
                              .DI11(data_in[11]),
                              .DI12(data_in[12]),
                              .DI13(data_in[13]),
                              .DI14(data_in[14]),
                              .DI15(data_in[15]),
                              .WEB(write_enable), // Write enable signals of 1 bytes, active low
                              .CK(clk),
                              .CS(en_int),
                              .OE(1'b1)
                              );
*/
sram_2048x64_sp #(.DATA_WIDTH(16),.ADDR_BITS(12),.MEM_DEPTH(4096))
   	sram_2048x64_sp_i (.ADR(adr_int),

                              .Q(prog_mem),
                              .D(data_in),
                              .WE(~write_enable), // Write enable signals of 1 bytes, active low
                              .CLK(clk),
                              .ME(en_int) );

endmodule // inst_rom
