#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num, soma = 0,x = 100;
	for (int i = 0; i < 100; i++) {
		num = pow(i, 2);
		soma += num;
	}
	cout << soma << endl;
	for (int i = 0; i < 100; i++) {
		num = pow(i, 2);
		(soma += num);
	}
	cout << soma;
}