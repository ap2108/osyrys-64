VERILATOR = verilator
TOP = alu_tb

SRC_DIR_CORE = ../../rtl/core
SRC_DIR_PKG  = ../../rtl/osyrys64_pkg

TB_SV = $(TOP).sv
RTL = $(SRC_DIR_PKG)/osyrys64_pkg.sv $(SRC_DIR_CORE)/alu.sv

VERILATOR_FLAGS = --timing --binary --trace -Wall \
	--Wno-UNUSEDPARAM --Wno-UNUSED --Wno-WIDTH \
	-I$(SRC_DIR_CORE) -I$(SRC_DIR_PKG) -I. \
	--top-module $(TOP)

all:
	$(VERILATOR) $(VERILATOR_FLAGS) $(RTL) $(TB_SV)

run:
	./obj_dir/V$(TOP)
	gtkwave $(TOP).vcd &

clean:
	rm -rf obj_dir V$(TOP) *.vcd
