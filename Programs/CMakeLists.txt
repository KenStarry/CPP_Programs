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

#   arrays
add_executable(arrays_1 arrays/Introduction.cpp)

#exams
add_executable(exams1 "exams/swap any type.cpp")
add_executable(exams2 "exams/recursive factorial.cpp")
add_executable(exams3 "exams/recursive tribonacci.cpp")
add_executable(exams4 "exams/recursive fibonacci.cpp")
add_executable(exams5 "exams/function template to find minimum and maximum number.cpp")
add_executable(exams6 "exams/arrange numbers in descending using func templates.cpp")
add_executable(exams7 "exams/playlist/playlist main.cpp")
#add_executable(exams8 "exams/playlist/Playlist.h")

# files
add_executable(files_1 files/writing_to_file.cpp)
add_executable(files_2 files/reading_from_file.cpp)
add_executable(files_3 files/cat/students_file.cpp)
add_executable(files_4 files/cat/marks_file.cpp)
add_executable(files_5 files/cat/files_cat.cpp)

# vectors
add_executable(vectors_1 vectors/intro.cpp)
add_executable(vectors_2 vectors/inserting.cpp)

add_executable(pointers_1 pointers/Intro.cpp)
add_executable(pointers_2 pointers/pass_by_reference.cpp)
add_executable(pointers_3 pointers/pass_by_ref_2.cpp)
add_executable(pointers_4 pointers/constant_pointers.cpp)
add_executable(pointers_5 pointers/non_constant_pointer_to_constant_data.cpp)
add_executable(pointers_6 pointers/constant_pointer_to_constant_data.cpp)
add_executable(pointers_7 pointers/constant_pointer_to_non_constant_data.cpp)
add_executable(pointers_8 pointers/non_constant_pointer_to_non_constant_data.cpp)
add_executable(pointers_9 pointers/arithmetics/pointer_addition.cpp)
add_executable(pointers_10 pointers/non_constant_function_pointer.cpp)
