#include <iostream>
using namespace std;

int main() {
	int A[10] = { 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };

	for (int i = 0; i < 10; i++) {
		int* vet1 = (A + i);
		int* vet2 = ((A + i)+1);
		cout << " [" << *(vet1) << ", " << *(vet2) << "]";
		i++;
	}
}