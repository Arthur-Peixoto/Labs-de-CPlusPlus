#include <iostream>
using namespace std;

int soma(int a, int b);

int main() {
	int ini, fim;
	cout << "Digite o in�cio e o fim do intervalo: ";
	cin >> ini >> fim;
	int som = soma(ini, fim);
	cout << "Soma dos n�meros entre o intervalo: " << endl;
	cout << som;
}

int soma(int a, int b) {
	int somaa = 0;
	for (int x = a; x < b; x++) {
		somaa += x;
	}
	return somaa;
}