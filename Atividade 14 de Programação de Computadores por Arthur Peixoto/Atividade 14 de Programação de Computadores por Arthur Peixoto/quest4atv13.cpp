#include <iostream>
using namespace std;
enum sem { SEG, TER, QUAR, QUIN, SEXTA, SAB, DOM };
int main()
{
	char semanas[7][10] =
	{
   "Swgunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado","Domingo"
	};
	for (sem ind = SEG; ind <= DOM; ind = sem(ind + 1))
		cout << semanas[ind] << endl;
	return 0;
}
