#include <iostream>
#include <string>
using namespace std;

int main() {
	int resultado, x, y1;
	string y;
	cout << "Entre com dois n�meros: ";
	cin >> y >> x;
	y1 = stoi(y);
	resultado = x * y1;
	cout << "A multiplica��o entre eles �: " << resultado << endl;
}