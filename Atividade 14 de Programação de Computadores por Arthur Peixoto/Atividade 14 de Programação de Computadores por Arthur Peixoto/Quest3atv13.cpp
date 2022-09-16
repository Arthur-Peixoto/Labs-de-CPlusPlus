#include <iostream>
using namespace std;

struct horario {
	int hora;
	int minuto;
};

struct Data {
	int dia;
	int mes;
	int ano;
};

struct evento {
	Data dat;
	horario hor;
	char descricao[18];
};

int main() {
	evento evento1;
	evento evento2;
	cout << "Entre com 2 eventos:" << endl << "#1" << endl;
	cout << "Data: ";
	cin >> evento1.dat.dia >> evento1.dat.mes >> evento1.dat.ano; 
	cout << "Hora : ";
	cin >> evento1.hor.hora >> evento1.hor.minuto; 
	cin.get();
	cout << "Desc : ";
	cin.getline(evento1.descricao, 18);
	cout << "#2" << endl;
	cout << "Entre com 2 eventos:" << endl << "#1" << endl;
	cout << "Data: ";
	cin >> evento2.dat.dia >> evento2.dat.mes >> evento2.dat.ano;
	cout << "Hora : ";
	cin >> evento2.hor.hora >> evento2.hor.minuto;
	cin.get();
	cout << "Desc : ";
	cin.getline(evento2.descricao, 18);
	cout << "#2" << endl;
	cout << "--------------------" << endl
		<< "Eventos Cadastrados" << endl;
	cout.width(2);
	cout.fill('0');
	cout << evento1.dat.dia << "/";
	cout.width(2);
	cout.fill('0');
	cout << evento1.dat.mes << "/";
	cout.width(2);
	cout.fill('0');
	cout << evento1.dat.ano << " ";
	cout.width(2);
	cout.fill('0');
	cout << evento1.hor.hora << ":";
	cout.width(2);
	cout.fill('0');
	cout << evento1.hor.minuto << " ";
	cout << evento1.descricao << endl;
	cout.width(2);
	cout.fill('0');
	cout << evento2.dat.dia << "/";
	cout.width(2);
	cout.fill('0');
	cout << evento2.dat.mes << "/";
	cout.width(2);
	cout.fill('0');
	cout << evento2.dat.ano << " ";
	cout.width(2);
	cout.fill('0');
	cout << evento2.hor.hora << ":";
	cout.width(2);
	cout.fill('0');
	cout << evento2.hor.minuto << " ";
	cout << evento2.descricao << endl;
}
