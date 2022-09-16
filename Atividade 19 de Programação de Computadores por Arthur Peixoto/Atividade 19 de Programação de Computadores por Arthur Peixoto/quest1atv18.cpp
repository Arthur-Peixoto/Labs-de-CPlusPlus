#include <iostream>
using namespace std;

int main() {
	int i = 0;
	while (++i < 4)
		cout << "Oi! ";
	do
		cout << "Tchau! ";
	while (i++ <= 8);
}

//receberá o i valendo 1, e assim repetira a mensagem "Oi!" enquanto o i for menor que 4,ou seja 4 vezes,
//após isso repetira a mensagem "Tchau! " até o i ser maior que 8, completando 5 repetições.