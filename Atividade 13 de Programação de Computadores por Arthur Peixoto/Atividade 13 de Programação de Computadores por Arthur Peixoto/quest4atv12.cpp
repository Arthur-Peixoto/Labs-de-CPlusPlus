#include <iostream>
using namespace std;
struct Livro {
	string Autor;
	string NomeLivro;
	int paginas;
 };

struct Jogo {
	string NomeJogo;
	string Desenvolvedor;
	int Ano;
};


int main() {
	system("chcp 1252 > nul");
	int res;
	bool continuar = true;
	Livro Livros[20]{};
	Jogo Jogos[20]{};
	while (continuar == true) {
		cout << "você gostaria de alugar um livro ou um jogo ? (digite 1 para livro e 0 para jogo)" << endl;
		cin >> res;
		int i = 0;
		if (res == 1) {
			cout << "Qual o nome do autor do livro?" << endl;
			cin >> Livros[i].Autor;
			cout << "Qual o nome do livro?" << endl;
			cin >> Livros[i].NomeLivro;
			cout << "Quantas páginas ele possue?" << endl;
			cin >> Livros[i].paginas;
			i++;
		}
		else if (res == 0) {
			cout << "Qual o nome do Jogo? " << endl;
			cin >> Jogos[i].NomeJogo;
			cout << "Qual empresa desenvolveu o jogo? " << endl;
			cin >> Jogos[i].Desenvolvedor;
			cout << "Em que ano o jogo foi lançado?" << endl;
			cin >> Jogos[i].Ano;
		}
		cout << "Gostaria de pedir mais algo emprestado? (Digite 1 para sim e 0 para não)" << endl;
		cin >> continuar;
	}
}
