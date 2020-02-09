cmake_minimum_required(VERSION 3.5.1)
project(uip)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(SOURCE_FILES
        Renderers/Renderer.cpp
        Renderers/CommandLineRenderer/CommandLineRenderer.cpp)

set(INCLUDE_FOLDERS
        Renderers
        Renderers/CommandLineRenderer Helpers)

include_directories(${INCLUDE_FOLDERS})
add_executable(uip main.cpp ${SOURCE_FILES})

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
target_link_libraries(uip ${SDL2_LIBRARIES})