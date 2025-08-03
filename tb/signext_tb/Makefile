# Verilator Makefile for signext_tb testbench

VERILATOR = verilator
TOP_MODULE = signext_tb

# Correct source file paths based on actual structure
SRCS = ../../rtl/core/signext.sv \
       ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       signext_tb.sv

# Correct include paths
INCLUDES = -I../../rtl/core -I../../rtl/osyrys64_pkg -I.

# Build simulation binary (no C++ required)
all:
	$(VERILATOR) --cc $(SRCS) \
		--top-module $(TOP_MODULE) \
		--timing --binary --trace -Wall \
		-Wno-UNUSEDPARAM -Wno-UNUSED -Wno-WIDTH \
		$(INCLUDES) \
		--build -j 0

# Run simulation
run: all
	./obj_dir/V$(TOP_MODULE)

# Clean build artifacts
clean:
	rm -rf obj_dir/ logs/ *.log *.vcd

# View waveform
gtkwave:
	gtkwave signext_tb.vcd
