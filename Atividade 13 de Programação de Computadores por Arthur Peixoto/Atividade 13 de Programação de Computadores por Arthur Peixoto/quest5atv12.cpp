#include <iostream>
using namespace std;

struct dataa {
	int dia;
	int mes;
	int ano;
};

dataa evento;

struct horario {
	int hora;
	int minutos;
	int segundos;
};

horario evento1;

int main() {
	char ch;
	cout << "Digite o dia do seu evento: (em formato XX/XX/XXXX)" << endl;
	cin >> evento.dia >> ch >> evento.mes >> ch >> evento.ano;
	cout << "Digite a hora do seu evento: (em formato XX:XX:XX)" << endl;
	cin >> evento1.hora >> ch >> evento1.minutos >> ch >> evento1.segundos;
	string local;
	cout << "Digite o local do evento" << endl;
	cin >> local;
	cout << "Evento marcado para o Dia: " << evento.dia << "/" << evento.mes << "/" << evento.ano <<
	" As " << evento1.hora << ":" << evento1.minutos << ":" << evento1.segundos << " em " << local;
}