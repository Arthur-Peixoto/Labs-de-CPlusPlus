#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int i = 0;
	char frase[100];
	cout << "Digite um texto: ";
	cin.getline(frase, 100);
	while (frase[i] != '@') {
		cout << frase[i];
		i++;
	}
}