cmake_minimum_required(VERSION 3.15)
project(chessgameproject  VERSION 1.0 DESCRIPTION "A simmple probably slow chess game")

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_subdirectory(src)
add_subdirectory(tests)
