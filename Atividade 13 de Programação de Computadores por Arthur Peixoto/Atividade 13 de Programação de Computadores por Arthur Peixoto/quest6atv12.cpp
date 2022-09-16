#include <iostream>
using namespace std;

struct tempo {
	int hora;
	int minutos;
};


tempo ler();
void exibir(tempo x, tempo y, tempo res);
tempo subtracao(tempo, tempo);
		
int main() {
	system("chcp 1252 > nul");
	cout << "Início: ";
	tempo t1 = ler();
	cout << "Fim: ";
	tempo t2 = ler();
	tempo sub = subtracao(t1, t2);
	exibir(t1, t2,sub);
}

tempo subtracao(tempo a, tempo b) {
	tempo t;
	if (b.minutos > a.minutos) {
		b.hora = b.hora - 1;
		b.minutos = b.minutos + 60;
	}
	t.hora = b.hora - a.hora;
	t.minutos = b.minutos - a.minutos;
	if (t.minutos > 60) {
		t.minutos = t.minutos - 60;
		t.hora = t.hora + 1;
	}

	return t;
}

tempo ler() {
	tempo temp;
	char ch;
	cin >> temp.hora >> ch >> temp.minutos;

	return temp;
}

void exibir(tempo x, tempo y, tempo res) {
	char ch = ':';
	int minutototal = (res.hora * 60) + res.minutos;
	cout << endl;
	cout << "Entre " << x.hora << ch << x.minutos << " e " << y.hora << ch << y.minutos << " existem " <<
	minutototal << " minutos, isto é, " << res.hora << "h e " << res.minutos << " minutos.";
}