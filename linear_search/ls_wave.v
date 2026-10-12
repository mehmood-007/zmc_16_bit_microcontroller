// =====================================================================================
// ls_wave.v - extra top-level module for running linear_search with a GTKWave dump.
//
// * Loads linear_search/mem.mem into ext_mem right after reset (the repository
//   simulation/xcelium/mem.mem is left untouched).
// * Dumps a VCD (key signals aliased into this scope) starting when boot finishes.
// * Checks RESULT[0..1] and stops the simulation.
//
// Run from simulation/xcelium:
//   ifxxcelium execute -- linear_search/ls_wave.v -top ls_wave
//   gtkwave linear_search/linear_search.vcd linear_search/linear_search.gtkw &
// Plusargs: +MEM=<file> +VCD=<file> +RUN_CYCLES=<cycles after boot>
// =====================================================================================
`timescale 1ns / 100ps
module ls_wave;

`define ZM  tb_zm_processor.zm_processor_i
`define EXT tb_zm_processor.wishbone_slave_i.ext_mem_i

  // ---------------- aliased signals (shown in GTKWave) ----------------
  wire        clk        = tb_zm_processor.clk;
  wire        a_reset_l  = tb_zm_processor.a_reset_l;
  wire        sync_h     = tb_zm_processor.sync_h;
  wire        intr_h     = tb_zm_processor.intr_h;
  wire        intr_ack_h = tb_zm_processor.intr_ack_h;
  wire [4:0]  state      = `ZM.ctrl_i.fsm_i.current_state;
  wire [11:0] pc         = `ZM.data_i.program_counter_i.address_pc;
  wire [15:0] ir         = `ZM.data_i.inst_reg_i.ire_o;
  wire        flag_z     = `ZM.data_i.z_flag;
  wire        flag_s     = `ZM.data_i.sign_flag;
  wire        flag_c     = `ZM.data_i.carry_flag;
  wire        flag_v     = `ZM.data_i.overflow_flag;
  wire [15:0] r0         = `ZM.data_i.reg_file_i.memory[0];
  wire [15:0] r1         = `ZM.data_i.reg_file_i.memory[1];
  wire [15:0] r2         = `ZM.data_i.reg_file_i.memory[2];
  wire [15:0] r3         = `ZM.data_i.reg_file_i.memory[3];
  wire [15:0] r4         = `ZM.data_i.reg_file_i.memory[4];
  wire [15:0] r5         = `ZM.data_i.reg_file_i.memory[5];
  wire        wb_cyc     = tb_zm_processor.wb_cyc;
  wire        wb_stb     = tb_zm_processor.wb_stb;
  wire        wb_we      = tb_zm_processor.wb_we;
  wire        wb_ack     = tb_zm_processor.wb_ack;
  wire [15:0] wb_adr     = tb_zm_processor.wb_adr;
  wire [15:0] wb_wdata   = tb_zm_processor.wb_dat_i;   // processor -> memory
  wire [15:0] wb_rdata   = tb_zm_processor.wb_dat_o;   // memory -> processor
  wire [15:0] result0    = `EXT.memory[16'h1020];
  wire [15:0] result1    = `EXT.memory[16'h1021];

  reg [1023:0] mem_file, vcd_file;
  integer      run_cycles, i, boot_cyc;

  // ---------------- load program image after reset ----------------
  initial begin
    if (!$value$plusargs("MEM=%s", mem_file))        mem_file   = "linear_search/mem.mem";
    if (!$value$plusargs("VCD=%s", vcd_file))        vcd_file   = "linear_search/linear_search.vcd";
    if (!$value$plusargs("RUN_CYCLES=%d", run_cycles)) run_cycles = 400;
    @(posedge tb_zm_processor.a_reset_l);
    #1;
    for (i = 0; i < 65536; i = i + 1)
      `EXT.memory[i] = 16'hxxxx;
    $readmemh(mem_file, `EXT.memory);
    $display("LS_WAVE: loaded %0s", mem_file);
  end

  // ---------------- dump from end of boot, then check and stop ----------------
  initial begin
    wait (state == 5'b10001);                         // FINISH_INIT_SEQ
    $display("LS_WAVE: boot done at %0t, dumping to %0s", $time, vcd_file);
    $dumpfile(vcd_file);
    $dumpvars(1, ls_wave);
    repeat (run_cycles) @(posedge clk);
    $display("LS_WAVE: RESULT[0]=%h (exp 0004)  RESULT[1]=%h (exp ffff)  -> %0s",
             result0, result1,
             (result0 === 16'h0004 && result1 === 16'hFFFF) ? "PASS" : "FAIL");
    $dumpflush;
    $finish;
  end

endmodule
