// sim_main.cpp - Verilator C++ driver: toggles the clock and dumps a VCD for GTKWave.
#include <memory>
#include "Vsim_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    std::unique_ptr<Vsim_top> top(new Vsim_top);
    std::unique_ptr<VerilatedVcdC> vcd(new VerilatedVcdC);
    top->trace(vcd.get(), 99);
    vcd->open("zm_processor.vcd");

    const vluint64_t half_period = 6000;  // ps (VCD timescale 1ps), CLKPERIODE = 12 ns as in tb
    vluint64_t t = 0;

    top->clk = 1;
    top->eval();
    vcd->dump(t);
    while (!Verilated::gotFinish()) {
        t += half_period;
        top->clk = !top->clk;
        top->eval();
        vcd->dump(t);
    }

    top->final();
    vcd->close();
    return 0;
}
