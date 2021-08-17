#!/bin/bash
# map
python3 generate_input_map.py > input_map
clang++ benchmark_map.cpp -D STD -O2 && cat input_map | ./a.out > std_output_map && rm a.out

python3 generate_input_vec.py > input_vector
clang++ benchmark_vector.cpp -D STD -O2 && cat input_vector | ./a.out > std_output_vector && rm a.out

python3 generate_input_stack.py > input_stack
clang++ benchmark_stack.cpp -D STD -O2 && cat input_stack | ./a.out > std_output_stack && rm a.out