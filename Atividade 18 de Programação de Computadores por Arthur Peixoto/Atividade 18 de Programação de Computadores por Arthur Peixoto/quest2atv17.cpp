#include <iostream>
using namespace std;

int main() {
	int lim;
	cout << "Você quer que eu conte de 1 até que número?";
	cin >> lim;
	for (int x = 0; x < lim; x++) {
		cout << x << " ";
	}
	cout << endl;
	for (int x = lim; x > 0; x--) {
		cout << x << " ";
	}
	cout << endl;
	for (int x = 1; x < lim; x++) {
		cout << x << " ";
		x++;
	}
	cout << endl;
	for (int x = lim; x > 1; x--) {
		cout << x << " ";
		x--;
	}
	cout << endl;
	for (int x = 0; x < lim; x++) {
		cout << x << " ";
		x++;
	}
	cout << endl;
	for (int x = lim; x > 0; x--) {
		cout << x << " ";
		x--;
	}
}