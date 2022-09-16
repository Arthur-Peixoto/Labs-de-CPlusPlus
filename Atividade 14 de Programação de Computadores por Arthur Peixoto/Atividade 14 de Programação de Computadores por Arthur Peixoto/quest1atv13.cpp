enum trave { LEsq, LDir, CantoEsq, CantoDir, Centro };
union jogador
{
	char nome[25];
	int numero;
};
struct gol
{
	jogador jog; // identifica��o do jogador
	float x, y, z; // posi��o da bola nas coordenadas
	trave local; // onde a bola entrou
	float velo; // velocidade da bola
	float acel; // acelera��o da bola
};
gol estatistica[10]; // estat�sticas para at� 10 gols

i) estatistica // tipo vetor gol[10]
j) estatistica[4] //tipo gol
k) estatistica[1].jog // tipo jogador
l) estatistica->jog.numero // int
m) (estatistica + 9)->local // inv�lido
n) estatistica[2].velo // tipo float
o) (estatistica + 1)->jog.nome[0] // tipo char
p) estatistica[6].acel // tipo float
