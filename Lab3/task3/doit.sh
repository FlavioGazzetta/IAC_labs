#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f f1_des.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace f1_des.sv f1_fsm.sv clktick.sv  --exe f1_des_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_des.mk Vf1_des

# run executable simulation file
obj_dir/Vf1_des
