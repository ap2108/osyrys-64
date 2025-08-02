# Verilator Makefile for control_tb testbench

VERILATOR = verilator
TOP_MODULE = control_tb

# Source files
SRCS = ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       ../../rtl/core/control.sv \
       control_tb.sv

# Include paths
INCLUDES = -I../../rtl/core -I../../rtl/osyrys64_pkg -I.

# Default build target
all:
	$(VERILATOR) --cc $(SRCS) \
		--top-module $(TOP_MODULE) \
		--timing --binary --trace -Wall \
		--Wno-UNUSEDPARAM --Wno-UNUSED --Wno-WIDTH \
		$(INCLUDES) \
		--exe --build -j 0

# Clean all build artifacts
clean:
	rm -rf obj_dir/ logs/ *.log *.vcd

# Run the simulation after building
run: all
	./obj_dir/V$(TOP_MODULE)

# View waveform with GTKWave
gtkwave:
	gtkwave control_tb.vcd
