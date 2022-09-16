#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

double angulo, resultado;
int main() {
	system("chcp 1252 > nul");

	cout << "digite um ângulo: ";
	cin >> angulo;
	angulo = (angulo * PI / 180);
	resultado = sin(angulo);
	cout << "Seno = " << resultado;
}
