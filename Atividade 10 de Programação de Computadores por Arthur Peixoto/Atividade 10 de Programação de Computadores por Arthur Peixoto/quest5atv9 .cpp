#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	double valor = 245.795;
	int inteiro = (int) valor;
	valor = valor * 100;
	inteiro = inteiro * 100;
	cout << valor << endl;
	cout << inteiro << endl;
}	
/*
Com a mudan�a de tipo da var��vel, houve uma perda dos digitos decimais,mesmo uma sendo 
atribu�da a outra como seu valor, as duas n�o possuem o mesmo valor e o resultado de suas
multiplica��es ser�o difenrentes.
*/