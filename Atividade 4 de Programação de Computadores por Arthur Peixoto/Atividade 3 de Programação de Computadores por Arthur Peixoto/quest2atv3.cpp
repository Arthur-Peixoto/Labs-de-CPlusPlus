#include <iostream>
using namespace std;

int main()
{
	int N, Resultado;
	int X = 0;
	cout << "Insira um valor para ver sua tabuada" << endl;
	cin >> N;
	cout << "Tabuada de " << N << endl;
	cout << "-------" << endl;

	while (X <= 10)
	{
	Resultado = N * X;
	cout << N << " * " << X << " = " << Resultado << endl;
	X++;
	}
    return 0;
}
