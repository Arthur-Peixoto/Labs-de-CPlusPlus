#include <iostream>
using namespace std;

int x, y, quociente, resto;

int main() {

	system("chcp 1252 > nul");
	cout << "Digite dois números inteiros:  ";
	cin >> x >> y; 
	quociente = x / y;
	resto = x % y;
	cout << "O quociente " << x << "/" << y << " é " << quociente << endl;
	cout << "O resto da divisão " << x << "/" << y << " é " << resto;
}