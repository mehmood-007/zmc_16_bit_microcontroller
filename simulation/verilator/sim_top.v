// =====================================================================================
// sim_top.v - Verilator top for zm_processor (replaces tb_zm_processor.v + testcase.v)
//
// This simulator version (4.x) has no timing support, so the clock is toggled from sim_main.cpp and
// reset / sync / interrupt are generated from a cycle counter with the same timing as
// testcase.v (sync @9000 for 2 clk, intr 40 clk later, sync again 400 clk later).
// The program image is read by ext_mem from ./mem.mem (run directory).
// =====================================================================================
`timescale 1ns / 1ps
module sim_top #(
    parameter integer MAX_CYCLES = 12000,          // stop simulation after this many clocks
    parameter [15:0]  RES_ADDR   = 16'h1020        // RESULT[0] address (RESULT[1] = +1)
) (
    input clk
);

    // ------------------------------------------------------------- stimulus
    integer cyc = 0;
    reg     a_reset_l = 1'b0;
    reg     intr_h    = 1'b0;
    reg     sync_h    = 1'b0;

    always @(posedge clk) begin
        cyc       <= cyc + 1;
        a_reset_l <= (cyc >= 2);
        sync_h    <= (cyc >= 9000 && cyc < 9002) || (cyc == 9442);
        intr_h    <= (cyc == 9042);
    end

    // ------------------------------------------------------------- DUT + memory
    wire        wb_we, wb_stb, wb_ack, wb_cyc, intr_ack_h;
    wire [15:0] wb_adr, wb_dat_o, wb_dat_i;

    wishbone_slave wishbone_slave_i (
        .clk       (clk),
        .a_reset_l (a_reset_l),
        .wb_ack_o  (wb_ack),
        .wb_we_i   (wb_we),
        .wb_stb_i  (wb_stb),
        .wb_cyc_i  (wb_cyc),
        .wb_adr_i  (wb_adr),
        .wb_dat_o  (wb_dat_o),
        .wb_dat_i  (wb_dat_i)
    );

    zm_processor zm_processor_i (
        .clk          (clk),
        .a_reset_l    (a_reset_l),
        .wb_ack       (wb_ack),
        .wb_we        (wb_we),
        .wb_stb       (wb_stb),
        .wb_cyc       (wb_cyc),
        .wb_adr       (wb_adr),
        .wb_dat_i     (wb_dat_i),
        .wb_dat_o     (wb_dat_o),
        .intr_h_i     (intr_h),
        .intr_ack_h_o (intr_ack_h),
        .sync_h_i     (sync_h)
    );

    // ------------------------------------------------------------- monitor
    wire [4:0]  state = zm_processor_i.ctrl_i.fsm_i.current_state;
    wire [11:0] pc    = zm_processor_i.data_i.program_counter_i.address_pc;

    // taps for the waveform (large arrays are not traced)
    wire [15:0] r0 = zm_processor_i.data_i.reg_file_i.memory[0];
    wire [15:0] r1 = zm_processor_i.data_i.reg_file_i.memory[1];
    wire [15:0] r2 = zm_processor_i.data_i.reg_file_i.memory[2];
    wire [15:0] r3 = zm_processor_i.data_i.reg_file_i.memory[3];
    wire [15:0] r4 = zm_processor_i.data_i.reg_file_i.memory[4];
    wire [15:0] r5 = zm_processor_i.data_i.reg_file_i.memory[5];
    wire [15:0] result0 = wishbone_slave_i.ext_mem_i.memory[RES_ADDR];
    wire [15:0] result1 = wishbone_slave_i.ext_mem_i.memory[RES_ADDR + 16'd1];

    reg  [4:0]  state_d = 5'd0;
    reg         wr_d    = 1'b0;

    always @(posedge clk) begin
        state_d <= state;
        wr_d    <= wishbone_slave_i.ext_mem_i.data_wr_i;

        if (state == 5'b10001 && state_d != 5'b10001)
            $display("[%0d] boot done (PRAM loaded), execution starts at 0x000", cyc);
        if (intr_ack_h)
            $display("[%0d] interrupt acknowledged at PC=%h", cyc, pc);
        if (state == 5'b10011 && state_d != 5'b10011)
            $display("[%0d] RETI", cyc);
        if (wishbone_slave_i.ext_mem_i.data_wr_i && !wr_d)
            $display("[%0d] ext write [%h] = %h", cyc,
                     wishbone_slave_i.ext_mem_i.data_address_i,
                     wishbone_slave_i.ext_mem_i.data_i);

        if (cyc == MAX_CYCLES) begin
            $display("RESULT[0] = %h   RESULT[1] = %h   (PC=%h state=%b)",
                     wishbone_slave_i.ext_mem_i.memory[RES_ADDR],
                     wishbone_slave_i.ext_mem_i.memory[RES_ADDR + 16'd1], pc, state);
            $finish;
        end
    end

endmodule
