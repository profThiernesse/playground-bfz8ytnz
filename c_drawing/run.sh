#!/bin/sh

gcc paper main.c drawing.h drawing.c -lm -o drawing

//make && ./drawing
echo "TECHIO> open -s /project/target/ output.html"