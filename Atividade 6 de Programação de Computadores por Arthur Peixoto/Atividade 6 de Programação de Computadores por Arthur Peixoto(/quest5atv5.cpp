#include <cmath>
#include <iostream>
using namespace std;

#define PI 3.14159

double calculo(double a, double b);
double A,B, angulo;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor:" << endl;
	cout << "x: ";
	cin >> A;
	cout << "y: ";
	cin >> B;
	calculo(A, B);
	cout << "O ângulo do vetor é" << angulo << " graus.";


}

double calculo(double a, double b) {
#define PI 3.14159265
	angulo = atan2(A, B) * (180 / PI);
	return angulo;
}