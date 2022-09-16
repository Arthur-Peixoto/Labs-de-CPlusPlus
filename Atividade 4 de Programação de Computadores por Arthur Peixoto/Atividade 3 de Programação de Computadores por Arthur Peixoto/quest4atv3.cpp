#include <iostream>
using namespace std;

int main()
{
	float custofabrica, imposto, distribuidor, preco;
	cout << "Qual o custo de fábrica do automóvel? " << endl;
	cin >> custofabrica;
	imposto = (custofabrica * 0.27) ;
	distribuidor = (custofabrica * 0.45);
	preco = imposto + distribuidor + custofabrica;
	cout << preco;
    return 0;
}