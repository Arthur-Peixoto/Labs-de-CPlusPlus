#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	float Peso, corrida, ciclismo, natacao;
	float calorias;
	cout << "Digite seu peso em quilos:(Em quilos) " << endl;
	cin >> Peso;
	cout << "Digite o tempo de corrida:(em minutos)" << endl;
	cin >> corrida;
	cout << "Digite o tempo de ciclismo:(em minutos)" << endl;
	cin >> ciclismo;
	cout << "Digite o tempo de natação:(em minutos)" << endl;  
	cin >> natacao;
	calorias = (7 * Peso * (corrida / 60)) + (7 * Peso *(ciclismo / 60)) + (8 * Peso *(natacao / 60));
	cout << "Você gastou um total de "<< calorias << " calorias." << endl;
		return 0;
}
