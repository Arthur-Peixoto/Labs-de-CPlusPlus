#include <iostream>
#include <cmath>
using namespace std;

double X, Y, Media;

int main() {
	system("chcp 1252 > nul");

	cout << "Digite um valor inteiro: ";
	cin >> X;
	cout << "Digite outro valor inteiro: ";
	cin >> Y;
	Media = (X + Y) / 2;
	cout << "A média dos números é " << Media;
}

