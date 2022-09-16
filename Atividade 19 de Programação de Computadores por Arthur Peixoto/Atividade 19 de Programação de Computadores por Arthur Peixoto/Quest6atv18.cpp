#include <iostream>
using namespace std;

struct Pessoa{
	char nome[15];
	int idade;
	char sex[10];
};

int main() {
	Pessoa * RePessoas = new Pessoa[100];
	cout << "Registro de pessoas" << endl;
	do {
		cout << "digite nome : ";
		cin >> RePessoas->nome;
		cout << "Digite idade : ";
		cin >> RePessoas->idade;
		cout << "Insira seu sexo: ";
		cin >> RePessoas->sex;
	}
	while (strcmp(RePessoas->nome, "fim") != 0);
	delete []RePessoas;
}
