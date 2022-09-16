#include <iostream>
using namespace std;

double pao, pastel, total, spao, spastel;

int main() {
	system("chcp 1252 > nul");
	cout << "Pães& Cia" << endl;
	cout << "Quantos pães ? ";
	cin >> pao;
	spao = pao * 0.3;
	cout << "Quantos pastéis ? ";
	cin >> pastel;
	spastel = pastel * 0.25;
	total = spao + spastel;
	cout << "O total das compras é R$" << total;
}