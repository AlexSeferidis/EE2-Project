#cleanup
rm -rf obj_dir
rm -f top.vcd
rm -f top.vcd.fst
rm -f top.vcd.fst.hier

# run Verilator to translate SV to C++, including tb
verilator -Wall --cc --trace top.sv --exe top_tb.cpp

# build C++ project via make, automatically generated by Verilator
make -j -C obj_dir/ -f Vtop.mk Vtop

# run executable sim file
obj_dir/Vtop

# convert to image
python3 img_gen.py

# gtkwave
# gtkwave --optimize top.vcd