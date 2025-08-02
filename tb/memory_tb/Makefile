# Verilator Makefile for memory_tb testbench

VERILATOR = verilator
TOP_MODULE = memory_tb

# Source files
SRCS = ../../rtl/core/memory.sv \
       memory_tb.sv

# Include paths
INCLUDES = -I../../rtl/core -I.

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
	gtkwave memory_tb.vcd
