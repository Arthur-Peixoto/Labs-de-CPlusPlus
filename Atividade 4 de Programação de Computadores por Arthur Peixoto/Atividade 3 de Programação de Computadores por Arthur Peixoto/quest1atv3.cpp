#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	float Resultado, preco, cigarro;
	int tempo;

	cout << "A quantos anos voc� fuma?";
	cin >> tempo;
	cout << "Quantos cigarros voc� fuma por dia?";
	cin >> cigarro; 
	cout << "Qual o pre�o m�dio de uma carteira de cigarros?";
	cin >> preco;
	Resultado = ((cigarro/20)*preco) * (365 * tempo);
	cout << "Voc� gastou at� agora " << Resultado <<" com cigarros.";
	
	return 0;
}