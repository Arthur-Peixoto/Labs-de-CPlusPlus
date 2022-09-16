#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("palindromos.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	
	char token[50];

	for (int u{ 0 }; u < 4; u++) {
		while (fin >> token)
		{
			bool encontrada = false;
			int j{ 0 },tam{};
			char palavra[50]{};
			tam = strlen(token);
			while (j < tam) {
				for (int i = (tam - 1); i >= 0; i--) {
					palavra[j] = token[i];
					j++;
				}
			}

			if (strcmp(token,palavra)) {
				encontrada = true;
			}
			if (!encontrada)
				cout << "A palavra \"" << palavra << "\" é um palíndromo." << endl;
			else
				cout << "A palavra \"" << palavra << "\" não é um palíndromo." << endl;
		}
	}
	fin.close();
}
