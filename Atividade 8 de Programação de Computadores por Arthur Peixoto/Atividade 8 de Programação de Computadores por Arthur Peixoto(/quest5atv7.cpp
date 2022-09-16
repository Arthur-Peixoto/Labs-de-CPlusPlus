#include <iostream>
using namespace std;


int num;
unsigned char binario = 0;
bool ExibirBits(unsigned char X);

int main() {

	system("chcp 1252 > nul");
	cout << "Digite um valor entre 0 e 255: ";
	cin >> num;
	binario = num;
	cout << "O número " << num << " em binário é ";
	ExibirBits(binario);
}

bool ExibirBits(unsigned char X) {
	unsigned char estado = X;
	for (int x = 7; x >= 0; x--) {
		unsigned char mascara = 1 << x;
		if (estado & mascara)
			cout << "1";
		else 
			cout << "0";
	}
	return 0;
}