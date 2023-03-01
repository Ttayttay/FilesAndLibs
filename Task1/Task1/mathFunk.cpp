#include "mathFunk.h"
#include <iostream>

double add(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}

double mul(double x, double y) {
	return x * y;
}

double div(double x, double y) {
	if (y == 0) {
		std::cout << "Íà íîëü äåëèòü ÍÅËÜÇß!\n\n";
		return 0;
	}
	return x / y;
}
double power(double x, double y) {
	int count = 0;
	double res = 1;
	bool neg = false;
	
	if (y == 1) {
		return 1;
	}
	
	if (y < 0) {
		y =  -y;
		neg = true;
	}

	while (y--) res *= x;

	if (neg) {
		return 1 / res;
	}
	else {
		return res;
	}
}