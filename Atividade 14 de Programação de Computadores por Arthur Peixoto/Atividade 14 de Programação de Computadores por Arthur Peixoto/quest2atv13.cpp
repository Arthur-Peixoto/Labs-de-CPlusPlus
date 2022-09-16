#include <iostream>
using namespace std;

union jogador
{
	char nome[25]; 
	int numero;
};
struct gol
{
	jogador jog;
	int hora, min; 
};

int main() {
	jogador joga[3];
	char ch;
	gol gols;
	for (int i = 0; i <= 2;i++) {
		cout << "Gol: ";
		cin >> joga[i].nome >> gols.hora >> ch >> gols.min;
		//cout << "Gol: "<< joga[i].nome << " " << gols.hora << ch << gols.min << endl;
	}
}