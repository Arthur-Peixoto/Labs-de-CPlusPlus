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
	cout << "Quantos locais voc� quer visitar nas proximas f�rias? ";
	cin >> tam;
	Local * locall = new Local[tam];
	cout << tam << " Locais que ser�o visitados: " << endl;;
	for (int i = 0; i < tam; i++) {
		cout << "Nome: ";
		cin >> locall->nome;
		cout << "Pa�s: ";
		cin >> locall->pais;
		cout << "Continente: ";
		cin >> locall->continente;
	}
	delete[] locall;
}