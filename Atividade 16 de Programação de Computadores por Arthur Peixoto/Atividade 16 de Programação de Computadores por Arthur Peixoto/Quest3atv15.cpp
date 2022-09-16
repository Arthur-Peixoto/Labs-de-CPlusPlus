#include <iostream>
using namespace std;
int main()
{
	int tam;
	cout << "Quantos valores deseja guardar ?";
	cin >> tam;
	int * vet = new int[tam];
	cout << "Quais os valores? ";
	for (int i = 0; i < tam; i++) {
		cin >> vet[i];
	}
	cout << "Os valores ";
	for (int i = 0; i < tam - 1; i++) {
		cout << vet[i] << ", ";
	}
	cout << vet[tam - 1] << " foram armazenados.";
}