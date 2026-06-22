cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/problems/toph/very_easy/x_sum.cpp
            com/ors/basics/string/ascii_number.cpp
            com/ors/problems/toph/very_easy/beautiful_subsequence.cpp
            com/ors/problems/projecteuler/unsolved/problem_zero.cpp
            com/ors/basics/algorithms/selection_sort.cpp
            com/ors/basics/algorithms/insertion_sort.cpp
            com/ors/basics/algorithms/quick_sort.cpp)
endforeach()