#include "quest6atv5part1.cpp"
#include "quest6atv5part2.h"
#include <iostream>
using namespace std;

int numx, numy;
double res1, res2;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite as coordenadas do vetor:" << endl;
	cout << "X: ";
	cin >> numx;
	cout << "Y: ";
	cin >> numy;
	res1 = angulo(numx, numy);
	res2 = calculo(numx, numy);
	cout << "Coordenadas polares do vetor:" << endl;
	cout << "(" << res1 << "  ,  " << res2 << ")";
}