#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	cout << "O que você deseja abrir? Escreva (notepad) para abrir o noto de blocas, (calc) para a Calculadora ou (mspaint) para abrir o Microsoft Paint" << endl;
	cin >> Resposta;
	if (Resposta == "notepad")
	{
		system("notepad");
	}
	else {
		if (Resposta == "calc")
		{
			system("calc");
		}
		else {
			if (Resposta == "mspaint")
			{
				system("mspaint");
			}
		}
		return 0;
	}
}
