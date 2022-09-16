#include <iostream>
using namespace std;

enum tipoo { JPG = 1 , PNG, BMP };

struct Imagem {
	string nome;
	int altura;
	int largura;
	tipoo tipo;
};
Imagem img;

void Detalhes(Imagem a);

int main()
{
	Imagem img ={"backup.png", 1920, 1080, PNG};
	Detalhes(img);
}

void Detalhes(Imagem a)
{
	if (a.tipo == 1)
	cout << "A imagem" << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato JPG.";
	else if (a.tipo == 2)
	cout << "A imagem" << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato PNG.";
	else if (a.tipo == 3)
	cout << "A imagem" << a.nome << " com tamanho " << a.altura << "x" << a.largura << " tem formato BMP.";
}
