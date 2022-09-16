#include <iostream>
using namespace std;
struct par { int x; int y; };
par& calcular(int, int, par&);
int main()
{
	par um = {};
	int num,num2;
	cout << "Digite um par de valores: ";
	cin >> num >> num2;
	calcular(num, num2, um);
	cout << um.x << " " << um.y;
}
par& calcular(int num, int num2, par& refPar)
{
	refPar.x = num + num2;
	refPar.y = num * num2;
	return refPar;
}