cmake_minimum_required(VERSION 3.14.5)
project(uip)


set(CMAKE_CXX_STANDARD 11)

set(CMAKE_PREFIX_PATH
        ${CMAKE_PREFIX_PATH}
        "C:\\DevLibraries\\SDL2-2.0.10"
        )

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(SOURCE_FILES
        Renderers/Renderer.cpp
        Renderers/CommandLineRenderer/CommandLineRenderer.cpp
        Renderers/SDL2Renderer/SDL2Renderer.cpp)

set(INCLUDE_FOLDERS
        Renderers
        Renderers/CommandLineRenderer
        Renderers/SDL2Renderer
        Helpers)


include_directories(${INCLUDE_FOLDERS})
add_executable(uip main.cpp ${SOURCE_FILES})

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(uip ${SDL2_LIBRARY})