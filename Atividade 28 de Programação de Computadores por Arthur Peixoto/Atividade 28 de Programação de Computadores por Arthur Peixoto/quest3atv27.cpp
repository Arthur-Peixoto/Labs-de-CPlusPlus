#include <iostream>
using namespace std;
void (*OnClick)(void);

void CreateButton(int a, int b, void(*f)(void)) {
	cout << "Bot�o criado na posi��o " << a << "," << b << endl;
}
void Mensagem()
{
	cout << "Bot�o Pressionado!" << endl;
}
int main()
{
	CreateButton(10, 10, Mensagem);
	cout << "Pressionar Bot�o? ";
	char resposta;
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick();
	return 0;
}
