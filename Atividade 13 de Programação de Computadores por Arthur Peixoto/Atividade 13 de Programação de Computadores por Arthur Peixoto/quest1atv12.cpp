#include <iostream>
using namespace std;

struct contabancaria {
	char nomedocliente[40];
	float saldo;
};
contabancaria usuario1;

int main() {
	float x;
	usuario1.saldo = 0;
	cin >> usuario1.nomedocliente;
	cout << "Conta de " << usuario1.nomedocliente << " Você possue o saldo de " << usuario1.saldo << endl;
	cout << "Quanto você deseja depositar" << endl;
	cin >> x;
	usuario1.saldo = x;
	cout << "Conta de " << usuario1.nomedocliente << " Você possue o saldo de " << usuario1.saldo << endl;
}