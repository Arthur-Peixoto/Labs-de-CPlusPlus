#include <iostream>
#include <cmath>
using namespace std;

int absoluto, X;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um n�mero inteiro: ";
	cin >> X;
	if (X < 0) {
		X = X * -1;
	}
	cout << "O valor absoluto � " << X;
}