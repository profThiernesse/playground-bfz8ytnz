#include <stdio.h>
#include <stdlib.h>

<?php include("contents.php"); ?>

int main()
{
	int a;
	int *b;
	char c;
	int d;
	
	a=5;
	b=&a;
	c='b';
	
	d = ma_fct(a,b,c);
	
    return 0;
}

int ma_fct(int a, int *b, char c) {
	return a*(*b)*c;
}