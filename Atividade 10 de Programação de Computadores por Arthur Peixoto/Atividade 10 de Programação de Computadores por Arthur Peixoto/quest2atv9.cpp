#include <iostream>
using namespace std;

int x, y, quociente, resto;

int main() {

	system("chcp 1252 > nul");
	cout << "Digite dois n�meros inteiros:  ";
	cin >> x >> y; 
	quociente = x / y;
	resto = x % y;
	cout << "O quociente " << x << "/" << y << " � " << quociente << endl;
	cout << "O resto da divis�o " << x << "/" << y << " � " << resto;
}