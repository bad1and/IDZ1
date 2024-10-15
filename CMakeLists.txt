cmake_minimum_required(VERSION 3.29)
project(LAB1 C)
set(CMAKE_C_STANDARD 17)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
add_executable(LAB1 main.c)

target_link_libraries(LAB1 ${CURSES_LIBRARIES})