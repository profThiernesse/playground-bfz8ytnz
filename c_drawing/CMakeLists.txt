cmake_minimum_required (VERSION 2.6)
project (drawing)
add_library(math.h)
add_executable(paper main.c drawing.h drawing.c -lm)

