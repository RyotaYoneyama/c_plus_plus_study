cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(practice1 practice1.cpp)
add_executable(practice2 practice2.cpp)
add_executable(practice3 practice3.cpp)
add_executable(practice4 practice4.cpp)
add_executable(practice5 practice5.cpp)
add_executable(practice6 practice6.cpp)
add_executable(practice7 practice7.cpp)

set(CPACK_PROJECT_NAME sec1)
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
