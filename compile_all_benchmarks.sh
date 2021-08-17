#!/bin/bash
g++ benchmark_map.cpp -O2 -o map_benchmark
g++ benchmark_vector.cpp -O2 -o vector_benchmark
g++ benchmark_stack.cpp -O2 -o stack_benchmark