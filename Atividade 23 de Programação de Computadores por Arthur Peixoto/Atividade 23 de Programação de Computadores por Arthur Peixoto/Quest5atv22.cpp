#include <iostream>
using namespace std;


int main() {
    int escolha{};
    float a1{}, a2{}, s1{}, s2{}, m1{}, m2{}, d1{}, d2{};
    char continuar{'S'};
    cout << "Mincalculadora" << endl
        << "----------------" << endl
        << "1) Adição" << endl
        << "2) Subtração" << endl
        << "3) Multiplicação" << endl
        << "4) Divisão" << endl;
    while (continuar == 'S') {
        cout << "Escolha uma operção para ser efetuada:";
        cin >> escolha;
        switch (escolha)
        {
        case 1:  cout << "Calculadora de adição, Insira dois valores:";
            cin >> a1 >> a2;
            a1 += a2;
            cout << "Soma:" << a1 << endl;
            break;
        case 2:  cout << "Calculadora de subtração, Insira dois valores:";
            cin >> s1 >> s2;
            s1 -= s2;
            cout << "Subtração:" << s1 << endl;
            break;
        case 3:  cout << "Calculadora de multiplicação, Insira dois valores:";
            cin >> m1 >> m2;
            m1 *= m2;
            cout << "Multiplicação:" << m1 << endl;
            break;
        case 4:  cout << "Calculadora de divisão, Insira dois valores:";
            cin >> d1 >> d2;
            d1 /= d2;
            cout << "Divisão:" << d1 << endl;
            break;
        default: cout << "Opção inválida!" << endl;
        }
        cout << "Deseja realizar outra operação:(S para sim e N para não)";
        cin >> continuar;
    }
}

