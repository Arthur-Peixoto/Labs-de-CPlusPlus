
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	/*a)*/ float a = 3.78575f * 8.129338f;
	/*N�o apresenta problemas de precis�o*/
	/*b)*/ float b = 3e30f + 2e15f;
	/*Apresenta problemas de precis�o */
	/*c)*/ float c = 20518.56f * 2.0f;
	/*N�o apresenta problemas de precis�o */
	/*d)*/ float d = 3.14159f + 1.45f;
	/*N�o apresenta problemas de precis�o */
	/*e)*/ float e = 2.0f * 1e30f;;	
	/*Apresenta problemas de precis�o */
	
	/*
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout <<	d << endl;
	cout << e << endl;
	*/
}