#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;

int main() {
	system("chcp 1252 > nul");
	cout << "\t| |A |B |C |" << endl;
	a = 1 + 2;
	cout << "Linha 1 |1|" << a << " |" << b << " |" << c << " |" << endl;
	b = 1 + a;
	cout << "Linha 2 |2|" << a << " |" << b << " |" << c << " |" << endl;
	c = 1 % 5;
	cout << "Linha 3 |3|" << a << " |" << b << " |" << c << " |" << endl;
	a = a + 2;
	cout << "Linha 4 |4|" << a << " |" << b << " |" << c << " |" << endl;
	b = a - c;
	cout << "Linha 5 |5|" << a << " |" << b << " |" << c << " |" << endl;
	b = 5 * c / 2;
	cout << "Linha 6 |6|" << a << " |" << b << " |" << c << " |" << endl;
}