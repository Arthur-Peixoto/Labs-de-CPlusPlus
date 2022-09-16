#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int i, x;
	char jgdtm[20];
	cout << "Digite jogador/time:";
	cin >> jgdtm;
	for (i = 0; jgdtm[i] != '/'; i++) {
		cout << jgdtm[i];
	}
	x = i + 1;
	cout << endl << "O nome do jogador tem "<< i <<" Letras" << endl;
	cout << "O seu time é o ";
	for (i = 0; jgdtm[i + x]; i++) {
		cout << jgdtm[i + x];
	}
	cout << ".";
}