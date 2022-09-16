#include <iostream>
#include <cmath>
using namespace std;

double IMC(double x, double y);
double altura, massa,resultado;

int main() {
	system("chcp 1252 > nul");
	cout << "Índice de Massa Corporal (IMC)" << endl;
	cout << "------------------------" << endl;
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;
	IMC(altura, massa);
	cout << "IMC: " << resultado;
}

double IMC(double x, double y) {

	resultado = massa / pow(altura,2);
	return resultado;
}

