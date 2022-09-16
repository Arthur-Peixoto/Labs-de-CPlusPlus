#include <iostream>
using namespace std;
long long calculo(long long, long long);
int main()
{
	long long resultado = 200530LL * 420800;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530LL, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}