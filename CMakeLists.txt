cmake_minimum_required(VERSION 3.7)
project(Algorithms)

set(CMAKE_C_STANDARD 99)

set(SORTING_DIR Sorting/)
set(
        SOURCE_FILES
        Sorting/random_intarray_generator.h
        Sorting/random_intarray_generator.c
)
add_executable(Algorithms main.c ${SOURCE_FILES})
add_executable(quicksort Sorting/Quicksort/quicksort.c ${SOURCE_FILES})
