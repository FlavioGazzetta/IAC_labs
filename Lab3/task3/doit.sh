#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f clktick.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace clktick.sv --exe clktick_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vclktick.mk Vclktick

# run executable simulation file
obj_dir/Vclktick
