#include <iostream>
using namespace std;

int sessentaparazero(int x);
int hora, minutos, nhora, nminutos, fhora, fminutos;
char carac;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite o horário de partida(HH:MM) : ";
	cin >> hora >> carac >> minutos;
	sessentaparazero(minutos);
	cout << "Digite o horário de chegada(HH : MM) : ";
	cin >> nhora >> carac >> nminutos;
	sessentaparazero(nminutos);
	if (nminutos < minutos) {
		nhora = nhora - 1;
	}
	fhora = nhora - hora;
	fminutos = minutos - nminutos;
	cout << "O tempo total de viagem foi " << fhora << " horas e " << fminutos << "min.";
}

int sessentaparazero(int x) {
	if (x == 00) {
		x = 60;
	}
	return x;
}