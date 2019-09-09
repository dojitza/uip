cmake_minimum_required(VERSION 3.14)
project(uip)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES Renderers/Renderer.cpp Renderers/CommandLineRenderer/CommandLineRenderer.cpp)
set(INCLUDE_FOLDERS Renderers Renderers/CommandLineRenderer Helpers)

include_directories(${INCLUDE_FOLDERS})
add_executable(uip main.cpp ${SOURCE_FILES})