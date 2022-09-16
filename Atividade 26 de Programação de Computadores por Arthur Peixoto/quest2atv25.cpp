#include <iostream>
#include <fstream>
using namespace std;
struct Numeros
{
	int posMenor;
	int posMaior;
	int menor;
	int maior;
};

Numeros comp(int[], const int);

int main() {

	const int Tam = 100;
	int vet[Tam];

	char nome[20];

	cout << "Arquivo: ";
	cin >> nome;

	ofstream fout;
	fout.open(nome, ios_base::out);
	for (int i = 0; i < Tam; i++)
	{
		fout << i << " ";
	}
	fout.close();

	ifstream fin;
	fin.open(nome);


	for (int i = 0; i < Tam; i++)
	{
		fin >> vet[i];
	}

	Numeros numComp = comp(vet, Tam);

	cout << "A posi��o " << numComp.posMenor << " cont�m o menor n�mero(" << numComp.menor << ")\n";
	cout << "A posi��o " << numComp.posMaior << " cont�m o maior n�mero(" << numComp.maior << ")\n";
}

Numeros comp(int vet[], const int Tam) {
	Numeros num = { 0, 0, vet[0] , vet[0] };


	for (int i = 0; i < Tam; i++)
	{
		if (num.maior < vet[i])
		{
			num.maior = vet[i];
			num.posMaior = i;
		}
		if (num.menor > vet[i])
		{
			num.menor = vet[i];
			num.posMenor = i;
		}
	}

	return num;

}