# Verilator Makefile for reader_tb testbench

VERILATOR = verilator
TOP_MODULE = reader_tb

SRCS = ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       ../../rtl/core/reader.sv \
       reader_tb.sv

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
	gtkwave reader_tb.vcd
