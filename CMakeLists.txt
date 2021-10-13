cmake_minimum_required(VERSION 3.20)
project(tetris)

set(CMAKE_CXX_STANDARD 14)

# Set nonstandard include and library locations.
include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib/SDL2/x64)



# Specify the executable and how to link it.
add_executable(tetris main.cpp include/Tetris.h Tetris.cpp include/shapes.h tetromino.cpp include/tetromino.h)
target_link_libraries(tetris SDL2.lib SDL2main.lib)