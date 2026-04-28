cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/problems/toph/very_easy/love_letters.cpp
            com/ors/problems/toph/very_easy/find_prime.cpp
            com/ors/problems/toph/very_easy/shimantos_paralellogram.cpp
            com/ors/problems/toph/very_easy/the_haunted_house.cpp
            com/ors/problems/toph/very_easy/ice_cream_of_montu_mia.cpp
            com/ors/problems/toph/very_easy/jigsaw_puzzle.cpp)
endforeach()