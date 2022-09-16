#include <iostream>
using namespace std;

char decodificar(void);
char codificar(void);

char ch;
char num2, num1;

int main() {

	num1 = codificar();
	cout << num1 << endl;
	num2 = decodificar();
	cout << num2 << endl;
}

char decodificar(void) {
	cout << "Digite um caractere: ";
	cin >> ch;
	ch = ch - 3;
	return ch;
}

char codificar(void) {
	cout << "Digite um caractere: ";
	cin >> ch;
	ch = ch + 3;
	return ch;
}