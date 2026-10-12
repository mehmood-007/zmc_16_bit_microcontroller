// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP___024ROOT_H_
#define VERILATED_VSIM_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vsim_top__Syms;
VL_MODULE(Vsim_top___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ sim_top__DOT__a_reset_l;
        CData/*0:0*/ sim_top__DOT__intr_h;
        CData/*0:0*/ sim_top__DOT__sync_h;
        CData/*0:0*/ sim_top__DOT__wb_ack;
        CData/*0:0*/ sim_top__DOT__intr_ack_h;
        CData/*4:0*/ sim_top__DOT__state_d;
        CData/*0:0*/ sim_top__DOT__wr_d;
        CData/*0:0*/ sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack;
        CData/*0:0*/ sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o;
        CData/*1:0*/ sim_top__DOT__wishbone_slave_i__DOT__current_state;
        CData/*1:0*/ sim_top__DOT__wishbone_slave_i__DOT__next_state;
        CData/*0:0*/ sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_airth;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_logic;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_shift;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_move;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_smult;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_mult;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_rem;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_quo;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_div;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_mult_lo;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_mult_hi;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_smult_lo;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_smult_hi;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ack_mult;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ack_smult;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ack_division;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__mask;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__condition;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_data_in;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_operand_add;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_stored_pc;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__arith_cont;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sr_wr;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sp_wr;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__wr_en;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__wr_cy;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__wr_zo;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__wr_sn;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__wr_ov;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__init_pc;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__ra_addr;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__rb_addr;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ra_wr;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__segment;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__stop_pc_inc;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__push;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__pop;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_jmp_add;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_sp;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_operand_b;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_operand_a;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_pc_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_opa_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_pop_flags;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__sel_flag_ext;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack;
    };
    struct {
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_we;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__m_wb_cyc;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__m_wb_stb;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__m_wb_we;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__init_sp;
        CData/*4:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__reti;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init;
        CData/*4:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg_sync;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__disable_intr;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg_sync;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_zero;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__prog_en_h;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_reg_i__DOT__segment;
        CData/*6:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address;
        CData/*6:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__sign_flag_airth_shift;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__mult_zero_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_sign_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_zero_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_zero_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_ov_flag;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__carry_in;
        CData/*0:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__current_state;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__div_op_state;
        CData/*4:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__step_counter;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__current_state;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__k;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__current_state;
        CData/*3:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__k;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state;
        CData/*1:0*/ sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state;
        CData/*0:0*/ __Vdlyvset__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0;
        CData/*0:0*/ __VinpClk__TOP__sim_top__DOT__a_reset_l;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__sim_top__DOT__a_reset_l;
        CData/*0:0*/ __Vchglast__TOP__sim_top__DOT__a_reset_l;
        SData/*15:0*/ sim_top__DOT__wb_dat_o;
        SData/*15:0*/ sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i;
        SData/*15:0*/ sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__ra_operand;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__io_addr;
        SData/*11:0*/ sim_top__DOT__zm_processor_i__DOT__jmp_address;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_in;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_out;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_out;
    };
    struct {
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_in;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__reg_wb_adr;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__m_wb_adr;
        SData/*11:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pram_address;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr;
        SData/*11:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc;
        SData/*11:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__operand_b_add;
        SData/*11:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_div_quo;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opa;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opb;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_abs_opa;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result;
        SData/*14:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa;
        SData/*14:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb;
        SData/*14:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res;
        SData/*15:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__reg_opa;
        SData/*15:0*/ __Vdlyvdim0__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0;
        SData/*15:0*/ __Vdlyvval__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0;
        IData/*31:0*/ sim_top__DOT__cyc;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__dividend_copy;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__divider_copy;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__diff;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__shift_reg_b;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__res;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__shift_reg_b;
        IData/*31:0*/ sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res;
        VlUnpacked<SData/*15:0*/, 65536> sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory;
        VlUnpacked<SData/*15:0*/, 4096> sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__mem;
        VlUnpacked<SData/*15:0*/, 128> sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top___024root(Vsim_top__Syms* symsp, const char* name);
    ~Vsim_top___024root();
    VL_UNCOPYABLE(Vsim_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
