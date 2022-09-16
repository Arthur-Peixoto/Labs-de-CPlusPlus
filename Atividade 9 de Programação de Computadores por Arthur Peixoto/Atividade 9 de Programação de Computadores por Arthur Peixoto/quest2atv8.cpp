#include <iostream>
#include <cmath>
using namespace std;

double m, v;

int main() {
	system("chcp 1252 > nul");
	int e = 200;
	int s = 1;
	m = (1 / pow(2, 2)) + (1 / pow(2, 3)) + (1 / pow(2, 7)) + (1 / pow(2, 9));
	v = s * (2 * (e - 127)) * (1 + m);
	cout << v;
}