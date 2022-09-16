#include <iostream>
using namespace std;

struct Login {
	char nome[20];
	char senha[20];
};

int main() {
	char nom[20], senh[20];
	int x = 1;
	Login admin{"Arthur","Vascovaisubir"};
	cout << "Insira seu nome e sua senha: ";
	cin >> nom >> senh;
	for (int i = 0; i < strlen(nom) - 1; i++) {
		if (nom[i] != admin.nome[i]){
			x = 0;
		}
	}
	for (int i = 0; i < strlen(senh) - 1; i++) {
		if (senh[i] != admin.senha[i]) {
			x = 0;
		}
	}
	if (x == 1) {
		cout << "Acesso liberado";
	}
	else if (x == 0) {
		cout << "Login/Senha incorretos";
	}
}
