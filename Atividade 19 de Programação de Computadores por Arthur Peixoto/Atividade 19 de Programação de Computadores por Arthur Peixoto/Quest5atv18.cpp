#include <iostream>
using namespace std;

int main() {
		int idade = 0, x = 0, maior = 0, menor = 0;
		cout << "Digite as idades do grupo: ";
		do {
			cin >> idade;
			if (idade >= 18) {
				x += 1;
			}
			if (idade < menor)
				menor = idade;
			if (idade > maior)
				maior = idade;
		} while (idade != 0);
		cout << "Nesse grupo" << x << "pessoas são maiores de idade.";
		cout << "O mais velho tem " << menor << "anos, e o mais novo " << maior << " anos.";
}