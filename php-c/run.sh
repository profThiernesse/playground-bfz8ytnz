#!/bin/sh
php canvas.php > prg.c

gcc prg.c -o prg
./prg