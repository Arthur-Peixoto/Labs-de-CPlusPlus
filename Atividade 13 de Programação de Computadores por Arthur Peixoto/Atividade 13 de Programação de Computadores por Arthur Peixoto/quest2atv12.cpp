		#include <iostream>
		using namespace std;

		struct Palavra {
			string pt;
			string esp;
			string eng;
		};

		int main() {
			Palavra dicionario[10] = {
				{"Água","Agua","Water"},
				{"Bolsa","Bolso","Bag"}
			};
			cin >> dicionario[3].pt;
			cin >> dicionario[3].esp;
			cin >> dicionario[3].eng;
			for (int i = 0; i <= 3; i++) {
				cout << dicionario[i].pt << endl;
				cout << dicionario[i].esp << endl;
				cout << dicionario[i].eng << endl;
			}
		}