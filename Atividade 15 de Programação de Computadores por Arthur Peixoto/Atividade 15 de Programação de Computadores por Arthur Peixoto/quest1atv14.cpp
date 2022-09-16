#include <iostream>
using namespace std;

struct Tigela {
	string estado;
	string alimento;
};

void Fome(Tigela * ptr) {
	ptr->estado = "Vazio";
}

int main() {
	Tigela antes = { "Cheia", "Sopa" };
	cout << antes.estado << endl;
	Fome(&antes);
	cout << antes.estado;
}
