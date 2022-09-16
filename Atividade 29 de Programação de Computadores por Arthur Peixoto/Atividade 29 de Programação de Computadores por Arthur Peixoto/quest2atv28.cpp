#include <iostream>
using namespace std;
struct Caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};
void exibir(const Caixa&);
void modificar(Caixa&);
int main()
{
	Caixa um = { "Cachaça",10,20,30 };
	exibir(um);
	modificar(um);
	exibir(um);

}
void exibir(const Caixa& ref)
{
	cout << "Marca: " << ref.marca << "\nAltura: " << ref.altura << "\nLargura: " << ref.largura << "\nComprimento: " << ref.comprimento
		<< "\nVolume: " << ref.volume << "\n";
}
void modificar(Caixa& ref)
{
	ref.volume = ref.altura * ref.comprimento * ref.largura;
}