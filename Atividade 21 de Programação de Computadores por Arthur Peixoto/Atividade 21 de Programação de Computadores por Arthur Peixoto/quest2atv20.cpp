#include <iostream>
using namespace std;

int main() {
    int vet[10]{}, cont{}, som{};
        cout << "As últimas 10 velocidades registradas:" << endl;
        for (int j = 0; j < 10; ++j){
    
            cin >> vet[j]; 
        }
        for (int i{}; i < 10; i++) {
            if (vet[i] > 80) {
                int sub{};
                cout << vet[i] << "  Km/h excede o limite = multa de R$";
                sub = vet[i] - 80;
                sub *= 8;
                cout << sub;
                cout << endl;
                cont++;
                som += sub;
            }
        }
        cout << cont << " carros foram multados em um valor total de R$" << som << ".";
    }
