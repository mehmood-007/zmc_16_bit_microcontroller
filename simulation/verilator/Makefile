# Verilator + GTKWave flow for zm_processor
#   make            build and run (uses ./mem.mem, copied from MEM if missing)
#   make MEM=<file> run with another program image
#   make wave       open the waveform in GTKWave
#   make clean

SRC     := ../../source
MEM     ?= ../xcelium/linear_search/mem.mem
VFLAGS  := --cc --exe --build -j 4 --trace --top-module sim_top -Wno-fatal \
           -Wno-WIDTH -Wno-CASEINCOMPLETE

# rtl/reg_file.v is replaced by reg_file_vlt.v (Verilator 4.x BLKLOOPINIT limitation)
SOURCES := sim_top.v reg_file_vlt.v \
           $(filter-out %/reg_file.v,$(wildcard $(SRC)/verilog/rtl/*.v)) \
           $(wildcard $(SRC)/verilog/beh/*.v) \
           $(wildcard $(SRC)/sv/beh/*.sv)

.PHONY: all build run wave clean

all: run

build: obj_dir/Vsim_top

obj_dir/Vsim_top: $(SOURCES) sim_main.cpp
	verilator $(VFLAGS) $(SOURCES) sim_main.cpp

mem.mem: $(MEM)
	cp $(MEM) mem.mem

run: build mem.mem
	./obj_dir/Vsim_top | tee sim.log

wave:
	gtkwave zm_processor.vcd zm_processor.gtkw &

clean:
	rm -rf obj_dir zm_processor.vcd sim.log mem.mem
