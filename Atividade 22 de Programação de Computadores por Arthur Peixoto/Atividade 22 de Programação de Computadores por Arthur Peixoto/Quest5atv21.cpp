#include <iostream>
using namespace std;


int main() {
    unsigned long long cont{ 1 }, soma{}, j{}, i{1};
    while (cont != 10001) {
            for (j = 1; i >= j; j++) {
                if (i % j == 0) {
                    soma += 1;
                }
            }
            if (soma <= 2) {
                cont += 1;
            }
            j = 0;
            soma = 0;
            i++;
    }
    cout << i << endl;
    cout << cont;
}
