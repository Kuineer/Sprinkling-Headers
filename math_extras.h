#ifndef math_extras
#define math_extras

#include <math.h>

/*
(1): Means that you must compile the code with an additional "-lm" flag, that means the code snippet uses <math.h>.
*/

//nroot: Calculates "n"th of root of "a" using inverse exponentiation with n. (1)
float nroot_float(float a, double, n) {
	return powf(a, 1 / n);
}

double nroot_double(double a, double n) {
	return pow(a, 1 / n);
}

//mean: Calculates the arithmetic average of the number set "s".
float mean_float(float* s) {
	float result = 0;

	int size = sizeof(s) / sizeof(s[0]);
	for (int i = 0; i < size; i++) {
		result += s[i];
	}

	return result / size;
}

double mean_double(double* s) {
	double result = 0;

	int size = sizeof(s) / sizeof(s[0]);
	for (int i = 0; i < size; i++) {
		result += s[i];
	}

	return result / size;
}

#endif
