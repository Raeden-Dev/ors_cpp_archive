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
            com/ors/problems/toph/very_easy/jigsaw_puzzle.cpp
            com/ors/problems/toph/troll_questions_very_hard/kathal_game.cpp
            com/ors/problems/toph/troll_questions_very_hard/the_power_of_choice.cpp
            com/ors/problems/toph/troll_questions_very_hard/if_else_eat.cpp
            com/ors/problems/toph/troll_questions_very_hard/hot_wheels_cold_tires.cpp
            com/ors/problems/toph/troll_questions_very_hard/one_step_to_the_acm_lab.cpp
            com/ors/problems/toph/troll_questions_very_hard/the_perfect_score.cpp
            com/ors/problems/toph/easy/nth_prime.cpp
            com/ors/problems/toph/troll_questions_very_hard/shukrans_dilemma.cpp)
endforeach()