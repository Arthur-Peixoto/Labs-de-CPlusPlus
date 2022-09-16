#include <iostream>
using namespace std;

struct ASCII {
	char ch{};
	unsigned int x{(unsigned int)ch};
};

ASCII * fun(char a, int b);

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um caractere ASCII: ";
	char ch;
	cin >> ch;
	int x = (int)ch;
	ASCII * endereco = new ASCII;
	endereco = fun(ch, x);
	cout << endereco << endl;
	cout << "código ASCII " << endereco->x << " da letra " << endereco->ch ;
	delete endereco;
}

ASCII * fun(char a, int b){
	ASCII * y = new ASCII;
	y->ch = a;
	y->x = b;
	return y;
	delete y;
}