#include <iostream>
using namespace std;

int main() {
	int x, y, soma{};
	cout << "Digite um n�mero inteiro: ";
	cin >> x;
	cout << "Digite outro n�mero inteiro: ";
	cin >> y;
	if (y < x) {
		for (int i = (y + 1); i < x; i++) {
			soma += i;
		}
		cout << " A soma de todos os valores entre " << x << " e " << y << " : " << soma;
	}
	else if (x < y) {
		for (int z = (x + 1); z < y; z++) {
			soma += z;
		}
		cout << " A soma de todos os valores entre " << y << " e " << x << " : " << soma;
	}
	else {
		cout << "os n�meros s�o iguais";
	}
}