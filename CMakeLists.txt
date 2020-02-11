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

add_executable(uip src/main.cpp)

find_package(SDL2 REQUIRED)

include_directories(${SDL2_INCLUDE_DIR})
target_link_libraries(uip ${SDL2_LIBRARY})