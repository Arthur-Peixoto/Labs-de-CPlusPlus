#include <iostream>
using namespace std;

int main() {
	float peso;
	peso = 30;
	cout << peso;
	delete peso;
}

//As instru��es n�o retornam um c�digo v�lido pois n�o � poss�vel deletar uma vari�vel que n�o seja do tipo new
