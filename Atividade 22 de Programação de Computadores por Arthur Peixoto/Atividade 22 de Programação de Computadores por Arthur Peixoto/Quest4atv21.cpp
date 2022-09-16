#include <iostream>
using namespace std;

int main() {
    int cont{}, ult{1};
    unsigned long long soma{};
    while (cont < 4000000) {
        cont += ult;
        soma = cont;
        if (soma % 2 == 0) {
            cout << soma << " ";
        }
        ult += cont;
    }
}