#include <iostream>
using namespace std;


int main() {
    bool teste{};
    unsigned long long cont{}, j{}, i{1};
    while (teste != true) {
        for (j = 1; j <= 20; j++) {
            if (i % j == 0) {
                cont += 1;
            }
        }
        if (cont == 20) {
            teste = true;
        }
        else {
            cont = 0;
        }
            j = 0;
            i++;
        }
    cout << i;
}