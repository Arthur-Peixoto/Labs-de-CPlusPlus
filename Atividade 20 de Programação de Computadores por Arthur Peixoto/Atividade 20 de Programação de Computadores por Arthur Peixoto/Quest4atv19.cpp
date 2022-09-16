#include <iostream>
using namespace std;

void exibir(int[]);

int main() {
	int mat[2][3] =
	{
	 {1,2,3},
	 {4,5,6}
	};
	exibir(mat[0]);
	cout << mat[0][0] << endl
		<< &mat[0][0];
}

void exibir(int a[]) {
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j) {
			cout << a[i] << endl;
		}
		}
}