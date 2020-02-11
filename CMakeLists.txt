cmake_minimum_required(VERSION 3.10.2)
project(uip)

IF(UNIX)
set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
ENDIF()

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH
        ${CMAKE_PREFIX_PATH}
        "C:\\DevLibraries\\SDL2-2.0.10"
        )

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

set(SOURCE_FILES
        src/Renderers/Renderer.cpp
        src/Renderers/CommandLineRenderer/CommandLineRenderer.cpp
        src/Renderers/SDL2Renderer/SDL2Renderer.cpp)

set(INCLUDE_FOLDERS
        src/Renderers
        src/Renderers/CommandLineRenderer
        src/Renderers/SDL2Renderer
        src/Helpers)


include_directories(${INCLUDE_FOLDERS})
add_executable(uip src/main.cpp ${SOURCE_FILES})

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(uip ${SDL2_LIBRARY})