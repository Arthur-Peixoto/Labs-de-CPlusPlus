#include <iostream>
using namespace std;

int main() {
	int * pont = new int{100};
	cout <<  "Conte�do armazenado: " << *pont << endl;
	delete pont;

	pont = new int;
	cout << "Digite novo valor para esse bloco de mem�ria: ";
	cin >> *pont;
}

