#include <iostream>
using namespace std;

int main() {
    int soma{};
    int mat[3][12]{};
    const char** vet = new const char* [3];
    for (int i = 0; i < 3; ++i)
    {
        cout << "Digite o número de livros vendidos no " << i << "° ano:";
        for (int j = 0; j < 12; ++j){
            vet[i] = new const char[j];
            const char * vet[j] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
            cout << *vet[j] << ": ";
            cin >> vet[i][j];
            soma += vet[i][j];   
        }
        cout << endl;
    }
    delete[] vet;
}