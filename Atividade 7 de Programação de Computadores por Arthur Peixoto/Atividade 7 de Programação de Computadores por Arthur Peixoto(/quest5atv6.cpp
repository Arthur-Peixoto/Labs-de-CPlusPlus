#include <climits>
#include <iostream>
using namespace std;

bool IsShort(long long a);
bool IsInt(long long x);
bool X,valor, resultado;

int main() {
	system("chcp 1252 > nul");
	cout << "Digite um valor inteiro : ";
	cin >> X;
	IsShort(X);
	valor = IsShort(X);
	if (valor = true){
		cout << X << " cabe em 16 bits" << endl;
	}
	else{
		cout << X << " não cabe em 16 bits" << endl;
	}
	IsInt(X);
	resultado = IsInt(X);
	if (resultado = true) {
		cout << X << " cabe em 32 bits" << endl;
	}
	else {
		cout << X << " não cabe em 32 bits" << endl;
	}
}

bool IsShort(long long a) {
	bool tf;
	if (SHRT_MIN < a > SHRT_MAX) {
		tf = true;
		}
	else{
		tf = false;
	}
	return tf;
}

bool IsInt(long long x) {
	bool ft;
	if (INT_MIN < x > INT_MAX) {
		ft = true;
	}
	else {
		ft = false;
	}
	return ft;
}