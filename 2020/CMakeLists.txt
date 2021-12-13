cmake_minimum_required (VERSION 3.12)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif ()

project (AdventOfCode2020)

add_compile_definitions(ROOT_DIR="${CMAKE_CURRENT_LIST_DIR}")

add_subdirectory(day1)
