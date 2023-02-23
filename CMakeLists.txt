cmake_minimum_required(VERSION 3.22.0)

project(figure_project)

add_library(Parallelogram STATIC Parallelogram.cpp)
add_library(Quadrilateral STATIC Quadrilateral.cpp)
add_library(Rectrangle STATIC Rectrangle.cpp)
add_library(Rhombus STATIC Rhombus.cpp)
add_library(Square STATIC Square.cpp)
add_library(Triangle STATIC Triangle.cpp)
add_library(TriangleEquil STATIC TriangleEquil.cpp)
add_library(TriangleIsos STATIC TriangleIsos.cpp)
add_library(TriangleRight STATIC TriangleRight.cpp)

add_executable(figure_program HomeWorkCPP2.6.3.cpp)

target_link_libraries(figure_program Parallelogram Quadrilateral Rectrangle Rhombus Square Triangle TriangleEquil TriangleIsos TriangleRight)