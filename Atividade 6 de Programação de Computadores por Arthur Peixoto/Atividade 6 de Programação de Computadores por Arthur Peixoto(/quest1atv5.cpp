#include <iostream>
using namespace std;

int main() {
	int x;
	x = 1;
	int y = 1;

	return 0;
}
/*O exemplo com x é mais utilizado por fator de organização ou maior acessibilidade em caso de futura alteração */
/*do código.O exemplo com y é menos utilizado pela maior simplicidade do caso anterior, além de maior dificuldade*/
/*em situaçãoes de mudança de valor da variável. Caso ambos sejam declarados globalmente, podem ser modificados em*/
/*escopos locais ou de maneira global, mas caso sejam declaradas dentro de um escopo local, não podem ser utilizadas*/
/*foras dele.*/