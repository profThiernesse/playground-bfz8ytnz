#!/bin/sh
php $1 > prg.c

gcc prg.c -o prg
./prg