cmake_minimum_required(VERSION 3.18.0)
project(FPS VERSION 0.0.1)
# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED True)
# find_package(GLUT REQUIRED)
find_package(sqlite3 CONFIG REQUIRED)

add_executable(FPS main.cpp)
target_link_libraries(FPS PRIVATE sqlite3 )

# install(TARGETS FPS DESTINATION bin)
