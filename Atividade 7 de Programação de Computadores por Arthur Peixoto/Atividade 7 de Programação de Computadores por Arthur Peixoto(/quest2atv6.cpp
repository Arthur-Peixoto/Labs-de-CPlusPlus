#include <iostream>
using namespace std;

double pao, pastel, total, spao, spastel;

int main() {
	system("chcp 1252 > nul");
	cout << "P�es& Cia" << endl;
	cout << "Quantos p�es ? ";
	cin >> pao;
	spao = pao * 0.3;
	cout << "Quantos past�is ? ";
	cin >> pastel;
	spastel = pastel * 0.25;
	total = spao + spastel;
	cout << "O total das compras � R$" << total;
}