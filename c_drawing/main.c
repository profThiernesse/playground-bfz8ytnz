#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "drawing.h"

void polygone(int, int);
void flower1(int, int);
void flower2(int, int);

int main() {
    int tour,i;

    init_drawing(1000,550);

	flower2(50,8);
	
    display_draw();
    return 0;
}

void flower1(int length, int side) {
    int i;
    for (i=1;i<=side;i++) {
        polygone(length,3);
        turn(360/side,LEFT);
    }
}

void flower2(int length, int side) {
    int i;
    for (i=1;i<=side;i++) {
        polygone(length,5);
        draw(length);
        turn(360/side,RIGHT);
    }
}

void polygone(int length, int side) {
    int i;
    for (i=0;i<side;i++) {
        draw_change_color(0,0,255);
        draw(length);
        turn(360/side,LEFT);
    }
}
