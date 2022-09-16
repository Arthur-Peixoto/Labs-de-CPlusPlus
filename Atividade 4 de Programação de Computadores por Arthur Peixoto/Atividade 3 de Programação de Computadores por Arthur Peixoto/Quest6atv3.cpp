#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float a, b, h, V, Ab;
	cout << "qual o tamanho do comprimento do prisma retangular? (em centímetros)" << endl;
	cin >> a;
	cout << "qual o tamanho da largura do prisma retangular? (em centímetros)" << endl;
	cin >> b;
	Ab = a * b;
	cout << "Área da base: " << Ab << endl;
	cout << "qual o tamanho da altura do prisma retangular? (em centímetros)" << endl;
	cin >> h;
	V = Ab * h;
	cout << "Volume do prima: " << V << endl;;
	
	return 0;
}