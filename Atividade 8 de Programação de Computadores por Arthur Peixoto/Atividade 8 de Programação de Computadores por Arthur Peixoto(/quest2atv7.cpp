#include <iostream>
using namespace std;

char decodificar(char x);
char codificar(char a);

char ch;
char num2, num1;
bool resposta;

int main() {
	cout << "Digite um caractere: ";
	cin >> ch;
	cout << "Gostaria de codificar ou decodificar esse caractere?(0 = codificar e 1 = decodificar) ";
	cin >> resposta;
	if (resposta == true) {
		num1 = codificar(ch);
		cout << num1 << endl;
	}
	else {
		num2 = decodificar(ch);
		cout << num2 << endl;
	}
}

char codificar(char a) {
	ch = ch + 3;
	return ch;
}

char decodificar(char x) {
	ch = ch - 3;
	return ch;
}
