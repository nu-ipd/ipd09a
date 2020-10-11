# Configuration for building example C programs.
cmake_minimum_required(VERSION 3.10)
project(lec10a C)
include(.ipd/cmake/CMakeLists.txt)

add_c_program(intro_a intro-to-c/a.c)
add_c_program(intro_b intro-to-c/b.c)
add_c_program(intro_c intro-to-c/c.c)
add_c_program(intro_d intro-to-c/d.c)

add_c_program(fib_rec src/fib.c)

add_c_program(fib_iter src/fib.c
        UBSAN
        DEFINES FIB=fib_iter)
