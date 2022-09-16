#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	char vet[4][20];
	int max = 0;
	cout << "Digite 4 palavras:" << endl;
	for (int i = 0; i < 4; i++) {
		cin >> vet[i];
		max = max + strlen(vet[i]);
	}
	char * nvet = new char[max];
	strcpy(nvet, vet[0]);
	for (int i = 1; i < 4; i++) {
		strcat(nvet, " ");
		strcat(nvet, vet[i]);
	}
	cout << "Concatenando as palavras obtém-se: " << endl;
	cout << nvet;
}
