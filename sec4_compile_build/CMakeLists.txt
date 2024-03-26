cmake_minimum_required(VERSION 3.10.0)
project(sec4 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(practice_4_3 src/practice3.cpp)
add_executable(practice_4_4 src/practice4.cpp)
add_executable(practice_4_5 src/practice5_1.cpp src/practice5_2.cpp)
add_executable(practice_4_6 src/practice6_1.cpp src/practice6_2.cpp)
add_executable(practice_4_7 src/practice7.cpp)
add_executable(practice_4_8 src/practice8.c)
target_sources(practice_4_8 PRIVATE src/practice8.cpp)
add_executable(practice_4_9 src/practice9.cpp)
add_executable(practice_4_section_check src/practice_section_check.cpp)


target_include_directories(practice_4_6 PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_include_directories(practice_4_section_check PRIVATE ${PROJECT_SOURCE_DIR}/include)