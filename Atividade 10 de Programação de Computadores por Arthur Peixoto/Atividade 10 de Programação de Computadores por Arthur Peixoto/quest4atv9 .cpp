#include <iostream>
using namespace std;


int distancia, metro, km;

int main() {

	system("chcp 1252 > nul");
	cout << "Entre com a dist�ncia em metros: ";
	cin >> distancia;
	km = distancia / 1000;
	metro = distancia - (km * 1000);
	cout << distancia << " metros equivalem a " << km << " quil�metros e " << metro << " metros.";
}