#include <iostream>
using namespace std;

struct contabancaria {
	char nomedocliente[40];
	float saldo;
};
contabancaria Usuario1;

struct Palavra {
	string pt;
	string esp;
	string eng;
};
Palavra dicionario;

void exibir(Palavra);
void exibir1(contabancaria);

int main() {
	Palavra dicionario = { "Água", "Agua", "Water" };
	exibir(dicionario);	
	contabancaria Usuario1 = { "Arthur", 3000 };
	exibir1(Usuario1);		
}

void exibir(Palavra a) {
	cout << a.pt;
	cout << " ";
	cout << a.esp;
	cout << " ";
	cout << a.eng;
	cout << " ";
}
void exibir1(contabancaria a) {
	cout << a.nomedocliente;
	cout << " ";
	cout << a.saldo;
}