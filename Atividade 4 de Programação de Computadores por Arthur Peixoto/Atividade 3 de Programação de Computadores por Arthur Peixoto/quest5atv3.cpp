#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	int Hora, Minutos;
	char pv;
	cout << "Que horas s�o?";
	cin >> Hora >> pv >> Minutos;
	cout << "Seu rel�gio est� atrasado." << endl;
	Hora = Hora - 1;
	cout << "agora s�o "<< Hora << pv << Minutos << "." << endl;
	
	return 0;
}