# Configuration for building example C programs.
cmake_minimum_required(VERSION 3.10)
project(ipd09a C)
include(.ipd/cmake/CMakeLists.txt)

add_c_program(output src/output.c)
add_c_program(input src/input.c)
add_c_program(check_input src/check_input.c)
add_c_program(multi_input src/multi_input.c)

add_c_program(fib_rec src/fib.c)

add_c_program(fib_iter src/fib.c
        UBSAN
        DEFINES FIB=fib_iter)

add_c_program(fast_fib_rec src/fib.c
        UBSAN
        DEFINES FIB=fast_fib_rec)

add_c_test_program(ipd09a-2 exercise/ipd09a-2.c)
add_c_test_program(ipd09a-4 exercise/ipd09a-4.c)
add_c_test_program(ipd09a-5 exercise/ipd09a-5.c)
