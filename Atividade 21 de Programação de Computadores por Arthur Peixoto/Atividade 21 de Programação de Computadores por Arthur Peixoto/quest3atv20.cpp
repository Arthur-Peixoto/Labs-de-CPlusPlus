#include <iostream>
using namespace std;

int main() {
	string frase;
	int tam{}, cont{};
	cout << "Digite um texto (# para finalizar): " << endl;
	cin >> frase;
	frase = cin.get();
	tam = sizeof(frase);
	for (int i = 0; i <= tam;i) {
		while (frase != '#') {
		if (frase[i] == '!') {
		frase[i] = '!!';
		cont++;
		}
		else if (frase[i] == '.') {
		frase[i] = '!';
		cont++;
		}
		cout << frase[i];
		i++;
		}
	}
	cout << "Substituições: " << cont;
}