#include <iostream>
#include <cmath>
#include "hw1.h"
using namespace std;
int main() {
	setlocale(0, "rus");
	double a = 4.8, b = -7.9;
	double m, n;
	cout << "Значение a = " << a << endl;
	cout << "Значение b = " << b << endl;
	n = vozn(a, b);
	cout << "Значение n = " << n << endl;
	m = vozm(a, b, n);
	cout << "Значение m = " << m;
}