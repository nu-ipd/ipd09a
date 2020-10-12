# Configuration for building example C programs.
cmake_minimum_required(VERSION 3.10)
project(lec10a C)
include(.ipd/cmake/CMakeLists.txt)

add_c_program(output src/output.c)
add_c_program(input src/input.c)
add_c_program(check_input src/check_input.c)
add_c_program(multi_input src/multi_input.c)

add_c_program(fib_rec src/fib.c)

add_c_program(fib_iter src/fib.c
        UBSAN
        DEFINES FIB=fib_iter)
