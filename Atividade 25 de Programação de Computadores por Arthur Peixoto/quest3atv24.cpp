#include <fstream>
using namespace std;
#include <iostream>

union Senha {
	char alfanumerica[20];
	char numerica[20];
};

void Exibir();
void Novo();

int main()
{
	char escolha;

	do
	{
		cout << "[N]ovo senha (sobrescreve o anterior)\n";
		cout << "[E]xibe senha (atual)\n";
		cout << "[S]air\n";
		cout << "-------------------\n";
		cout << "Opção: [ ]\b\b";

		cin >> escolha;

		switch (escolha)
		{
		case 'N':
		case 'n':
			Novo();
			break;
		case 'E':
		case 'e':
			Exibir();
			break;
		}
		cout << endl;
	} while (tolower(escolha) != 's');

}

void Exibir()
{

	Senha senha;
	ifstream fin;
	fin.open("senha.txt", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		fin.read((char*)&senha, sizeof(Senha));
		fin.close();
	int tipo;
	cout << "Qual seu tipo de senha? (digite 1 para senha alfanúmerica e 2 para númerica) ";
	cin >> tipo;
	if (tipo == 1) {
		cout << "Senha alfanumerica: " << senha.alfanumerica << endl;
	}
	else if(tipo == 2) {
		cout << "Senha númerica: " << senha.numerica << endl;
	}
	}
}

void Novo() {

	cin.get();
	Senha senha;
	int tipo;
	cout << "Qual seu tipo de senha? (digite 1 para senha alfanúmerica e 2 para númerica) ";
	cin >> tipo;
	if (tipo == 1) {
		cout << "Senha alfanumerica: ";
		cin.getline(senha.alfanumerica, 20);
	}
	else if(tipo == 2) {
		cout << "Senha numerica: ";
		cin.getline(senha.numerica, 20);
	}

	ofstream fout;
	fout.open("senha.txt", ios_base::out | ios_base::binary);
	fout.write((char*)&senha, sizeof(Senha));
	fout.close();
}