#include <cmath>
#include <iostream>
using namespace std;

double angulo(double x, double y);
double calculo(double a, double b);

double calculo(double a, double b) {
#define PI 3.14159265
	double vetor1;
	vetor1 = atan2(b, a) * (180 /PI);
	return vetor1;
}

double angulo(double x,double y) {
	double A, B, vetor;
	A = pow(x, 2);
	B = pow(y, 2);
	vetor = sqrt(A + B);

	return vetor;
}