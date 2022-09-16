#include <iostream>
#include <string>
using namespace std;

int main() {	
	string data1, data2, data3;
	string natal = "Natal";
	cout << "Quais suas datas comemorativas preferidas?" << endl;
	getline(cin, data1);
	getline(cin, data2);
	getline(cin, data3);
	cout << data1 << ", " << data2 << " e " << data3 << " são belas festas." << endl;
	if (data1 == natal) {
		cout << "O Natal também é uma das minhas datas preferidas!";
	}
	else if (data2 == natal) {
		cout << "O Natal também é uma das minhas datas preferidas!";
	}
	else if (data3 == natal) {
		cout << "O Natal também é uma das minhas datas preferidas!";
	}
}