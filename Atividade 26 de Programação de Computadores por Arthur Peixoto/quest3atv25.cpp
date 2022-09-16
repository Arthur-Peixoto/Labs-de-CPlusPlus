using namespace std;
#include <iostream>

void openspace(double vet[], int tam);
void locate(double vet[], int tam);

int main()
{
	double valores[10];
	int posicao{};
	cout << "insira 10 valores: ";
	for (int i = 0; i < 10; i++) {
		cin >> valores[i];
	}

	int tamanho = 10;
	
	locate(valores, tamanho);
	for (int i = 0; i < 10; i++) {
		cout << valores[i] << " ";
	}

	cout << endl << "insira uma posição que gostaria de modificar: ";
	cin >> posicao;
	openspace(valores, posicao);
	for (int i = 0; i < 10; i++) {
		cout << valores[i] << " ";
	}
	return 0;
}


void openspace(double vet[], int tam)
{
	int x = tam;
	for (int i = (x+1); i < 10; ++i) {
		vet[i] = vet[x];
		x++;
	}
	cout << endl;
}

void locate(double vet[], int tam)
{
	for (int i{0}; i < 10; ++i){
		for (int j = tam - 1; j > i; --j)
		{
			if (vet[j] < vet[i]) {
				double guardar = vet[i];
				vet[i] = vet[j];
				vet[j] = guardar;
			}
		}
	}

}