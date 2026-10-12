// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsim_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_top_0\n"); );
    // Init
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsim_top___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vsim_top___024root__trace_chg_sub_0(Vsim_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we));
        tracep->chgBit(oldp+1,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb));
        tracep->chgBit(oldp+2,(vlSelf->sim_top__DOT__wb_ack));
        tracep->chgBit(oldp+3,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc));
        tracep->chgSData(oldp+4,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_adr),16);
        tracep->chgSData(oldp+5,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_in),16);
        tracep->chgSData(oldp+6,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                 [0U]),16);
        tracep->chgSData(oldp+7,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                 [1U]),16);
        tracep->chgSData(oldp+8,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                 [2U]),16);
        tracep->chgSData(oldp+9,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                 [3U]),16);
        tracep->chgSData(oldp+10,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                  [4U]),16);
        tracep->chgSData(oldp+11,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
                                  [5U]),16);
        tracep->chgBit(oldp+12,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack));
        tracep->chgBit(oldp+13,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o));
        tracep->chgCData(oldp+14,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state),2);
        tracep->chgCData(oldp+15,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__next_state),2);
        tracep->chgBit(oldp+16,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_mult));
        tracep->chgBit(oldp+17,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult));
        tracep->chgBit(oldp+18,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division));
        tracep->chgCData(oldp+19,((0xffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire))),8);
        tracep->chgBit(oldp+20,(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack));
        tracep->chgSData(oldp+21,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_out),16);
        tracep->chgBit(oldp+22,(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack));
        tracep->chgBit(oldp+23,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag));
        tracep->chgBit(oldp+24,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag));
        tracep->chgBit(oldp+25,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg));
        tracep->chgBit(oldp+26,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg_sync));
        tracep->chgBit(oldp+27,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__disable_intr));
        tracep->chgBit(oldp+28,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg));
        tracep->chgBit(oldp+29,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg_sync));
        tracep->chgCData(oldp+30,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_reg_i__DOT__segment),4);
        tracep->chgCData(oldp+31,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_zero),4);
        tracep->chgBit(oldp+32,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag));
        tracep->chgBit(oldp+33,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag));
        tracep->chgBit(oldp+34,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        tracep->chgBit(oldp+35,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
        tracep->chgSData(oldp+36,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr),16);
        tracep->chgSData(oldp+37,((0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__dividend_copy)),16);
        tracep->chgSData(oldp+38,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_div_quo),16);
        tracep->chgSData(oldp+39,((0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res)),16);
        tracep->chgSData(oldp+40,((vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res 
                                   >> 0x10U)),16);
        tracep->chgSData(oldp+41,((0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res)),16);
        tracep->chgSData(oldp+42,((vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res 
                                   >> 0x10U)),16);
        tracep->chgBit(oldp+43,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__mult_zero_flag));
        tracep->chgBit(oldp+44,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_sign_flag));
        tracep->chgBit(oldp+45,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_zero_flag));
        tracep->chgBit(oldp+46,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_zero_flag));
        tracep->chgBit(oldp+47,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_ov_flag));
        tracep->chgSData(oldp+48,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opa),16);
        tracep->chgSData(oldp+49,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opb),16);
        tracep->chgSData(oldp+50,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_abs_opa),16);
        tracep->chgBit(oldp+51,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opa) 
                                       >> 0xfU))));
        tracep->chgCData(oldp+52,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__current_state),2);
        tracep->chgIData(oldp+53,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__res),32);
        tracep->chgCData(oldp+54,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__k),4);
        tracep->chgIData(oldp+55,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__shift_reg_b),32);
        tracep->chgIData(oldp+56,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res),32);
        tracep->chgIData(oldp+57,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__dividend_copy),32);
        tracep->chgIData(oldp+58,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__divider_copy),32);
        tracep->chgIData(oldp+59,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__diff),32);
        tracep->chgCData(oldp+60,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__current_state),2);
        tracep->chgCData(oldp+61,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__div_op_state),2);
        tracep->chgCData(oldp+62,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__step_counter),5);
        tracep->chgCData(oldp+63,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__current_state),2);
        tracep->chgIData(oldp+64,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res),32);
        tracep->chgCData(oldp+65,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__k),4);
        tracep->chgIData(oldp+66,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__shift_reg_b),32);
        tracep->chgSData(oldp+67,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire),16);
        tracep->chgCData(oldp+68,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgSData(oldp+69,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory
                                  [0x1020U]),16);
        tracep->chgSData(oldp+70,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory
                                  [0x1021U]),16);
        tracep->chgSData(oldp+71,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory
                                  [vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o]),16);
        tracep->chgBit(oldp+72,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic)
                                        ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                        : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth)
                                            ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                               ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o))
                                            : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem)
                                                ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_ov_flag)
                                                : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo)
                                                    ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                    : 
                                                   ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo)
                                                     ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                     : 
                                                    ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi)
                                                      ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                      : 
                                                     ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo)
                                                       ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi)
                                                        ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                        : 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift)
                                                         ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                         : 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in)
                                                          ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                          : 
                                                         ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a)
                                                           ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                           : 
                                                          ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags)
                                                            ? 
                                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                                            >> 0xcU)
                                                            : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag))))))))))))))));
        tracep->chgBit(oldp+73,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic)
                                        ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                        : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth)
                                            ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o)
                                            : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem)
                                                ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo)
                                                    ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                    : 
                                                   ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo)
                                                     ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                     : 
                                                    ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi)
                                                      ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                      : 
                                                     ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo)
                                                       ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi)
                                                        ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                        : 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift)
                                                         ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o)
                                                         : 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in)
                                                          ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                          : 
                                                         ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a)
                                                           ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                           : 
                                                          ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags)
                                                            ? 
                                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                                            >> 0xfU)
                                                            : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag))))))))))))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgCData(oldp+74,(vlSelf->sim_top__DOT__state_d),5);
        tracep->chgBit(oldp+75,(vlSelf->sim_top__DOT__wr_d));
        tracep->chgCData(oldp+76,((0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))),8);
        tracep->chgSData(oldp+77,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+78,(vlSelf->sim_top__DOT__intr_ack_h));
        tracep->chgSData(oldp+79,(vlSelf->sim_top__DOT__wb_dat_o),16);
        tracep->chgCData(oldp+80,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state),5);
        tracep->chgSData(oldp+81,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc),12);
        tracep->chgSData(oldp+82,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o),16);
        tracep->chgBit(oldp+83,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o));
        tracep->chgSData(oldp+84,(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i),16);
        tracep->chgBit(oldp+85,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth));
        tracep->chgBit(oldp+86,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic));
        tracep->chgBit(oldp+87,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift));
        tracep->chgBit(oldp+88,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_move));
        tracep->chgBit(oldp+89,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult));
        tracep->chgBit(oldp+90,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult));
        tracep->chgBit(oldp+91,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem));
        tracep->chgBit(oldp+92,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo));
        tracep->chgBit(oldp+93,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div));
        tracep->chgBit(oldp+94,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo));
        tracep->chgBit(oldp+95,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi));
        tracep->chgBit(oldp+96,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo));
        tracep->chgBit(oldp+97,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi));
        tracep->chgCData(oldp+98,(vlSelf->sim_top__DOT__zm_processor_i__DOT__mask),4);
        tracep->chgBit(oldp+99,(vlSelf->sim_top__DOT__zm_processor_i__DOT__condition));
        tracep->chgBit(oldp+100,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in));
        tracep->chgBit(oldp+101,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add));
        tracep->chgBit(oldp+102,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc));
        tracep->chgBit(oldp+103,(vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont));
        tracep->chgBit(oldp+104,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr));
        tracep->chgBit(oldp+105,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr));
        tracep->chgBit(oldp+106,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en));
        tracep->chgBit(oldp+107,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy));
        tracep->chgBit(oldp+108,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo));
        tracep->chgBit(oldp+109,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn));
        tracep->chgBit(oldp+110,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov));
        tracep->chgBit(oldp+111,(vlSelf->sim_top__DOT__zm_processor_i__DOT__init_pc));
        tracep->chgSData(oldp+112,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand),16);
        tracep->chgCData(oldp+113,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr),4);
        tracep->chgCData(oldp+114,(vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr),4);
        tracep->chgBit(oldp+115,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr));
        tracep->chgCData(oldp+116,(vlSelf->sim_top__DOT__zm_processor_i__DOT__segment),4);
        tracep->chgSData(oldp+117,(vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr),16);
        tracep->chgSData(oldp+118,(vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address),12);
        tracep->chgBit(oldp+119,(vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc));
        tracep->chgBit(oldp+120,(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext));
        tracep->chgBit(oldp+121,(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext));
        tracep->chgBit(oldp+122,(vlSelf->sim_top__DOT__zm_processor_i__DOT__push));
        tracep->chgBit(oldp+123,(vlSelf->sim_top__DOT__zm_processor_i__DOT__pop));
        tracep->chgBit(oldp+124,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add));
        tracep->chgBit(oldp+125,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp));
        tracep->chgBit(oldp+126,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b));
        tracep->chgBit(oldp+127,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a));
        tracep->chgBit(oldp+128,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext));
        tracep->chgBit(oldp+129,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext));
        tracep->chgBit(oldp+130,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr));
        tracep->chgBit(oldp+131,((0xfffU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus))));
        tracep->chgBit(oldp+132,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext));
        tracep->chgBit(oldp+133,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags));
        tracep->chgSData(oldp+134,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in),16);
        tracep->chgSData(oldp+135,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out),16);
        tracep->chgBit(oldp+136,(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext));
        tracep->chgSData(oldp+137,(vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in),16);
        tracep->chgSData(oldp+138,(vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr),16);
        tracep->chgBit(oldp+139,(vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc));
        tracep->chgBit(oldp+140,(vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb));
        tracep->chgBit(oldp+141,(vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_we));
        tracep->chgBit(oldp+142,(vlSelf->sim_top__DOT__zm_processor_i__DOT__init_sp));
        tracep->chgBit(oldp+143,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__reti));
        tracep->chgBit(oldp+144,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init));
        tracep->chgCData(oldp+145,(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state),5);
        tracep->chgSData(oldp+146,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pram_address),12);
        tracep->chgCData(oldp+147,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address),7);
        tracep->chgCData(oldp+148,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address),7);
        tracep->chgSData(oldp+149,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus),16);
        tracep->chgSData(oldp+150,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus),16);
        tracep->chgSData(oldp+151,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand),16);
        tracep->chgBit(oldp+152,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu));
        tracep->chgBit(oldp+153,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu));
        tracep->chgBit(oldp+154,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                        >> 0xfU))));
        tracep->chgBit(oldp+155,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                        >> 0xeU))));
        tracep->chgBit(oldp+156,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                        >> 0xdU))));
        tracep->chgBit(oldp+157,((1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                                        >> 0xcU))));
        tracep->chgSData(oldp+158,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus),12);
        tracep->chgSData(oldp+159,((0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in))),12);
        tracep->chgBit(oldp+160,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__prog_en_h));
        tracep->chgSData(oldp+161,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer),16);
        tracep->chgBit(oldp+162,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o));
        tracep->chgBit(oldp+163,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o));
        tracep->chgSData(oldp+164,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res),16);
        tracep->chgSData(oldp+165,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result),16);
        tracep->chgSData(oldp+166,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result),16);
        tracep->chgBit(oldp+167,(((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                  ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o))));
        tracep->chgSData(oldp+168,((0xffffU & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))))),16);
        tracep->chgSData(oldp+169,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa),15);
        tracep->chgSData(oldp+170,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb),15);
        tracep->chgSData(oldp+171,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc),15);
        tracep->chgSData(oldp+172,((0x7fffU & (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa) 
                                                + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb)) 
                                               + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc)))),15);
        tracep->chgBit(oldp+173,(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout));
        tracep->chgBit(oldp+174,((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en)))));
        tracep->chgSData(oldp+175,((0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))),12);
        tracep->chgCData(oldp+176,(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgIData(oldp+177,(vlSelf->sim_top__DOT__cyc),32);
        tracep->chgBit(oldp+178,(vlSelf->sim_top__DOT__a_reset_l));
        tracep->chgBit(oldp+179,(vlSelf->sim_top__DOT__intr_h));
        tracep->chgBit(oldp+180,(vlSelf->sim_top__DOT__sync_h));
    }
    tracep->chgBit(oldp+181,(vlSelf->clk));
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Init
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
