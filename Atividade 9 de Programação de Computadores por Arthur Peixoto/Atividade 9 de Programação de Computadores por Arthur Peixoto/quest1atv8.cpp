#include <iostream>
#include <cmath>
using namespace std;

float a, b, b2, c, yum, y2, delta;

int main() {
	system("chcp 1252 > nul");
	cout << "Insira seu A: ";
	cin >> a;
	cout << "Insira seu B: ";
	cin >> b;
	cout << "Insira seu C: ";
	cin >> c;
	b2 = pow(b, 2);
	delta = b2 - (4 * a * c);
	delta = sqrt(delta);
	yum = ((b * -1) - delta) / 2 * a;
	y2 = ((b * -1) + delta) / 2 * a;
	if (delta > 0) {
		if (yum != 0) {
			cout << "a raiz real da equação é y1 = " << y2 << endl;
		}
		else if (y2 != 0); {
			cout << "a raiz real da equação é y2 = " << yum;
		}
	}
	else if (delta == 0) {
		cout << "as raízes reais da equação são y1 = " << yum << "e y2 = " << y2;
	}
	else
		cout << "A equação não possue raízes reais.";
}