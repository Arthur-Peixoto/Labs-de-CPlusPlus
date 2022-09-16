#include <iostream>
using namespace std;

int main() {
    float dist, preco, valor;
    cout << "Qual a distância da viagem? ";
    cin >> dist;
    if (dist <= 200)
        preco = 0, 5;
    else if (dist <= 400)
        preco = 0.4;
    else
        preco = 0.3;
    
    valor = dist * preco;
    cout << valor;
}