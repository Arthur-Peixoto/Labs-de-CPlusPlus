#include <iostream>
#include <string>
using namespace std;

int main() {
	int resultado, x, y1;
	string y;
	cout << "Entre com dois números: ";
	cin >> y >> x;
	y1 = stoi(y);
	resultado = x * y1;
	cout << "A multiplicação entre eles é: " << resultado << endl;
}