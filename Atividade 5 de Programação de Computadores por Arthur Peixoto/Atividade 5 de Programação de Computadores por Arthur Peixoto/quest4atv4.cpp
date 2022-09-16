#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

double raio, altura, Raio, Volume;
int main() {
	system("chcp 1252 > nul");
	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;
	cout << "Entre com o raio da base: ";
	cin >> raio;
	cout << "Entre com a altura: ";
	cin >> altura;
	Raio = pow(raio, 2);
	Volume = (PI * (Raio * altura));
	cout.precision(7);
	cout << "O volume do cilindro é " << Volume;
}