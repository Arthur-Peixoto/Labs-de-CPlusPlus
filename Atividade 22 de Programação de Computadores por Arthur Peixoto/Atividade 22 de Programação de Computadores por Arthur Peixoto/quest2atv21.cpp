#include <iostream>
using namespace std;

int main() {
    int x, soma{}, cont{};
        cout << "Insira um número para saber se ele é primo ou não" << endl;
        cin >> x;
        for(cont = 1; cont < x; cont++) {
            if ((x % cont) == 0) {
                soma += 1;
            }
        }
        if (soma == 1)
        {
            cout << "O número é primo";
        }
        else {
            cout << "O número não é primo";
        }
}
