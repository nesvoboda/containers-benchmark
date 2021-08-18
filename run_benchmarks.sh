#!/bin/bash

test_container () {
    printf "\n\e[34m$1: \e[0m"
    (time ./benchmark_$1.sh) 2> >( awk 'NR==2{print $2}')
    printf "Diff: "

    DIFF=$(diff std_output_$1 test_output_$1)
    if [ "$DIFF" != "" ] 
    then
        echo "FAIL"
    else
        echo "OK"
    fi
}

printf "\e[34m--- Compiling all benchmarks ---\e[0m\n"
./compile_all_benchmarks.sh


printf "\e[34m--- Your results ---\e[0m\n"
test_container "map"
test_container "stack"
test_container "vector"