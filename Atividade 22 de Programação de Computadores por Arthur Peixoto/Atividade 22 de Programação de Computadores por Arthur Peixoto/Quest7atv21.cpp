#include <iostream>
using namespace std;

struct Nadador {
    char Nome[20];
    int idade;
    char categoria[5][12]{ "Infantil", "Juvenil", "Adolescente", "Adulto", "Sênior" };
};

int main() {
    int i{};
    Nadador Arthur;
    cout << "Qual o nome do nadador ?";
    cin.getline(Arthur.Nome, 20);
    cout << "Qual a idade do nadador ?";
    cin >> Arthur.idade;
    int idade = Arthur.idade;
    if ((idade >= 5) && (idade <= 7)) {
        i =0;
    }
    if ((idade >= 8) && (idade <= 10)) {
        i = 1;
    }
    if ((idade >= 11) && (idade <= 15)) {
        i = 2;
    }
    if ((idade >= 16) && (idade <= 30)) {
        i = 3;
    }
    if (idade >= 31) {
        i = 4;
    }
    cout << Arthur.Nome << " " << Arthur.idade << " " << Arthur.categoria[i];
}