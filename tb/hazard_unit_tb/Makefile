# Verilator Makefile for hazard_unit_tb testbench

VERILATOR = verilator
TOP_MODULE = hazard_unit_tb

# Source files
SRCS = ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       ../../rtl/core/hazard_unit.sv \
       hazard_unit_tb.sv

# Include paths
INCLUDES = -I../../rtl/core -I../../rtl/osyrys64_pkg -I.

# Default target: Build the simulation binary (NO C++ file involved!)
all:
	$(VERILATOR) --cc $(SRCS) \
		--top-module $(TOP_MODULE) \
		--timing --binary --trace -Wall \
		-Wno-UNUSEDPARAM -Wno-UNUSED -Wno-WIDTH \
		$(INCLUDES) \
		--build -j 0

# Run the simulation
run: all
	./obj_dir/V$(TOP_MODULE)

# Clean all build artifacts
clean:
	rm -rf obj_dir/ logs/ *.log *.vcd

# View waveform with GTKWave
gtkwave:
	gtkwave hazard_unit_tb.vcd
