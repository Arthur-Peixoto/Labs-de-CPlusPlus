#include <iostream>
using namespace std;

int main() {
	string senha = "vascomengo123";
	string x;
	cout << "Digite a senha: ";
	cin >> x;
	if (x == senha) {
		cout << "Senha correta";
	}
	else {
		cout << "Senha incorreta";
	}
}