#include <iostream>
using namespace std;

int main() {
    char frase[100]{};
    int tam{}, a{}, e{}, i{}, o{}, u{}, x{};
    bool continuar{ true };
    cout << "Digite uma frase (@ para finalizar):" << endl;
    cin.getline(frase, 100);
    tam = sizeof(frase);
    while (frase[x] != '@')
    {
        switch (frase[x])
        {
        case 'a':
            a += 1;
            break;
        case 'e': 
            e += 1;
            break;
        case 'i': 
            i += 1;
            break;
        case 'o':
            o += 1;
            break;
        case 'u':
            u += 1;
            break;
        default:
            break;
        }
        x++;
    }
    cout << "a:" << a << endl <<
        "e:" << e << endl <<
        "i:" << i << endl <<
        "o:" << o << endl <<
        "u:" << u << endl;
}