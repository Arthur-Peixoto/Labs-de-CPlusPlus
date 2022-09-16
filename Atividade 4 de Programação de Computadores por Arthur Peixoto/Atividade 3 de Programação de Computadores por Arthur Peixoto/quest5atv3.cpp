#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	int Hora, Minutos;
	char pv;
	cout << "Que horas são?";
	cin >> Hora >> pv >> Minutos;
	cout << "Seu relógio está atrasado." << endl;
	Hora = Hora - 1;
	cout << "agora são "<< Hora << pv << Minutos << "." << endl;
	
	return 0;
}