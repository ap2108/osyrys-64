# Verilator Makefile for forward_mux_tb testbench

VERILATOR = verilator
TOP_MODULE = forward_mux_tb

SRCS = ../../rtl/core/forward_mux.sv \
       ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       forward_mux_tb.sv

INCLUDES = -I../../rtl/core -I../../rtl/osyrys64_pkg -I.

all:
	$(VERILATOR) --cc $(SRCS) \
		--top-module $(TOP_MODULE) \
		--timing --binary --trace -Wall \
		-Wno-UNUSEDPARAM -Wno-UNUSED -Wno-WIDTH \
		$(INCLUDES) \
		--build -j 0

run: all
	./obj_dir/V$(TOP_MODULE)

clean:
	rm -rf obj_dir/ logs/ *.log *.vcd

gtkwave:
	gtkwave forward_mux_tb.vcd
