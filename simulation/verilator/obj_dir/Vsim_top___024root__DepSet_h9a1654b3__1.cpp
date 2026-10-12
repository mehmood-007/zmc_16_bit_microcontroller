// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top___024root.h"

VL_INLINE_OPT void Vsim_top___024root___sequent__TOP__3(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___sequent__TOP__3\n"); );
    // Body
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

VL_INLINE_OPT void Vsim_top___024root___sequent__TOP__4(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vdly__sim_top__DOT__cyc;
    // Body
    __Vdly__sim_top__DOT__cyc = ((IData)(1U) + vlSelf->sim_top__DOT__cyc);
    vlSelf->sim_top__DOT__a_reset_l = VL_LTES_III(32, 2U, vlSelf->sim_top__DOT__cyc);
    vlSelf->sim_top__DOT__sync_h = ((VL_LTES_III(32, 0x2328U, vlSelf->sim_top__DOT__cyc) 
                                     & VL_GTS_III(32, 0x232aU, vlSelf->sim_top__DOT__cyc)) 
                                    | (0x24e2U == vlSelf->sim_top__DOT__cyc));
    vlSelf->sim_top__DOT__intr_h = (0x2352U == vlSelf->sim_top__DOT__cyc);
    vlSelf->sim_top__DOT__cyc = __Vdly__sim_top__DOT__cyc;
}

void Vsim_top___024root___sequent__TOP__0(Vsim_top___024root* vlSelf);
void Vsim_top___024root___sequent__TOP__1(Vsim_top___024root* vlSelf);
void Vsim_top___024root___sequent__TOP__2(Vsim_top___024root* vlSelf);

void Vsim_top___024root___eval(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__sim_top__DOT__a_reset_l)))) {
        Vsim_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsim_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__sim_top__DOT__a_reset_l)))) {
        Vsim_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vsim_top___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsim_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__sim_top__DOT__a_reset_l 
        = vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l;
    vlSelf->__VinpClk__TOP__sim_top__DOT__a_reset_l 
        = vlSelf->sim_top__DOT__a_reset_l;
}

QData Vsim_top___024root___change_request_1(Vsim_top___024root* vlSelf);

VL_INLINE_OPT QData Vsim_top___024root___change_request(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___change_request\n"); );
    // Body
    return (Vsim_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsim_top___024root___change_request_1(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->sim_top__DOT__a_reset_l ^ vlSelf->__Vchglast__TOP__sim_top__DOT__a_reset_l));
    VL_DEBUG_IF( if(__req && ((vlSelf->sim_top__DOT__a_reset_l ^ vlSelf->__Vchglast__TOP__sim_top__DOT__a_reset_l))) VL_DBG_MSGF("        CHANGE: sim_top.v:19: sim_top.a_reset_l\n"); );
    // Final
    vlSelf->__Vchglast__TOP__sim_top__DOT__a_reset_l 
        = vlSelf->sim_top__DOT__a_reset_l;
    return __req;
}

#ifdef VL_DEBUG
void Vsim_top___024root___eval_debug_assertions(Vsim_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
