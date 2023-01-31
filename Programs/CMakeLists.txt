cmake_minimum_required(VERSION 3.24)
project(Programs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Programs main.cpp)

add_executable(functions_1 functions/Maximum.cpp)
add_executable(functions_2 functions/default_arguments.cpp)

add_executable(functions_templates_1 functions/templates/introduction.cpp)
add_executable(functions_templates_2 functions/templates/maximum.cpp)

add_executable(functions_recursion_1 functions/recursion/Fibonacci.cpp)
add_executable(functions_recursion_2 functions/recursion/Factorial.cpp)
add_executable(functions_recursion_3 functions/recursion/Tribonacci.cpp)

add_executable(loops1 loops/Estimate_PI.cpp loops/Factorial.cpp)

add_executable(arrays_1 arrays/Introduction.cpp)

add_executable(pointers_1 pointers/Intro.cpp pointers/non_constant_pointer_to_non_constant_data.cpp)
add_executable(pointers_2 pointers/pass_by_reference.cpp)
add_executable(pointers_3 pointers/pass_by_ref_2.cpp)
add_executable(pointers_4 pointers/constant_pointers.cpp)
add_executable(pointers_5 pointers/non_constant_pointer_to_constant_data.cpp)
add_executable(pointers_6 pointers/constant_pointer_to_constant_data.cpp)
add_executable(pointers_7 pointers/constant_pointer_to_non_constant_data.cpp)
