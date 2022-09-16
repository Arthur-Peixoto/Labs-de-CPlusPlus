#include <iostream>
using namespace std;

int main() {
	int vet[5];
	for (int i = 0;i < 60; i++) {
	vet[i] = 60;
	cout << vet[i] << endl;
	}
}
//o vetor é oparado até o vet[10], logo ápos isso é corrompido e o próximo valor a aparecer é um lixo qualquer
//como o vetor não ocupa muito mais espaços de memória além daqueles prederteminados, o último item foi retirado
//da memória de outro componente, podendo gerar um erro grave dentro do código