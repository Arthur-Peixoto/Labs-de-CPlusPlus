#include <iostream>
using namespace std;

int main() {
    float preco{};
    int cod;
    cout << "Qual o preço do produto pedido?";
    cin >> preco;
    cout << "Qual o código do seu produto?";
    cin >> cod;
    switch (cod)
    {
    case 1:
    case 2:cout << "Código de origem do sul" << endl;
        break;
     case 3:cout << "Código de origem do Norte" << endl;
        break;
    case 4:cout << "Código de origem do Centro-Oeste" << endl;
        break;
    case 5:
    case 6:cout << "Código de origem do Nordeste" << endl;
        break;
    case 7:
    case 8:
    case 9:cout << "Código de origem do Sudeste" << endl;
        break;
    default: 
        cout << "Código inválido!" << endl;
        break;
    }
}