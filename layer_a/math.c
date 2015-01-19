#include <math.h>
#include "compat/math.h"

float c_log(float a, float b){
	return logf(a) / logf(b);
}

float c_log_10(float a){
	return c_log(a, 10);
}

float c_log_2(float a){
	return c_log(a, 2);
}
