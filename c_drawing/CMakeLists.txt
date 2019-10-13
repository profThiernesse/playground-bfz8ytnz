cmake_minimum_required (VERSION 2.6)
project (drawing)
build_command(-lm)
build_command(-std=gnu99)
add_executable(drawing main.c drawing.h drawing.c)

