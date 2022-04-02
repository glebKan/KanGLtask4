#include "hw1.h"
#include <cmath>
#include <iostream>
double vozn(double a, double b)
{
	double n = 0;
	if (a >= b) {
		n = pow(a - b, 1.0 / 3);
	}
	else {
		n = (a * a) + (a - b) / (sin(a * b));
	}
	return n;
}
double vozm(double a, double b, double n) {
	double m = 0;
	if (n < b) {
		m = ((n + a) / (-1 * b)) + sqrt(sin(a) * sin(a) - cos(n));
	}
	else if (n > b) {
		m = pow(b, 3.0) + n * pow(a, 2.0);
	}
	else if (n == b) {
		m = b * b + (sin(n * a) / cos(n * a));
	}
	return m;
}