#include <iostream>
using namespace std;

int main() {
	float vet1[3] = {2.0, 3.0 , 4.0};
	float vet2[3];
	cin >> vet2[0] >> vet2[1] >> vet2[2];
	float mediaantiga = ((vet1[0] * vet2[0]) + (vet1[1] * vet2[1]) + (vet1[2] * vet2[2])) / 9;
	cout << "m�dia antiga: " << mediaantiga << endl;
	float medianova = (vet2[0] + vet2[1] + vet2[2]) / 3;
	cout << "m�dia nova: " << medianova << endl;
}