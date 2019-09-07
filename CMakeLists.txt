cmake_minimum_required(VERSION 3.14)
project(uip)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES Renderers/Renderer.cpp Renderers/CommandLineRenderer/CommandLineRenderer.cpp)

add_executable(uip main.cpp ${SOURCE_FILES})