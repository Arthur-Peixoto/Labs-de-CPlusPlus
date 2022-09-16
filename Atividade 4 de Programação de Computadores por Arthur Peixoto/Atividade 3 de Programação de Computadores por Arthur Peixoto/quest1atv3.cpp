#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	float Resultado, preco, cigarro;
	int tempo;

	cout << "A quantos anos você fuma?";
	cin >> tempo;
	cout << "Quantos cigarros você fuma por dia?";
	cin >> cigarro; 
	cout << "Qual o preço médio de uma carteira de cigarros?";
	cin >> preco;
	Resultado = ((cigarro/20)*preco) * (365 * tempo);
	cout << "Você gastou até agora " << Resultado <<" com cigarros.";
	
	return 0;
}