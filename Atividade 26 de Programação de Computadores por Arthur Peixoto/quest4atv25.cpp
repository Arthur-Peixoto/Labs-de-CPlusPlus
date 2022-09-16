using namespace std;
#include <iostream>

void operacao(int* vetres,int* vetum,int* vetdois, int taman, int tamanum, int tamandois);

int main()
{
	int valores[4]{ 1,2,3,4 }, numeros[4]{ 5,6,7,8 };
	int tamum = sizeof(valores);
	int tamdois = sizeof(numeros);
	int tam = tamum + tamdois;
	int* vetor = new int[tam];
	operacao(vetor,valores,numeros, tam, tamdois, tamum);

	for (int i = 0; i < tam; i++) {
		cout  << vetor[i] << endl;
	}

	delete[]vetor;
	
}

void operacao(int* vetres, int* vetum, int* vetdois, int taman, int tamanum, int tamandois)
{

	for (int i = 0; i < tamanum; i++) {
		vetres[i] = vetum[i];
	}
	for (int i = 0; i < tamandois; i++) {
		vetres[i+tamanum] = vetdois[i];
	}

}
