cmake_minimum_required(VERSION 3.0.0)
project(sec1 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(practice_1_1 src/practice1.cpp)
add_executable(practice_1_2 src/practice2.cpp)
add_executable(practice_1_3 src/practice3.cpp)
add_executable(practice_1_4 src/practice4.cpp)
add_executable(practice_1_5 src/practice5.cpp)
add_executable(practice_1_6 src/practice6.cpp)
add_executable(practice_1_7 src/practice7.cpp)
add_executable(practice_1_section_check src/practice_section_check.cpp)

set(CPACK_PROJECT_NAME sec1)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
