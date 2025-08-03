# Verilator Makefile for cpu_tb testbench

VERILATOR = verilator
TOP_MODULE = cpu_tb

SRCS = ../../rtl/osyrys64_pkg/osyrys64_pkg.sv \
       ../../rtl/core/cpu.sv \
       ../../rtl/core/regfile.sv \
       ../../rtl/core/alu.sv \
       ../../rtl/core/control.sv \
       ../../rtl/core/signext.sv \
       cpu_tb.sv

INCLUDES = -I../../rtl/core -I../../rtl/osyrys64_pkg -I.

all:
	$(VERILATOR) --cc $(SRCS) \
		--top-module $(TOP_MODULE) \
		--binary --trace -Wall \
		-Wno-UNUSEDPARAM -Wno-UNUSED -Wno-WIDTH \
		-Wno-PINCONNECTEMPTY -Wno-SYNCASYNCNET -Wno-PINMISSING \
		$(INCLUDES) \
		--build -j 0

run: all
	./obj_dir/V$(TOP_MODULE)

clean:
	rm -rf obj_dir/ logs/ *.log *.vcd

gtkwave:
	gtkwave cpu_tb.vcd
