#include <iostream>
using namespace std;
void (*OnClick)(void);

void CreateButton(int a, int b, void(*f)(void)) {
	cout << "Botão criado na posição " << a << "," << b << endl;
}
void Mensagem()
{
	cout << "Botão Pressionado!" << endl;
}
int main()
{
	CreateButton(10, 10, Mensagem);
	cout << "Pressionar Botão? ";
	char resposta;
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick();
	return 0;
}
