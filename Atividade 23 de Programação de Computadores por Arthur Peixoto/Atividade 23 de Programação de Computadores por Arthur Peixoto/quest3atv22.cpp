#include <iostream>
using namespace std;

struct Prato {
    char Nome[20];
    float preco;
};

int main() {
    int parm{}, mac{}, escon{};
    char escolha{}, Continuar{'S'};
    float total{};
    Prato Opcao[3]{};
    Opcao[0] = { "Parmegiana", 28.90 };
    Opcao[1] = { "Macarronada", 24.99 };
    Opcao[2] = { "Escondinho", 19.99 };
    cout << "Restaurante VDG" << endl
        << "----------------" << endl
        << "a) Parmegiana R$ 28,90/Un" << endl
        << "b) Macarronada R$ 24,99/Un" << endl
        << "c) Escondinho R$ 19,99/Un" << endl;
    cout << "Gostaria de pedir alguma coisa?(S para sim e N para Não)";
    cin >> Continuar;
    while (Continuar == 'S') {
       cout << "Faça seu pedido usando as letras (a, b, c):";
        cin >> escolha;
        switch (escolha)
        {
        case 'a':;
            parm += 1;
            break;
        case 'b':
            mac += 1;
            break;
        case 'c':
            escon += 1;
            break;
        default: cout << "Opção inválida!" << endl;
            break;
        }
        total = ((parm * 28.9) + (mac * 24.99) + (escon * 19.99));
        cout << total << endl;
        cout << "Gostaria de pedir  mais alguma coisa?(S para sim e N para Não)";
        cin >> Continuar;
    }
    cout << "Total de Parmegianas pedidas: " << parm << endl
        << "Total de Macarronadas pedidas: " << mac << endl
        << "Total de Escondidinhos pedidos: " << escon << endl
        << "Valor total a pagar " << total << endl;
}