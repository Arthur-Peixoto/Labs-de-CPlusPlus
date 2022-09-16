#include <iostream>
using namespace std;

int main() {
	int nums[10], primeiros[5], ultimos[5], soma[5];
	cout << "Digite 10 valores:";
	for (int x = 0; x < 10; x++) {
		cin >> nums[x];
	}
	cout << endl << "Vetor A: ";
	for (int a = 0; a < 5; a++) {
		primeiros[a] = nums[a];
		cout << primeiros[a] << " ";
	}
	cout << endl << "Vetor B: ";
	for (int i = 0, b = 5; b < 10; b++, i++) {
		ultimos[i] = nums[b];
		cout << ultimos[i] << " ";
	}
	cout << endl << "Vetor S: ";
	for (int x = 0; x < 5; x++) {
		soma[x] = primeiros[x] + ultimos[x];
		cout << soma[x] << " ";
	}
}