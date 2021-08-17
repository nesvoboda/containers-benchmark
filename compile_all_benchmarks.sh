#!/bin/bash
clang++ benchmark_map.cpp -O2 -o map_benchmark
clang++ benchmark_vector.cpp -O2 -o vector_benchmark
clang++ benchmark_stack.cpp -O2 -o stack_benchmark
