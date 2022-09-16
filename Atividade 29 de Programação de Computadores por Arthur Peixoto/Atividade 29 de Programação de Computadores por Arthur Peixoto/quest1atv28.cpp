#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void contagem();
int main()
{
	contagem();
	contagem();
	contagem();
}
void contagem()
{
	static int contador = 1;
	cout << contador << " chamada de função\n";
	contador++;
}

