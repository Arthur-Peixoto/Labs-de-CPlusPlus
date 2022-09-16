#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << left; cout.width(10); cout << "Produto";  cout << right; cout.width(6); cout << "Preço/KG "; cout.width(8); cout << "Pedido(KG)"; cout.width(14); cout << "Total Parcial" << endl;
	cout << left; cout.width(10); cout << "-------";  cout << right; cout.width(6); cout << "-------"; cout.width(11); cout << "---------"; cout.width(14); cout << "-----------" << endl;
	cout << left; cout.width(10); cout << "Alface";  cout << right; cout.width(6); cout << "1.25/KG";   cout.width(8); cout << "3.2KG"; cout.width(12); cout << "R$ 4,00" << endl;
	cout << left; cout.width(10); cout << "Beterraba";  cout << right; cout.width(6); cout << "0.65/KG";   cout.width(8); cout << "6.0KG"; cout.width(12); cout << "R$ 3,90" << endl;
	cout << left; cout.width(10); cout << "Cenoura";    cout << right; cout.width(6); cout << "0.90/KG";  cout.width(8); cout << "10.0KG"; cout.width(12); cout << "R$ 9,00" << endl;
	 
    return 0;
}
