# Verilator Makefile for regfile_tb testbench

VERILATOR = verilator
TOP_MODULE = regfile_tb

SRCS = ../../rtl/core/regfile.sv \
       regfile_tb.sv

INCLUDES = -I../../rtl/core -I.

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
	gtkwave regfile_tb.vcd
