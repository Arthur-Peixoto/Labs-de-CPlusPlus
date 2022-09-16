#include <iostream>
#include <cstring>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int x = 0;
	int y = 0;
	char frase[50]{}, texto[50]{}, invertido[50]{};
	cin.getline(frase, 50);
	for (int i = 0; i < (strlen(frase) - 1); i++) {
		for (int a = i; frase[a] != ' '; a) {
			texto[a] = frase[a];
		}
	}
	for (int i = 0; i < (int)(strlen(texto)); i++) {
		cout << texto[i] << endl;
	}
	for (int i = (int)((strlen(texto))); i >= 0; i--) {
		invertido[y] = texto[i];
		y++;
	}
	for (int i = 0; i < (int)(strlen(texto)); i++) {
		cout << invertido[i] << endl;
	}
}
