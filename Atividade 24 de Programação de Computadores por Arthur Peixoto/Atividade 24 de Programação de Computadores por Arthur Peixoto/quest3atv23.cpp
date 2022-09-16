#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;

struct Alunos {
	char nome[20];
	char horario[3];
	int turma;
	char sexo[3];
};

int main()
{
	ifstream fin;
	fin.open("Alunosreg.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}
	double opcao{};
	Alunos token[50]{};
	for (int i{ 0 }; i < 12; i++) {
		fin.getline(token[i].nome, 20);
		fin >> token[i].horario;
		fin >> token[i].turma;
		fin >> token[i].sexo;

	}
	cout << "Matutino 6a Série\n" <<
		"----------------- \n";
	for (int i{ 0 }; i < 12; i++) {
		switch (*token[i].horario)
		{
		case 'M':
			switch (token[i].turma)
			{
			case 6:
			case 'M6': 
				cout << token[i].nome << "\tM6" << endl;
				break;
			default:
				break;
			}
		}
	}
	cout << endl;
	cout << "Matutino 7a Série\n" <<
		"----------------- \n";
			for (int i{ 0 }; i < 12; i++) {
				switch (*token[i].horario)
				{
				case 'M':
					switch (token[i].turma)
					{
					case 7:

						cout << token[i].nome << "\tM7" << endl;
						break;
					default:
						break;
					}
				}
			}
			cout << endl;
			cout << "Matutino 8a Série\n" <<
				"----------------- \n";
				for (int i{ 0 }; i < 12; i++) {
					switch (*token[i].horario)
					{
					case 'M':
						switch (token[i].turma)
						{
			case 8:

				cout << token[i].nome << "\tM8" << endl;
				break;
			default:
				break;
			}
		}
	}
				cout << endl;
				cout << "Vespertino 6a Série\n" <<
					"----------------- \n";
	for (int i{ 0 }; i < 12; i++) {
	switch (*token[i].horario)
	{
		case 'T':
		switch (token[i].turma)
		{
		case 6:
		cout << token[i].nome << "\tT6" << endl;
			break;
		default:
			break;
		}
	}
}
	cout << endl;
	cout << "Vespertino 7a Série\n" <<
	"----------------- \n";
	for (int i{ 0 }; i < 12; i++) {
		switch (*token[i].horario)
		{
		case 'T':
		switch (token[i].turma)
		{
		case 7:
		cout << token[i].nome << "\tT7" << endl;
			break;
		default:
		break;
		}
	}
}
		cout << endl;
		cout << "Vespertino 8a Série\n" <<
		"----------------- \n";
		for (int i{ 0 }; i < 12; i++) {
		switch (*token[i].horario)
		{
		case 'T':
		switch (token[i].turma)
		{
		case 8:
		cout << token[i].nome << "\tT8" << endl;
			break;
		default:
			break;
		}
	}
}
		cout << endl;
		fin.close();
}

//a) criando um vetor diferente para meninos e outro para meninas. 
//b) criei dentro do registro um vetor char para registrar o sexo com apenas os caracteres F(para feminino) e M(para masculino) e os dados de sexo dentro do arquivo
//de texto,da mesma forma que separei por turma e horário, poderia separar por sexo por meio do switch. 