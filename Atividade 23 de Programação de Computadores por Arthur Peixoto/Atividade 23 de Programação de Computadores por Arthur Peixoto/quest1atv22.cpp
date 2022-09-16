#include <iostream>
using namespace std;

int main() {
    char escolha{};
    float qalface{}, qbeter{}, qcebola{}, pqalf{ 1.25 }, pqbet{ 0.65 }, pqceb{ 0.9 }, talf{}, tceb{}, tbet{}, total{}, desc{ 0.05 }, descontado{}, frete{}, qtot{};
    bool continuar{ true };
    cout << "Supermercado ABC" << endl
        << "----------------" << endl
        << "a) Alface R$ 1,25/Kg" << endl
        << "b) Beterraba R$ 0,60/Kg" << endl
        << "c) Cenoura R$ 0,90/Kg" << endl;
    while (continuar == true) {
        cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar:";
        cin >> escolha;
        switch (escolha)
        {
        case 'a':  cout << "Quantos quilos de alface você gostaria?";
            cin >> qalface;
            break;
        case 'b':  cout << "Quantos quilos de beterraba você gostaria?";
            cin >> qbeter;
            break;
        case 'c':  cout << "Quantos quilos de cebola você gostaria?";
            cin >> qcebola;
            break;
        case 's':
            continuar = false;
            break;
        default: cout << "Opção inválida!" << endl;
        }
    }
    tceb = pqceb * qcebola;
    talf = pqalf * qalface;
    tbet = pqbet * qbeter;
    cout << "Produto\t\tPreço/Kg\tPedido(Kg)\tTotal Parcial" << endl
        << "---------- -------- - ---------- - -------------- -" << endl
        << "Alface\tR$ 1,25/Kg\t" << qalface << " Kg\tR$ " << talf << endl
        << "Beterraba\tR$ 0,65/Kg\t" << qbeter << " Kg\tR$ " << tbet << endl
        << "Cenoura\tR$ 0,90/Kg\t" << qcebola << " Kg\tR$ " << tceb << endl
        << "-------------------------------------------------- - " << endl;
    total = tceb + talf + tbet;
    if (total >= 100) {
        descontado = total;
        descontado *= desc;
        total -= descontado;
    }
    qtot = qcebola + qalface + qbeter;
    if (qtot <= 5){
        frete = 3.5;
    }
    else if (qtot >= 5 && qtot <= 20){
        frete = 10;
    }
    else if (qtot >= 20) {
        frete = 8 + ((qtot - 20) * 0, 1);
    }

    cout << "Total do pedido: \t\tR$ " << total << endl <<
        "Descontos: \t\tR$ " << descontado << endl <<
        "Custo de entrega : \t\tR$ " << frete << endl <<
        "-------------------------------------------------- -" << endl;
        total += frete;
        cout << "Total a pagar : R$ \t\t" << total;
}