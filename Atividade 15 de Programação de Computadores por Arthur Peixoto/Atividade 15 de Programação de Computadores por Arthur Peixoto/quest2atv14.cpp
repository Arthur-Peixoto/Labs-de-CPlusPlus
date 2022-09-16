#include <iostream>
using namespace std;

void MostrarHorario();

struct Horario
{
	int hora;
	int min;
};

void MostrarHorario(Horario* prt)
{
	cout.width(2);
	cout.fill('0');
	cout << prt->hora;
	cout << ":";
	cout.width(2);
	cout.fill('0');
	cout << prt->min;
	cout << endl;
};

int main() {
	cout << "Que horas são?  ";
	Horario atual = {9, 50};
	MostrarHorario(&atual);
	char ch;
	cout << "Seu relógio está atrasado, o horário correto é  ";
	cin >> atual.hora >> ch >> atual.min;
	cout << ".";
	MostrarHorario(&atual);
}

