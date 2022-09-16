#include <iostream>
using namespace std;

void Inserir(void);
void Remover(void);
void Buscar(void);
void Sair(void);


int main()
{
   void (*func[])(void) = { Inserir, Remover, Buscar, Sair };
   cout << "Menu do Sistema\n" << endl <<
        "1) Inserir\n" <<
        "2) Remover\n" <<
        "3) Buscar\n" <<
        "4) Sair\n" << endl <<
        "Escolha : ";
   int code;
   cin >> code;
   code += 1;
   func[code]();
}

void Inserir(void) {
    cout << "Você está na função de inserir" << endl;
}
void Remover(void) {
    cout << "Você está na função de Remover" << endl;
}
void Buscar(void) {
    cout << "Você está na função de Buscarr" << endl;
}
void Sair(void){
    cout << "Você está na função de Sair" << endl;
}
