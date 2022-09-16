#define _CRT_SECURE_NO_WARNINGS 
using namespace std;
#include <iostream>
#include <cstring>

struct Charset
{
	char* str; // ponteiro para vetor dinâmico
	int tam; // tamanho do vetors
};
Charset carac;
void Atribuir(Charset *);
void Exibir(Charset *);
int Retornartam(Charset *);
void Concatenar(Charset *);



int main()
{
	strcpy(carac.str, "Vasco");
	carac.tam = strlen(carac.str);

	Atribuir(&carac);
	Exibir(&carac);
	int retorna;
	retorna = Retornartam(&carac);
	Concatenar(&carac);
}

void Atribuir(Charset * st) {
	const char* stringg = "Vasco X";
	*st->str = *stringg;
}
void Exibir(Charset * st) {
	cout << st->str;
}
int Retornartam(Charset * st) {
	int x;
	x = st->tam;
	return x;
}
void Concatenar(Charset *st) {
	const char* strin = "Flamengo";
	strcat(st->str, strin);
}