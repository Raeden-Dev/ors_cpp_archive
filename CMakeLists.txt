cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/problems/ulab_contest/april_2026_cp_contest/way_too_long_words.cpp
            com/ors/problems/ulab_contest/april_2026_cp_contest/creating_words.cpp
            com/ors/problems/ulab_contest/april_2026_cp_contest/maximum_multiple_sum.cpp)
endforeach()