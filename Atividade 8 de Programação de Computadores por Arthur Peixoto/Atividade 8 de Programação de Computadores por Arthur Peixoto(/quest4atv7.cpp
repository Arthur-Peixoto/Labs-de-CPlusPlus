#include <iostream>
using namespace std;
int main()
{
	system("chcp 1252 > nul");
	unsigned int estado;
	unsigned mascara = 983040;
	cout << "Digite um valor inteiro: ";
	cin >> estado;

	estado = estado & mascara;
	estado = estado >> 16;
	cout << "Os 16 bits mais altos desse valor correspondem ao número " << estado << endl;
}
