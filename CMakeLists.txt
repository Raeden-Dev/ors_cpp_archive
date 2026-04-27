cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/basics/time_complexity.cpp
            com/ors/problems/copy_me.cpp
            com/ors/problems/toph/very_easy/icpc_seat_plan.cpp
            com/ors/problems/toph/very_easy/alayna_and_strings.cpp
            com/ors/problems/toph/very_easy/gpa_calculator.cpp
            com/ors/problems/unsolved_problematic_questions/make_it_big.cpp
            com/ors/problems/toph/very_easy/prochur_chuti_lagbe.cpp
            com/ors/problems/toph/very_easy/who_is_the_champion.cpp
            com/ors/problems/toph/very_easy/45th_icpc_unsolved_problem.cpp
            com/ors/problems/toph/very_easy/tree_knapsack_problem.cpp
            com/ors/problems/toph/very_easy/game_of_tic_tac_toe.cpp
            com/ors/basics/testcase_handling.cpp
            com/ors/problems/toph/very_easy/collectors_problem.cpp)
endforeach()