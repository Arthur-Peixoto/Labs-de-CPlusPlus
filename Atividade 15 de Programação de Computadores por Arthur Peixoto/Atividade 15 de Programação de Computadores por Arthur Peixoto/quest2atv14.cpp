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
	cout << "Que horas s�o?  ";
	Horario atual = {9, 50};
	MostrarHorario(&atual);
	char ch;
	cout << "Seu rel�gio est� atrasado, o hor�rio correto �  ";
	cin >> atual.hora >> ch >> atual.min;
	cout << ".";
	MostrarHorario(&atual);
}

