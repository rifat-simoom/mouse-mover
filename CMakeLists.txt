cmake_minimum_required(VERSION 3.10)  # Use a valid CMake version
project(mouse_mover C)

set(CMAKE_C_STANDARD 11)

find_package(X11 REQUIRED)  # Find X11 library

add_executable(mouse_mover main.c mouse_mover.c)

target_link_libraries(mouse_mover X11)  # Link X11 for mouse movement
