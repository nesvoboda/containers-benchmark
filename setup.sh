#!/bin/bash
# map
printf "Generating map test data...\n"
python3 generate_input_map.py > input_map
g++ benchmark_map.cpp -D STD -O2 && cat input_map | ./a.out > std_output_map && rm a.out

printf "Generating vector test data...\n"
python3 generate_input_vec.py > input_vector
g++ benchmark_vector.cpp -D STD -O2 && cat input_vector | ./a.out > std_output_vector && rm a.out

printf "Generating stack test data...\n"
python3 generate_input_stack.py > input_stack
g++ benchmark_stack.cpp -D STD -O2 && cat input_stack | ./a.out > std_output_stack && rm a.out