#include <iostream>
using namespace std;

int main() {
	int lim = 1, soma = 0, soma1 = 0,soma2= 0, lim1 = 1;
	for (int x = 1; x < 100; x++) {
		soma += x;
		x++;
	}
	cout << soma << endl;
	while (lim < 100) {
		soma1 += lim;
		lim++;
		lim++;
	}
	cout << soma1 << endl;
	do
		if ((lim1 % 2) != 0) {
			soma2 += lim1;
			lim1++;
		}
		else
		lim1++;
		while (lim1 < 100);
	cout << soma2;

}