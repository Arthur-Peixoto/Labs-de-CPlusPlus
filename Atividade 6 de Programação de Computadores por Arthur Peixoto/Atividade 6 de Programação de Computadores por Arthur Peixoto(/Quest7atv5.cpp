#include <cmath>
#include <iostream>
using namespace std;

double quadrado(double x);
double cubo(double y);

double X, A, B, C;

int main() {
	cout << "Digite um valor: ";
	cin >> X;
	A = quadrado(X);
	cout << "Quadrado = " << A << endl;
	B = cubo(X);
	cout << "Cubo = " << B << endl;
	C = cubo(quadrado(X));
	cout << " Cubo do quadrado = " << C << endl;
}

double cubo(double y) {
	double res;
	res = pow(y, 3);
	return res;
}

double quadrado(double x) {
	double res;
	res = pow(x, 2);
	return res;
}