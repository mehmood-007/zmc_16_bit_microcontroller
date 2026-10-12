// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top___024root.h"

VL_ATTR_COLD void Vsim_top___024root___initial__TOP__0(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->sim_top__DOT__state_d = 0U;
    vlSelf->sim_top__DOT__wr_d = 0U;
    vlSelf->sim_top__DOT__intr_h = 0U;
    vlSelf->sim_top__DOT__sync_h = 0U;
    vlSelf->sim_top__DOT__a_reset_l = 0U;
    vlSelf->sim_top__DOT__cyc = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsim_top__ConstPool__TABLE_h2e7af28f_0;

VL_ATTR_COLD void Vsim_top___024root___settle__TOP__0(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->sim_top__DOT__wb_ack = 0U;
    if ((0U != (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we) {
                if (vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack) {
                    vlSelf->sim_top__DOT__wb_ack = 1U;
                }
            } else if (vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack) {
                vlSelf->sim_top__DOT__wb_ack = 1U;
            }
        }
    }
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__next_state = 1U;
    if ((0U == (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
        if ((1U & ((~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb)) 
                   & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc))))) {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__next_state = 0U;
        }
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = 0U;
        if (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb) 
             & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we) {
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = 1U;
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i 
                    = vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_in;
            } else {
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
            }
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 0U;
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we)))) {
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 1U;
            }
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o = 0U;
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o 
                = vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_adr;
        } else {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 0U;
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o = 0U;
        }
    } else if ((1U == (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
        if ((((IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack) 
              & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb))) 
             & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc)))) {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__next_state = 0U;
        }
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = 0U;
        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we) {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = 1U;
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i 
                = vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_in;
        } else {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
        }
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 0U;
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we)))) {
            vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 1U;
            if (vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack) {
                vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 0U;
            }
        }
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o = 0U;
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_adr;
    } else {
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = 0U;
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = 0U;
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = 0U;
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in = 0U;
    if ((0U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
            if ((1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in 
                        = vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_out;
                }
            }
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack = 0U;
        if ((2U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack = 1U;
            }
        } else if ((1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack = 1U;
            }
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__res;
    if ((0x8000U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opa) 
                    ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opb)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res 
            = (- vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__res);
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_sign_flag 
        = (vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res 
           >> 0x1fU);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_zero_flag 
        = (0U == vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag 
        = ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg_sync) 
           | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc = 0U;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                  >> 0xfU)))) {
        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                      >> 0xeU)))) {
            if ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc 
                                        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc 
                                    = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc 
                                    = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
                            }
                        }
                    } else if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc 
                                = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
                        }
                    }
                }
            }
        }
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg;
    if (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg_sync) 
         & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__disable_intr)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag = 1U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__init_sp = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                        | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
        if ((1U & (~ ((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                            | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                           | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                          | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                         | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                        | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
            if ((0xfU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__init_sp = 1U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = 0U;
            if ((0xfU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x11U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xeU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = 1U;
                    } else if ((0x10U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = 1U;
                    }
                }
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = 0U;
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand = 0U;
        if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                   | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
               | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0x12U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand 
                                        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 1U;
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi = 0U;
    if (((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
               | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
            | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
           | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
          | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
         | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((0U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((8U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi = 1U;
                        }
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
                        if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 1U;
                            }
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
                            if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 1U;
                                }
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo = 0U;
            if ((8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_mult) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo = 1U;
                }
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo = 0U;
            if ((8U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo = 1U;
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = 0U;
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = 1U;
                        }
                    }
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = 0U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__init_pc = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                        | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
        if ((1U & (~ ((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                            | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                           | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                          | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                         | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                        | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
            if ((0xfU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x11U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__init_pc = 1U;
                }
            }
        }
    }
    vlSelf->sim_top__DOT__wb_dat_o = 0U;
    if ((0U != (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
        if ((1U == (IData)(vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we)))) {
                if (vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack) {
                    vlSelf->sim_top__DOT__wb_dat_o 
                        = vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory
                        [vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o];
                }
            }
        }
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__reti = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                        | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
        if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                   | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
               | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__reti = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en = 1U;
        if ((1U & (~ ((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                            | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                           | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                          | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                         | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                        | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
            if ((0xfU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x11U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xeU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en = 1U;
                    } else if ((0x10U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en = 0U;
                        }
                    }
                }
            }
        }
        vlSelf->sim_top__DOT__intr_ack_h = 0U;
        if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                   | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
               | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                        vlSelf->sim_top__DOT__intr_ack_h = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en = 1U;
        vlSelf->sim_top__DOT__intr_ack_h = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__push = 0U;
    if (((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
               | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
            | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
           | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
          | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
         | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((0U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((8U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0xdU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__push = 1U;
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 1U;
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                                    } else {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 1U;
                                    }
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
        }
    } else if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                      | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__push = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 1U;
            }
        } else if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__push = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
            if ((4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext 
                    = (1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)));
            } else if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
    if ((1U & (~ ((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                        | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
        if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                   | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
               | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 1U;
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
                    }
                } else if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
                        }
                    } else if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = 0U;
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = 0U;
                if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = 1U;
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 0U;
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 1U;
                            }
                        } else if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 0U;
            }
        } else {
            if ((0xfU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x11U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xeU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
                    } else if ((0x10U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = 0U;
                        }
                    }
                }
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_move = 0U;
    if (((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
               | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
            | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
           | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
          | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
         | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag)))) {
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if ((1U & (~ ((((((((((8U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                          | (0xbU == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (3U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                        | (4U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                       | (1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                      | (0x21U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x23U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x24U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x28U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x2bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if ((1U & (~ ((((((((((
                                                   ((0x80U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x81U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x83U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x84U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x85U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x88U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x89U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x8aU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x8bU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x8cU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x8dU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))))) {
                                if ((0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_move = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__segment = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((0xfbU 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if ((0xf1U 
                                                 != 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                if (
                                                    (0xf3U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) {
                                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__segment 
                                                        = 
                                                        (0xfU 
                                                         & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 0U;
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if ((1U & (~ ((((((((((8U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                          | (0xbU == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (3U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                        | (4U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                       | (1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                      | (0x21U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x23U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x24U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x28U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x2bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if ((1U & (~ ((((((((((
                                                   ((0x80U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x81U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x83U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x84U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x85U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x88U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x89U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x8aU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x8bU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x8cU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x8dU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))))) {
                                if ((0U != (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) {
                                    if ((0x20U != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((2U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 1U;
                                        }
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                                        if ((2U != 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                                            if ((0x22U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 1U;
                                            }
                                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                                            if ((0x22U 
                                                 != 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 1U;
                                            }
                                        } else {
                                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                                        }
                                    } else {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                                    }
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((0xfbU 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if ((0xf1U 
                                                 != 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                if (
                                                    (0xf3U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) {
                                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
                    if ((1U & (~ ((((((((0xf5U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))) 
                                        | (0xf0U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0xf2U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0xfaU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0xfbU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0xf1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0xf3U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0xf9U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if ((0xf6U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf7U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 0U;
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if (((((((((((8U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                 | (0xbU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                | (3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (4U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                              | (1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                             | (0x21U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x23U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0x24U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 1U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 1U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                    } else {
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if (((((((((((((0x80U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                           | (0x81U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x82U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x83U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x84U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x85U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x88U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x89U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x8aU == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x8bU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x8cU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x8dU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U))))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy 
                                    = ((0x85U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x8dU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))));
                            }
                        }
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                        if (((((((((((((((((0x40U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                           | (0x41U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x42U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x43U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x44U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x45U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x46U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x47U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x48U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x49U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4aU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4bU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4cU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4dU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4eU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x4fU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                        } else if (((((((((((((0x80U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))) 
                                              | (0x81U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x82U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x83U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x84U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x85U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x88U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x89U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8aU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8bU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x8cU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x8dU == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                            if ((0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                            }
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                        }
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 1U;
                        }
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 1U;
                                    } else if ((0xfbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if ((1U & (~ ((((((((((8U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                          | (0xbU == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (3U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                        | (4U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                       | (1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                      | (0x21U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x23U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x24U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x28U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x2bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if ((1U & (~ ((((((((((
                                                   ((0x80U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x81U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x83U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x84U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x85U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x88U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x89U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x8aU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x8bU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x8cU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x8dU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))))) {
                                if ((0U != (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) {
                                    if ((0x20U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 1U;
                            } else if ((0xf2U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__segment = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 1U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag)))) {
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if (((((((((((8U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                 | (0xbU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                | (3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (4U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                              | (1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                             | (0x21U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x23U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0x24U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont 
                            = (0x20U == (0x20U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)));
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    if ((1U & (~ ((((((((((8U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                          | (0xbU == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (3U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                        | (4U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                       | (1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                      | (0x21U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x23U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x24U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x28U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x2bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if (((((((((((((((((0x40U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                           | (0x41U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x42U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x43U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x44U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x45U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x46U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x47U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x48U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x49U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4aU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4bU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4cU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4dU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4eU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x4fU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 1U;
                        }
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if (((((((((((((0x80U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                           | (0x81U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x82U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x83U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x84U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x85U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x88U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x89U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x8aU == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x8bU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x8cU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x8dU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U))))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 1U;
                            }
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                    if (((((((((((8U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                 | (0xbU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                | (3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (4U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                              | (1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                             | (0x21U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x23U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0x24U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 1U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                if ((0xcU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xcU)))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address 
                        = (0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 1U;
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((0xfbU 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if ((0xf1U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask 
                                                    = 
                                                    (0xfU 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                                            } else if (
                                                       (0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) {
                                                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask 
                                                    = 
                                                    (0xfU 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0xf6U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__mask 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if (((((((((((8U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                 | (0xbU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                | (3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (4U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                              | (1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                             | (0x21U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x23U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0x24U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else if (((((((((((((((((0x40U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))) 
                                              | (0x41U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x42U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x43U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x44U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x45U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x46U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x47U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x48U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x49U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x4aU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x4bU == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4cU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4dU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4eU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4fU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else if (((((((((((((0x80U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                          | (0x81U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x82U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x83U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x84U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x85U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x88U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x89U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x8aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x8bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x8cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else if ((0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else {
                        if ((0x20U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                                = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                        }
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((0x20U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))
                                        ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                           >> 4U) : 
                                       ((2U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))
                                         ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 4U) : 
                                        ((0x22U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))
                                          ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 4U)
                                          : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 4U)))));
                    }
                } else if (((((((((0xf5U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                  | (0xf0U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0xf2U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0xfaU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0xfbU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))) {
                    if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                        if ((0xf0U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 4U));
                            }
                        }
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                    if ((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else if ((0xf0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                       >> 4U));
                    } else if ((0xf2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                    } else if ((0xfaU != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) {
                        if ((0xfbU != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 4U));
                            }
                        }
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__segment = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 0U;
            if ((8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 1U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
            if ((8U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 1U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 1U;
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                if ((9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                    }
                } else if ((0xaU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 1U;
                        }
                    } else if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 1U;
                            }
                        }
                    }
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
            if ((8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_mult) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                    = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                               >> 4U));
            } else if ((9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                    = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                               >> 4U));
            } else if ((0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                    = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                               >> 4U));
            } else {
                if ((0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire)));
                } else if ((0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire)));
                } else if ((0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire)));
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xdU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                                    = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                                               >> 4U));
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__segment = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 0U;
        if ((1U & (~ ((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                            | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                           | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                          | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                         | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                        | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                       | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                      | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))))) {
            if ((0xfU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0x11U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = 1U;
                }
            }
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 0U;
        if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                   | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
               | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = 1U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 1U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 1U;
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                    }
                } else if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x12U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 1U;
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 1U;
                                }
                            }
                        }
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 1U;
                } else if ((4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b 
                        = (1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)));
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 1U;
                                }
                            }
                        }
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                    if ((4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext 
                            = (1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)));
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
            if ((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address 
                        = (0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout));
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 1U;
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                }
            } else if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0x700U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 1U;
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
            if ((5U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                        = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                                   >> 4U));
                } else if ((4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                            = (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire) 
                                       >> 4U));
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr 
                            = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                    }
                } else {
                    if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x12U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr 
                                    = (0xfU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire));
                            }
                        }
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = 0U;
        }
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_we = 0U;
    if ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext)))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_we = 1U;
            }
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 0U;
        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 1U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
        } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 2U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 0U;
        if ((2U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 2U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
            }
        } else if ((1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 1U;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = 0U;
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag) 
                     << 7U) | (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag) 
                                << 6U) | (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag) 
                                           << 5U) | 
                                          (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag) 
                                            << 4U) 
                                           | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__mask)))));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__condition 
        = Vsim_top__ConstPool__TABLE_h2e7af28f_0[__Vtableidx1];
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address 
        = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_zero) 
            << 3U) | (7U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr)));
    if ((8U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address 
            = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_reg_i__DOT__segment) 
                << 3U) | (7U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr)));
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address 
        = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_zero) 
            << 3U) | (7U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr)));
    if ((8U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address 
            = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_reg_i__DOT__segment) 
                << 3U) | (7U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr)));
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 0U;
    if (((((((((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
               | (8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
              | (9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
             | (0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
            | (0xbU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
           | (0xcU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
          | (0xdU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
         | (0x15U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
            } else {
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                                    } else if ((0xfbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                                    } else if ((0xf1U 
                                                != 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                        if ((0xf3U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0xcU != (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xcU)))) {
                    if ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 0xcU)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                    }
                }
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((0xfbU 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if ((0xf1U 
                                                 != 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                if (
                                                    (0xf3U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) {
                                                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0xcU != (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xcU)))) {
                    if ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 0xcU)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
                    }
                }
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
            if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag)))) {
                if ((1U & (~ (((((((((((((((((8U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))) 
                                             | (0xbU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (3U == 
                                               (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                           | (4U == 
                                              (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                          | (1U == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (0x21U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x23U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x24U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x28U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x2bU == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | ((((((((((((((((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U))) 
                                                     | (0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                            >> 8U)))) 
                                                    | (0x42U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x43U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x44U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x46U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x47U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x48U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x49U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x4aU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4bU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4cU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4dU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4eU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4fU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                                   | ((((((((((((0x80U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                                | (0x81U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x82U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x83U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x84U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x85U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x88U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x89U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x8aU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x8bU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x8cU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x8dU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))) 
                                  | (0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (0x20U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                               | (0x22U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))))) {
                    if (((((((((0xf5U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))) 
                               | (0xf0U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf2U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xfaU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xfbU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | (0xf1U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                          | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                         | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U))))) {
                        if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            if ((0xf0U != (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if ((0xf2U != (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) {
                                    if ((0xfaU != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        if ((0xfbU 
                                             != (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) {
                                            if ((0xf1U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
            } else {
                if ((((((((((((((((((8U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U))) 
                                    | (0xbU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                   | (3U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                  | (4U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                 | (1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                | (0x21U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x23U == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x24U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x28U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0x2bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                           | ((((((((((((((((0x40U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))) 
                                            | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x42U 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x43U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x44U == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x46U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x47U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x48U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x49U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x4aU == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x4bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x4cU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x4dU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x4eU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x4fU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U))))) 
                          | ((((((((((((0x80U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                       | (0x81U == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x82U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x83U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x84U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x85U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x88U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0x89U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0x8aU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0x8bU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0x8cU == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0x8dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U))))) 
                         | (0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                        | (0x20U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))) 
                       | (2U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) 
                      | (0x22U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                     | (0xfU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U))))) {
                    if ((1U & (~ ((((((((((8U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U))) 
                                          | (0xbU == 
                                             (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                         | (3U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                        | (4U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                       | (1U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                      | (0x21U == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                     | (0x23U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                    | (0x24U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                   | (0x28U == (0xffU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                                  | (0x2bU == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))))) {
                        if ((1U & (~ ((((((((((((((
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x41U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x43U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x45U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x46U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x47U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x48U 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x49U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x4aU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x4bU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                         | (0x4cU == 
                                            (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                                        | (0x4dU == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                                       | (0x4eU == 
                                          (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                                      | (0x4fU == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U))))))) {
                            if ((1U & (~ ((((((((((
                                                   ((0x80U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U))) 
                                                    | (0x81U 
                                                       == 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                           >> 8U)))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                          >> 8U)))) 
                                                  | (0x83U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                         >> 8U)))) 
                                                 | (0x84U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 8U)))) 
                                                | (0x85U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))) 
                                               | (0x88U 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                              | (0x89U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                             | (0x8aU 
                                                == 
                                                (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))) 
                                            | (0x8bU 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
                                           | (0x8cU 
                                              == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
                                          | (0x8dU 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))))) {
                                if ((0U != (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) {
                                    if ((0x20U != (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if (((((((((0xf5U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U))) 
                                  | (0xf0U == (0xffU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))) 
                                 | (0xf2U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) 
                                | (0xfaU == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) 
                               | (0xfbU == (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) 
                              | (0xf1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) 
                             | (0xf3U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) 
                            | (0xf9U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U))))) {
                    if ((0xf5U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                        if ((0xf0U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                        } else if ((0xf2U == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                        } else if ((0xfaU == (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                        } else if ((0xfbU != (0xffU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                            if ((0xf1U == (0xffU & 
                                           ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                                }
                            } else if ((0xf3U == (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) {
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                                }
                            }
                        }
                    }
                } else if ((0xf6U != (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                               >> 8U)))) {
                    if ((0xf7U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                            >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc 
                            = (1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag)));
                    } else if ((0xf8U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 8U)))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                    }
                }
                if ((0xcU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xcU)))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                } else if ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 0xcU)))) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                }
            }
        } else {
            if ((8U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((9U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xaU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                if ((0xdU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                                    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 1U;
                                    }
                                } else {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                                }
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
            if ((8U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
            } else if ((9U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
            } else if ((0xaU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
            } else if ((0xbU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((0xcU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((0xdU != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                        }
                    }
                }
            }
        }
    } else if (((((((((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)) 
                      | (3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                     | (4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                    | (6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                   | (0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                  | (0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                 | (1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) 
                | (0x14U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state)))) {
        if ((5U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
        } else {
            if ((3U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                if ((4U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                    if ((6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                    } else if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                    } else if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 1U;
                        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = 0U;
                        }
                    }
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                    if ((6U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                        if ((0x13U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                            if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 1U;
                                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
            }
            vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
            if ((3U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                }
            } else if ((4U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc 
                    = (1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)));
            } else if ((6U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                }
            } else if ((0x13U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                }
            } else if ((0x12U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
                }
            } else if ((1U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
            }
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
        if ((0xfU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
        } else if ((0x11U != (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((0xeU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 0U;
            } else if ((0x10U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = 1U;
                }
            }
        }
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
        [vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address];
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory
        [vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address];
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out = 0U;
    if (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext) 
         & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc)));
    } else if (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext) 
                & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out 
            = (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag) 
                << 0xfU) | (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag) 
                             << 0xeU) | (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag) 
                                             << 0xcU) 
                                            | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc)))));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr;
    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__push) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer 
            = (0xffffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr) 
                          - (IData)(1U)));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__pop) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr)));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__init_sp) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer = 0xffffU;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag;
    if ((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                      >> 0xeU)))) {
            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                          >> 0xdU)))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 9U)))) {
                                if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o 
                                        = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                 >> 0xfU));
                                }
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o 
                                    = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
                            }
                        }
                    }
                }
            }
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result 
            = ((0x4000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                ? (0x7fffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                              >> 1U)) : ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                          ? (0x7fffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                >> 1U))
                                          : ((0x1000U 
                                              & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                              ? (0x7fffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                    >> 1U))
                                              : ((0x800U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                  ? 
                                                 ((0x400U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (0x7fffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 1U))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((0xfffeU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag))
                                                     : 
                                                    ((0xfffeU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                           >> 0xfU)))))
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((0xfffeU 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         << 1U)) 
                                                     | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag))
                                                     : 
                                                    (0xfffeU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        << 1U)))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    (0xfffcU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        << 2U))
                                                     : 
                                                    (0xfffeU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        << 1U)))))
                                                  : 
                                                 ((0x400U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (0x7fffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 1U))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag) 
                                                      << 0xfU) 
                                                     | (0x7fffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x8000U 
                                                      & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         << 0xfU)) 
                                                     | (0x7fffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                           >> 1U)))))
                                                   : 
                                                  ((0x200U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag) 
                                                      << 0xfU) 
                                                     | (0x7fffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                           >> 1U)))
                                                     : 
                                                    ((0x8000U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)) 
                                                     | (0x7fffU 
                                                        & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                           >> 1U))))
                                                    : 
                                                   ((0x100U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    (0x3fffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        >> 2U))
                                                     : 
                                                    (0x7fffU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        >> 1U)))))))));
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result 
            = (0x7fffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                          >> 1U));
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res = 0U;
    if (((((((((0x43U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U))) | (0x41U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
              | (0x42U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                    >> 8U)))) | (0x44U 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                     >> 8U)))) 
            | (0x45U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                  >> 8U)))) | (0x46U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))) 
          | (0x47U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                >> 8U)))) | (0x48U 
                                             == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U))))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = (0xffffU & ((0x43U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 8U)))
                           ? (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                           : ((0x41U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 8U)))
                               ? (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                     | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                               : ((0x42U == (0xffU 
                                             & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                >> 8U)))
                                   ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                      & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                   : ((0x44U == (0xffU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 8U)))
                                       ? ((~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus)) 
                                          & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                       : ((0x45U == 
                                           (0xffU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))
                                           ? (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus))
                                           : ((0x46U 
                                               == (0xffU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 8U)))
                                               ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                  ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                               : ((0x47U 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 8U)))
                                                   ? 
                                                  (~ 
                                                   ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                                   : 
                                                  ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))))))))));
    } else if ((0x49U == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = (0xffffU & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                             ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))));
    } else if ((0x4aU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus;
    } else if ((0x4bU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = (0xffffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                          | (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))));
    } else if ((0x4cU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus;
    } else if ((0x4dU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = (0xffffU & ((~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus)) 
                          | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)));
    } else if ((0x4eU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res 
            = ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
               | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
    } else if ((0x4fU == (0xffU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                   >> 8U)))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res = 1U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc)));
    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus 
            = (0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus 
            = (0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__init_pc) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus = 0U;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa = 0U;
    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                  >> 0xfU)))) {
        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                      >> 0xeU)))) {
            if ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                              >> 0xcU)))) {
                    if ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 0xaU)))) {
                            if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                        = (0x7fffU 
                                           & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus));
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                    = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus));
                            }
                        }
                    } else if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 9U)))) {
                            if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                          >> 8U)))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                    = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
                            }
                        }
                    } else if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                = (0x7fffU & ((IData)(1U) 
                                              + (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))));
                        }
                    } else if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                            = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                 >> 0xcU)))) {
                if ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                    = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus));
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus));
                        }
                    }
                } else if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                    if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                  >> 9U)))) {
                        if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                      >> 8U)))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                                = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                     >> 9U)))) {
                    if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa 
                            = (0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
                    }
                }
            }
        }
    }
}

VL_ATTR_COLD void Vsim_top___024root___settle__TOP__1(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb 
        = (0x7fffU & ((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                       ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                       : ((0x4000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                           ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                           : ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                               ? ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                   ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                   : ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                       ? ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                           : ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                               : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                       : ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                               : ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                                   : 0x7fffU))
                                           : ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 0x7fffU
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                               : ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag)
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))))))
                               : ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                   ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                   : ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                       ? ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                           : ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                               : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                       : ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                               : ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)
                                                   : 0x7fffU))
                                           : ((0x200U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((IData)(1U) 
                                                   + 
                                                   (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus)))
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))
                                               : ((0x100U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 1U
                                                   : (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))))))))));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in = 0U;
    if ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext)))) {
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in 
                    = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out;
            }
        }
    } else if ((2U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pram_address 
        = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus;
    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pram_address 
            = (0xfffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus));
    }
    if ((0x10U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
            = ((8U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                ? 0U : ((4U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                         ? ((2U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                             ? 0U : ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                                      ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                          ? 0U : 0x15U)
                                      : 0U)) : ((2U 
                                                 & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                                                  ? 
                                                 ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                                   ? 0U
                                                   : 0x13U)
                                                  : 
                                                 ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                                   ? 0U
                                                   : 0x12U))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                                   ? 0xeU
                                                   : 0x10U)))));
    } else if ((8U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
        if ((4U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                = ((2U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                    ? ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                        ? 0x10U : (((0xfffU == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus)) 
                                    | (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag))
                                    ? 0x11U : 0x10U))
                    : 0U);
        } else if ((2U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            if ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0U;
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0xaU;
                if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division) {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0xdU;
                }
            }
        } else if ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 9U;
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0xcU;
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 8U;
            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_mult) {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0xbU;
            }
        }
    } else if ((4U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
            = ((2U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                ? ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                    ? 0U : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                             ? 0U : 6U)) : ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                                             ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                                 ? 0U
                                                 : 5U)
                                             : ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                                                 ? 0U
                                                 : 4U)));
    } else if ((2U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
            = ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))
                ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack)
                    ? 0U : 3U) : 0U);
    } else if ((1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0U;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0x12U;
    } else if ((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
        if ((0x4000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
            if ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                if ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                    if ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                            = ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                ? ((0xdU == (0xfU & 
                                             ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 0xcU)))
                                    ? 5U : 0U) : ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 0x13U
                                                    : 6U)
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 0U)));
                    } else if ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                                    = ((0xdU == (0xfU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 0xcU)))
                                        ? 5U : 0U);
                            } else {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0U;
                                if ((1U & (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__condition)))) {
                                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 7U;
                                }
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                                = ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                    ? 0x14U : 1U);
                        }
                    } else if ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                        if ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))) {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0U;
                            if (vlSelf->sim_top__DOT__zm_processor_i__DOT__condition) {
                                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 0x15U;
                            }
                        } else {
                            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = 4U;
                        }
                    } else {
                        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                            = ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                ? ((0xdU == (0xfU & 
                                             ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                              >> 0xcU)))
                                    ? 5U : 0U) : 3U);
                    }
                } else {
                    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                        = ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 0xcU)))
                            ? 5U : 0U);
                }
            } else {
                vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                    = ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                         >> 0xcU)))
                        ? 5U : 0U);
            }
        } else {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
                = ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                     >> 0xcU))) ? 5U
                    : 0U);
        }
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state 
            = ((0x4000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                ? ((0xdU == (0xfU & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                     >> 0xcU))) ? 5U
                    : 0U) : ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                              ? ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                  ? ((0xdU == (0xfU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 0xcU)))
                                      ? 5U : 0U) : 
                                 ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                   ? ((0xdU == (0xfU 
                                                & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                   >> 0xcU)))
                                       ? 5U : 0U) : 
                                  ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                    ? ((0xdU == (0xfU 
                                                 & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                    >> 0xcU)))
                                        ? 5U : 0U) : 
                                   ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                     ? ((0x100U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                         ? ((0xdU == 
                                             (0xfU 
                                              & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                 >> 0xcU)))
                                             ? 5U : 0U)
                                         : 9U) : ((0xdU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 0U)))))
                              : ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                  ? ((0xdU == (0xfU 
                                               & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                  >> 0xcU)))
                                      ? 5U : 0U) : 
                                 ((0x800U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                   ? ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                       ? ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? ((0x100U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? 0xaU
                                               : ((0xdU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 0U))
                                           : ((0xdU 
                                               == (0xfU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 0xcU)))
                                               ? 5U
                                               : 0U))
                                       : ((0xdU == 
                                           (0xfU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 0xcU)))
                                           ? 5U : 0U))
                                   : ((0x400U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                       ? ((0xdU == 
                                           (0xfU & 
                                            ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                             >> 0xcU)))
                                           ? 5U : 0U)
                                       : ((0x200U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? ((0x100U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0xdU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 0U)
                                               : 8U)
                                           : ((0xdU 
                                               == (0xfU 
                                                   & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout) 
                                                      >> 0xcU)))
                                               ? 5U
                                               : 0U)))))));
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr = 0U;
    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus;
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout 
        = (1U & ((((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa) 
                   + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb)) 
                  + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc)) 
                 >> 0xfU));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr = 0U;
    if ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr 
                = vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr;
        } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr 
                = vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr;
        }
    } else if ((2U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr;
    } else if ((1U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state))) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr;
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result 
        = ((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result)) 
           | (0x7fffU & (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa) 
                          + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb)) 
                         + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc))));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result 
        = ((0x7fffU & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result)) 
           | (0x8000U & (((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                           ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                              >> 0xfU) : ((0x4000U 
                                           & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                           ? ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                              >> 0xfU)
                                           : ((0x2000U 
                                               & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                               ? ((0x1000U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   ((0x400U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                       + 
                                                       (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                         >> 0xfU) 
                                                        + 
                                                        (~ 
                                                         ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                          >> 0xfU))))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU)
                                                       : 
                                                      (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                         >> 0xfU)) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        >> 0xfU)))))
                                                    : 
                                                   ((0x400U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU)
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         >> 0xfU)))))
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             + 
                                                             (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))) 
                                                            >> 0xfU))))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        >> 0xfU))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))))))
                                               : ((0x1000U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x800U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   ((0x400U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                         >> 0xfU)) 
                                                       + 
                                                       (1U 
                                                        & (((IData)(1U) 
                                                            + 
                                                            (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))) 
                                                           >> 0xfU)))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU)
                                                       : 
                                                      ((((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                         >> 0xfU) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         >> 0xfU)) 
                                                       + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout)))))
                                                    : 
                                                   ((0x400U 
                                                     & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                     ? 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU)
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                         >> 0xfU)))))
                                                     : 
                                                    ((0x200U 
                                                      & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                      ? 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      (1U 
                                                       & (((IData)(1U) 
                                                           + 
                                                           (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))) 
                                                          >> 0xfU))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))
                                                      : 
                                                     ((0x100U 
                                                       & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                       ? 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                       + 
                                                       ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                        >> 0xfU))
                                                       : 
                                                      ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                       >> 0xfU))))))))) 
                         << 0xfU)));
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o 
        = ((0x8000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
            ? 0U : ((0x4000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                     ? 0U : (1U & ((0x2000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                    ? ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                        ? 0U : ((0x800U 
                                                 & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                 ? 
                                                ((0x400U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        ((1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                             >> 0xfU)) 
                                                         + 
                                                         (~ 
                                                          (1U 
                                                           & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                              >> 0xfU))))) 
                                                       >> 1U))
                                                    : 0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & ((((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                             >> 0xfU))) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                            >> 0xfU))) 
                                                       >> 1U)))))
                                                 : 
                                                ((0x400U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                  ? 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                             >> 0xfU)))) 
                                                       >> 1U))))
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                         + 
                                                         (1U 
                                                          & (((IData)(1U) 
                                                              + 
                                                              (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))) 
                                                             >> 0xfU)))) 
                                                       >> 1U))
                                                    : 0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                            >> 0xfU))) 
                                                       >> 1U))
                                                    : 0U)))))
                                    : ((0x1000U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                        ? 0U : ((0x800U 
                                                 & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                 ? 
                                                ((0x400U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (1U 
                                                    & ((((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                             >> 0xfU))) 
                                                        + 
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             + 
                                                             (~ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus))) 
                                                            >> 0xfU))) 
                                                       >> 1U))
                                                    : 0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & ((((1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus) 
                                                             >> 0xfU)) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                             >> 0xfU))) 
                                                        + (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout)) 
                                                       >> 1U)))))
                                                 : 
                                                ((0x400U 
                                                  & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                  ? 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 0U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                         + 
                                                         (1U 
                                                          & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                             >> 0xfU)))) 
                                                       >> 1U))))
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag)
                                                    : 0U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout))
                                                    ? 
                                                   (1U 
                                                    & (((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                                                        + 
                                                        (1U 
                                                         & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus) 
                                                            >> 0xfU))) 
                                                       >> 1U))
                                                    : 0U)))))))));
    if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = (0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand));
        if (vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont) {
            vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
                = ((0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand)) 
                   & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag));
        }
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand) 
                     >> 0xfU));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout) 
                     ^ (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o)));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = (0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__dividend_copy);
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_zero_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_ov_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_div_quo;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = (0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res);
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_zero_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = (vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res 
               >> 0x10U);
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = (0xffffU & vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res);
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__mult_zero_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = (vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res 
               >> 0x10U);
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = (0U == (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand) 
                     >> 0xfU));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    } else if (vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand = 0U;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                     >> 0xdU));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                     >> 0xeU));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                     >> 0xfU));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & ((IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in) 
                     >> 0xcU));
    } else {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu 
            = vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag;
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag));
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu 
            = (1U & (IData)(vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag));
    }
}

VL_ATTR_COLD void Vsim_top___024root___eval_initial(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sim_top__DOT__a_reset_l 
        = vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l;
    Vsim_top___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsim_top___024root___eval_settle(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_settle\n"); );
    // Body
    Vsim_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsim_top___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vsim_top___024root___final(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___final\n"); );
}

VL_ATTR_COLD void Vsim_top___024root___ctor_var_reset(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__cyc = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__a_reset_l = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__intr_h = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__sync_h = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__wb_ack = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__intr_ack_h = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__wb_dat_o = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__state_d = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__wr_d = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_funny_ack = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_wr_o = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_dat_i = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_adr_o = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_en_rd_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_airth = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_logic = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_shift = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_move = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_rem = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_quo = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_div = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_lo = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_mult_hi = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_lo = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_smult_hi = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_mult = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_smult = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ack_division = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__mask = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__condition = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_data_in = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_add = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_stored_pc = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__arith_cont = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sr_wr = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sp_wr = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_cy = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_zo = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_sn = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wr_ov = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__init_pc = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_operand = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_addr = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__rb_addr = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ra_wr = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__segment = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__io_addr = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__jmp_address = VL_RAND_RESET_I(12);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__stop_pc_inc = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_rd_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_en_wr_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__zm_wb_data_ack = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_jmp_add = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_sp = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_b = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_operand_a = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pc_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_opa_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_indirect_addr = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pram_add_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_pop_flags = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_in = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_out = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__sel_flag_ext = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_out = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_in = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_ack = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_stb = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_dat_cyc = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_we = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__reg_wb_adr = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_dat_in = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_adr = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_cyc = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_stb = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__m_wb_we = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__init_sp = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__state = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__isr_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__sync_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__reti = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__finish_init = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__fsm_i__DOT__next_state = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__intr_flag_reg_sync = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__disable_intr = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__ctrl_i__DOT__inter_sync_reg__DOT__sync_flag_reg_sync = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pram_address = VL_RAND_RESET_I(12);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_zero = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opa_bus = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_alu_opb_bus = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__ra_operand = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__overflow_flag_alu = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__carry_alu = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__z_flag_alu = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__sign_flag_alu = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__stack_ptr = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_pc = VL_RAND_RESET_I(12);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__operand_b_add = VL_RAND_RESET_I(12);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_bus = VL_RAND_RESET_I(12);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__prog_en_h = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__pointer = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_rom_i__DOT__sram_2048x64_sp_i__DOT__dout = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__inst_reg_i__DOT__ire = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__segment_reg_i__DOT__segment = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__ra_phy_address = VL_RAND_RESET_I(7);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__address_gen_i__DOT__rb_phy_address = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__reg_file_i__DOT__memory[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_arith_o = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__carry_shift_o = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_shift_result = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_div_quo = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__sign_flag_airth_shift = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__mult_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_sign_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__smult_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_zero_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__div_ov_flag = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opa = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_opb = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__reg_abs_opa = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__alu_airth_result = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opa = VL_RAND_RESET_I(15);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opb = VL_RAND_RESET_I(15);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__opc = VL_RAND_RESET_I(15);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_arithmetic_i__DOT__cout = VL_RAND_RESET_I(1);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__alu_logic_i__DOT__logic_res = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__dividend_copy = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__divider_copy = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__diff = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__div_op_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_divider_i__DOT__step_counter = VL_RAND_RESET_I(5);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__k = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__unsigned_multiplier_i__DOT__shift_reg_b = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__res = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__k = VL_RAND_RESET_I(4);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__reg_opa = VL_RAND_RESET_I(16);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__shift_reg_b = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__data_i__DOT__alu_core_i__DOT__signed_multiplier_i__DOT__smult_res = VL_RAND_RESET_I(32);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->sim_top__DOT__zm_processor_i__DOT__wishbone_master_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0 = 0;
    vlSelf->__Vdlyvval__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0 = VL_RAND_RESET_I(16);
    vlSelf->__Vdlyvset__sim_top__DOT__wishbone_slave_i__DOT__ext_mem_i__DOT__memory__v0 = 0;
    vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__sim_top__DOT__a_reset_l = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
