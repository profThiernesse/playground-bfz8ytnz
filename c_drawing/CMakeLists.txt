cmake_minimum_required (VERSION 2.6)
project (drawing)
LDFLAGS := -lm
add_executable(paper main.c drawing.h drawing.c)

