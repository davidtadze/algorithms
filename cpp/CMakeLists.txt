cmake_minimum_required(VERSION 3.18.3)

project(algorithms)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Enable some warnings. See https://stackoverflow.com/a/14235055.
if (CMAKE_COMPILER_IS_GNUCC)
   set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
endif (CMAKE_COMPILER_IS_GNUCC)
if (MSVC)
   set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} /W4")
endif (MSVC)

file(GLOB SOURCES "src/*.cpp")
add_executable(algorithms ${SOURCES})
