#include <iostream>
using namespace std;

struct Local {
	string nome;
	string pais;
	string continente;

};
int main() {
	system("chcp 1252 > nul");
	int tam;
	cout << "Quantos locais você quer visitar nas proximas férias? ";
	cin >> tam;
	Local * locall = new Local[tam];
	cout << tam << " Locais que serão visitados: " << endl;;
	for (int i = 0; i < tam; i++) {
		cout << "Nome: ";
		cin >> locall->nome;
		cout << "País: ";
		cin >> locall->pais;
		cout << "Continente: ";
		cin >> locall->continente;
	}
	delete[] locall;
}