#include <iostream>
using namespace std;

int main() {
	int vet[5];
	for (int i = 0;i < 60; i++) {
	vet[i] = 60;
	cout << vet[i] << endl;
	}
}
//o vetor � oparado at� o vet[10], logo �pos isso � corrompido e o pr�ximo valor a aparecer � um lixo qualquer
//como o vetor n�o ocupa muito mais espa�os de mem�ria al�m daqueles prederteminados, o �ltimo item foi retirado
//da mem�ria de outro componente, podendo gerar um erro grave dentro do c�digo