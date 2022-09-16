#include <iostream>
using namespace std;

double vetor(double[]);

int main() {
	double vet[3];
	cout << "valores do vetor: ";
	cin >> vet[0] >> vet[1] >> vet[2];
	double num = vetor(vet);
	cout << "resultado: " << num;
}

double vetor(double v[]){
	double x = v[0] * (v[1] - v[2]);
	return x;
}