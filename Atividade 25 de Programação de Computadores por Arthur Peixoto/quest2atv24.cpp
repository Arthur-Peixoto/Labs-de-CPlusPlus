#include <fstream>
using namespace std;
#include <iostream>

struct jogador
{
	char nome[20];
	int eliminacoes;
	int mortes;
	float KD;
	int partidas;
};

void Atualizar();
void Exibir();
void Novo();

int main()
{
	char escolha;

	do
	{
		cout << "[N]ovo soldado (sobrescreve o anterior)\n";
		cout << "[A]tualiza soldado (com os dados da última partida)\n";
		cout << "[E]xibe soldado (atual)\n";
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
		case 'A':
		case 'a':
			Atualizar();
			break;
		case 'E':
		case 'e':
			Exibir();
			break;
		}
		cout << endl;
	} while (tolower(escolha) != 's');

}

void Atualizar()
{
	cin.get();
	jogador jog;
	cout << "Quantidade de eliminações: ";
	cin >> jog.eliminacoes;
	cout << "Quantidade de mortes: ";
	cin >> jog.mortes;
	cout << "Média de eliminações por partida: ";
	cin >> jog.KD;
	cout << "Quantidade de partidas: ";
	cin >> jog.partidas;

	ofstream fout;
	fout.open("mensagem.txt", ios_base::out | ios_base::binary);
	fout.write((char*)&jog, sizeof(jogador));
	fout.close();
}

void Exibir()
{
	
	jogador jog;
	ifstream fin;
	fin.open("mensagem.txt", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		fin.read((char*)&jog, sizeof(jogador));
		fin.close();

		cout << "Nome do jogador: ";
		cin.getline(jog.nome, 20);
		cout << "Quantidade de eliminações: " << jog.eliminacoes << endl;
		cout << "Quantidade de mortes: " << jog.mortes << endl;
		cout << "Média de eliminações por partida: " << jog.KD << endl;
		cout << "Quantidade de partidas: " << jog.partidas << endl;
	}
}

void Novo() {

	cin.get();
	jogador jog;
	cout << "Nome do jogador: ";
	cin.getline(jog.nome, 20);
	cout << "Quantidade de eliminações: ";
	cin >> jog.eliminacoes;
	cout << "Quantidade de mortes: ";
	cin >> jog.mortes;
	cout << "Média de eliminações por partida: ";
	cin >> jog.KD;
	cout << "Quantidade de partidas: ";
	cin >> jog.partidas;

	ofstream fout;
	fout.open("mensagem.txt", ios_base::out | ios_base::binary);
	fout.write((char*)&jog, sizeof(jogador));
	fout.close();
}