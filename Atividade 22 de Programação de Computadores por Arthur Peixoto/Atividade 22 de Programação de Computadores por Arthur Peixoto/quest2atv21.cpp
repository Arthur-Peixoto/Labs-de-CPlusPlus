#include <iostream>
using namespace std;

int main() {
    int x, soma{}, cont{};
        cout << "Insira um n�mero para saber se ele � primo ou n�o" << endl;
        cin >> x;
        for(cont = 1; cont < x; cont++) {
            if ((x % cont) == 0) {
                soma += 1;
            }
        }
        if (soma == 1)
        {
            cout << "O n�mero � primo";
        }
        else {
            cout << "O n�mero n�o � primo";
        }
}
