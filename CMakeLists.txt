cmake_minimum_required(VERSION 3.20)
project(hello VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake;${CMAKE_MODULE_PATH}")
set(CMAKE_CXX_STANDARD 17)

add_executable(main src/main.cpp)
target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/include)

option(BUILD_TESTS "Build Tests" ON)
if(BUILD_TESTS)
    enable_testing()
    include(GoogleTest)
    add_subdirectory(tests)
endif()
