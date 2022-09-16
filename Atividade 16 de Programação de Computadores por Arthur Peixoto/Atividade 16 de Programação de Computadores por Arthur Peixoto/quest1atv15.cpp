#include <iostream>
using namespace std;

int main() {
	float peso;
	peso = 30;
	cout << peso;
	delete peso;
}

//As instruções não retornam um código válido pois não é possível deletar uma variável que não seja do tipo new
