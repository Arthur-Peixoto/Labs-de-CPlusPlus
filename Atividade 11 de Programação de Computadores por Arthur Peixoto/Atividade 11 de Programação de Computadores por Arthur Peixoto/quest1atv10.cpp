#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	int vet[5] = { 1,2,3,4,5 };
	int n, a;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;
	cout << "---------------------" << endl;
	cout << "Alterar posição: ";
	cin >> n;
	n = n - 1;
	cout << "Novo valor: ";
	cin >> a;
	cout << "---------------------" << endl;
	vet[n] = a;
	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4] << endl;

}