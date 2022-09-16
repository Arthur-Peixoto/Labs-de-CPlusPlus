#include <iostream>
#include <fstream>
using namespace std;

void unidade(ifstream& is, int un, int linhas = 10)
{
	int revisao{};
	int fixacao{};
	int aprendizagem{};

	for (int i = 0; i < linhas; i++)
	{
		int temp{};
		is >> temp >> temp;
		revisao += temp;
		is >> temp;
		fixacao += temp;
		is >> temp;
		aprendizagem += temp;
	}
	cout << "---------------\n";
	cout << un << "a unidade \n";
	cout << "---------------\n";

	cout << "revisão: " << revisao << endl;
	cout << "fixação: " << fixacao << endl;
	cout << "aprendi: " << aprendizagem << endl;
	cout << "---------------\n";
	cout << "Total: " << revisao + fixacao + aprendizagem << endl << endl;
}

int main()
{
	ifstream fin;
	fin.open("stats.txt");
	unidade(fin, 1);
	unidade(fin, 2);
	unidade(fin, 3);
}