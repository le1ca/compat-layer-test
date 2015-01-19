#include <stdio.h>
#include "compat/input.h"

int c_read_int(){
	int n;
	scanf("%d", &n);
	return n;
}

float c_read_float(){
	float f;
	scanf("%f", &f);
	return f;
}
