#include <iostream>
using namespace std;

void aumento();


double salario, nsalario;
int main() {
	system("chcp 1252 > nul");
	cout << "Sal�rio atual: R$";
	cin >> salario;
	aumento();
	cout << "Sal�rio ajustado para R$" << nsalario;
}

void aumento() {
	nsalario = salario + (salario * 0.15);
}