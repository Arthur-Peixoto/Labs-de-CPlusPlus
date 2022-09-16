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
    cout << "Voc� est� na fun��o de inserir" << endl;
}
void Remover(void) {
    cout << "Voc� est� na fun��o de Remover" << endl;
}
void Buscar(void) {
    cout << "Voc� est� na fun��o de Buscarr" << endl;
}
void Sair(void){
    cout << "Voc� est� na fun��o de Sair" << endl;
}
