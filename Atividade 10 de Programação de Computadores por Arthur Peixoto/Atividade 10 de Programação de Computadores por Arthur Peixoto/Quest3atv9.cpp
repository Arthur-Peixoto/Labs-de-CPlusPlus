#include <iostream>
using namespace std;

double x, decimal; 
int num;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um n�mero real: ";
	cin >> x;
	num = x;
	decimal = x - num;
	cout << "A parte inteira: " << num << endl;
	cout << "A parte fracion�ria: " << decimal;
}