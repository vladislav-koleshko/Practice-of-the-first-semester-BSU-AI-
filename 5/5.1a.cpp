#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <math.h>   

double func(double x) {
	double P = M_PI;
	double e = M_E;
	double result = pow(log(1 + x), 2) + pow(cos(P * x), 3);
	result = pow(result, sin(x));
	result += pow(e, pow(x, 2)) + cos(pow(e, x)) + sqrt(1 / x);
	result = pow(result, 1 / x);
	return result;
}


int main() {
	int res = func(5);
	std::cout << res;
	return 0;
}
