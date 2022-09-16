
#include <iostream>
using namespace std;

int main() {
	system("chcp 1252 > nul");
	/*a)*/ float a = 3.78575f * 8.129338f;
	/*Não apresenta problemas de precisão*/
	/*b)*/ float b = 3e30f + 2e15f;
	/*Apresenta problemas de precisão */
	/*c)*/ float c = 20518.56f * 2.0f;
	/*Não apresenta problemas de precisão */
	/*d)*/ float d = 3.14159f + 1.45f;
	/*Não apresenta problemas de precisão */
	/*e)*/ float e = 2.0f * 1e30f;;	
	/*Apresenta problemas de precisão */
	
	/*
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout <<	d << endl;
	cout << e << endl;
	*/
}