#include <iostream>
using namespace std;


int comparar(const int* ini, const int* fim);

int main()
{
	int somaa{};
	const int limite{ 1 };
	int zeroum[11]{ 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };

	somaa = comparar(zeroum, &limite);
	cout << somaa;
	return 0;
}


int comparar(const int* ini, const int* fim)
{
	int soma{}, valor {*fim};
	for (; *ini < 11; ++ini) {
		if (*ini == valor) {
		soma += 1;
		}
	}
	return soma;
}