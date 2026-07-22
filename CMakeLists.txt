cmake_minimum_required(VERSION 4.2)
project(ors_cpp_archive)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SRC_FILES "*.cpp")

foreach(SRC_FILE ${SRC_FILES})
    get_filename_component(EXECUTABLE_NAME ${SRC_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${SRC_FILE}
            com/ors/problems/codeforces/800-rating/4A-watermelon.cpp
            com/ors/problems/codeforces/800-rating/71A-way_too_long_words.cpp
            com/ors/problems/codeforces/800-rating/231A-team.cpp
            com/ors/problems/codeforces/800-rating/282A-Bit++.cpp
            com/ors/problems/codeforces/800-rating/158A-next_round.cpp
            com/ors/problems/codeforces/800-rating/50A-domino_piling.cpp
            com/ors/problems/codeforces/800-rating/263A-beautiful_matrix.cpp
            com/ors/problems/codeforces/800-rating/112A-petya_and_strings.cpp
            com/ors/problems/codeforces/800-rating/236A-boy_or_girl.cpp
            com/ors/problems/codeforces/800-rating/339A_helpful_maths.cpp)
endforeach()