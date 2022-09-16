#include <iostream>
using namespace std;

int main() {
	int * pont = new int{100};
	cout <<  "Conteúdo armazenado: " << *pont << endl;
	delete pont;

	pont = new int;
	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *pont;
}

