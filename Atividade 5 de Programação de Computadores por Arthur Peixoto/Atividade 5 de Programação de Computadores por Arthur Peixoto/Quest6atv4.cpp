#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inicializar();
void ligar();
void verificar();
void ativar();

int main() {

	system("chcp 1252 > nul");

	inicializar();

	cout << "Inicialização concluída" << endl;
	srand(time(NULL));
	int num = rand();
	/*cout << num << endl;*/
	if (num > 16384) {
		cout << "Sistema em funcionamento";
	}
	else {
		cout << "Falha na inicialização";
	}
}

void inicializar() {
	cout << "Inicializando sistema : " << endl;

	ligar();
	verificar();
	ativar();
}

void ligar() {
	cout << "- Ligando dispositivos" << endl;
}

void verificar() {
	cout << "- Verificando integridade" << endl;
}

void ativar() {
	cout << "- Ativando processos" << endl;
}