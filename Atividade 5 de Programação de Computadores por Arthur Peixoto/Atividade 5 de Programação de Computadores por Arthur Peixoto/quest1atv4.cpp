#include <iostream>
#include <cmath>
using namespace std;

double Qx, Qy, Px, Py, Y, X, Distancia;

int main() {
	cout << "Ponto P: " << endl;
	cin >> Px >> Py;
	cout << "Ponto Q: " << endl;
	cin >> Qx >> Qy;
	Y = (Qy - Py);
	Y = pow(Y, 2);
	X = (Qx - Px);
	X = pow(X, 2);
	Distancia = sqrt(X + Y);
	cout.precision(6);
	cout << "A Distancia entre P e Q é: " << Distancia;

	return 0;
}