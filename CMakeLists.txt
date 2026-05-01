cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/problems/toph/very_easy/nomans_birthday.cpp
            com/ors/problems/toph/very_easy/a_feast_for_the_fans.cpp
            com/ors/problems/toph/moderate/oh_no_classes.cpp
            com/ors/basics/set.cpp
            com/ors/problems/toph/hard/free_pizza.cpp
            com/ors/problems/toph/very_easy/power_of_army.cpp
            com/ors/problems/toph/unranked/sofdor_alis_magical_blackboard.cpp
            com/ors/problems/toph/very_easy/event_timing.cpp
            com/ors/problems/toph/very_easy/print_your_victory.cpp)
endforeach()