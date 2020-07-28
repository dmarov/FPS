cmake_minimum_required(VERSION 3.18.0)

project(FPS VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(FPS main.cpp)
configure_file(main.h.in main.h)
target_include_directories(FPS PUBLIC
    "${PROJECT_BINARY_DIR}"
)
