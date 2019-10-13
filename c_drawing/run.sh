#!/bin/sh

gcc main.c drawing.h drawing.c -lm -o drawing


echo "TECHIO> open -s /project/target/ output.html"