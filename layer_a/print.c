#include <stdio.h>
#include "compat/print.h"

void c_print_string(char* s){
	printf("%s", s);
}

void c_print_int(int n){
	printf("%d", n);
}

void c_print_float(float f){
	printf("%f", f);
}
