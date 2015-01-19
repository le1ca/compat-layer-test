#include "input.h"
#include "math.h"
#include "print.h"

int main(int argc, char** argv){
	int x;

	print_string("enter number: ");	
	x = read_int();
	
	print_string("input: ");
	print_int(x);
	print_string("\n");
	
	return 0;
}
