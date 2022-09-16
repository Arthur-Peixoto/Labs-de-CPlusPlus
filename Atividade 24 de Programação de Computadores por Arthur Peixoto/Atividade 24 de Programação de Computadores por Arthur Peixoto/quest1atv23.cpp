#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
	char nome[50];
	char nome_m[50];
	int i = 0;

	cout << "Nome do arquivo: ";
	cin >> nome;

	ofstream fout;
	fout.open(nome);

	fout << "#include <iostream>\n"
		<< "using namespace std; \n"
		<< "int main()\n"
		<< "{\n"
		<< "	int num = 5;\n"
		<< "	cout << num << endl;\n"
		<< "	return 0;\n"
		<< "}" << endl;

	nome_m[0] = { '\0' };
	strcpy_s(nome_m, nome);


	while (nome_m[i] != '.')
	{
		++i;
	}
	nome_m[i] = { '\0' };

	strcat_s(nome_m, "_m.cpp");


	ofstream fout2;
	fout2.open(nome_m);

	fout2 << "//" << nome_m << endl;
	fout2 << "#define print cout\n";

	ifstream fin;
	fin.open(nome);

	char ch[80];
	fin.getline(ch, 80);

	int c = 1;
	while (!fin.eof())
	{
		if (c == 5)
		{
			char var[80];
			fout2 << "    print << num << endl; \n";
			fin.getline(var, 80);

		}
		else
		{
			fin.getline(ch, 80);
			fout2 << ch << endl;

		}
		c++;
	}

	fout.close();
	fout2.close();
	fin.close();
}