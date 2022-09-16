#include <iostream>
#include <windows.h>
using namespace std;

void print(int n)
{
	HANDLE fodase = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(fodase, 5);
	cout << n;
	SetConsoleTextAttribute(fodase, 15);
}

void print(float n)
{
	HANDLE fodase = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(fodase, 3);
	cout << n;
	SetConsoleTextAttribute(fodase, 15);
}

void print(const char n[])
{
	HANDLE fodase = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(fodase, 4);
	cout << n;
	SetConsoleTextAttribute(fodase, 15);
}

int main()
{
	HANDLE fodase = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(fodase, 15);
	cout << "Inteiro: ";
	print(45);
	cout << "\nPonto-flutuante: ";
	print(3.9f);
	cout << "\nString: ";
	print("Oi Mundo");
	cout << "\n";
}