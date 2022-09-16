#include <cmath>
#include <iostream>
using namespace std;

double X,Y,vetor;
double angulo(double x, double y);

int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor:" << endl;
	cout << "X: ";
	cin >> X;
	cout << "Y: ";
	cin >> Y;
	angulo(X, Y);
	cout << "O tamanho do vetor é " << vetor;
}
double angulo(double x,double y) {
	x = pow(X, 2);
	y = pow(Y, 2);
	vetor = sqrt(x + y);

	return vetor;
}