#include <iostream>
using namespace std;
enum sem { SEG, TER, QUAR, QUIN, SEXTA, SAB, DOM };
int main()
{
	char semanas[7][10] =
	{
   "Swgunda", "Ter�a", "Quarta", "Quinta", "Sexta", "S�bado","Domingo"
	};
	for (sem ind = SEG; ind <= DOM; ind = sem(ind + 1))
		cout << semanas[ind] << endl;
	return 0;
}
