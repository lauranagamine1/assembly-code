cmake_minimum_required(VERSION 3.31)
project(Arqui)

set(CMAKE_CXX_STANDARD 20)

add_executable(Arqui main.cpp)
add_executable(bubblesort bubblesort.cpp)
add_executable(if_stm plantillas/if_stm.cpp)
add_executable(for_stm plantillas/for_stm.cpp)
add_executable(lista plantillas/lista.cpp)
add_executable(function plantillas/function.cpp)
add_executable(fun_2_int_multi funcion_2_enteros_multi.cpp)
add_executable(suma_recur suma_recursiva.cpp)
add_executable(factorial factorial.cpp)
add_executable(mul_recursiva mul_recursiva.cpp)
add_executable(f91 f91.cpp)
add_executable(sel_sort selection_sort.cpp)
add_executable(fibonacci fibonacci.cpp)
add_executable(f-recur-for funcion-recur-for.cpp)
add_executable(ch-recursive ch-recursive.cpp)
add_executable(insertionsort insertion-sort.cpp)
add_executable(merge-sort merge-sort.cpp)
