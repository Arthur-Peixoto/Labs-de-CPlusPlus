#include <iostream>
using namespace std;

int main() {
	int x;
	x = 1;
	int y = 1;

	return 0;
}
/*O exemplo com x � mais utilizado por fator de organiza��o ou maior acessibilidade em caso de futura altera��o */
/*do c�digo.O exemplo com y � menos utilizado pela maior simplicidade do caso anterior, al�m de maior dificuldade*/
/*em situa��oes de mudan�a de valor da vari�vel. Caso ambos sejam declarados globalmente, podem ser modificados em*/
/*escopos locais ou de maneira global, mas caso sejam declaradas dentro de um escopo local, n�o podem ser utilizadas*/
/*foras dele.*/