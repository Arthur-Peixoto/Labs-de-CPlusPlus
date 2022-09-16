#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream fout;
	fout.open("numeros.txt");

	ofstream fout2;
	fout2.open("numeros.dat", ios_base::out | ios_base::binary);


	for (int i = 0; i < 100; i++)
	{
		fout << i;
		fout2.write((char*)&i, sizeof(int));
	}
}
