#include <iostream>
using namespace std;

int main() {
	char tabela[16][16]{}, ch;
	int x = 0, colunain, linhain, colunafim, linhafim;
	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 16; j++) {
			tabela[i][j] = x++;
		}
	}
	cout << "Entre com as coordenadas da regi�o de interesse:" << endl << " De: ";
	cin >> ch >> colunain >> ch >> linhain >> ch;
	cout << "At�: ";
	cin >> ch >> colunafim >> ch >> linhafim >> ch;
	for (int i= colunain; i <= colunafim; i++) {
		for (int j= linhain; j <=  linhafim; j++) {
			cout << tabela[j][i] << " ";
		}
		cout << endl;
	}

}