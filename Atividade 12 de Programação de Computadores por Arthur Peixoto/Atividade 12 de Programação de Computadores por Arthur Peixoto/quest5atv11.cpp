#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Digite seu nome e sobrenome: ";
	string nome, sobrenome;
	cin >> nome >> sobrenome;
	cout << "Bom dia senhor, " << sobrenome << ". Ou devo cham�-lo de " << nome << "?";
}