#include <iostream>
using namespace std;
struct Controller
{
    char name[40];
    int buttons;
    int axis;
};

void ListarNomes(Controller f) {
    cout << f.name << endl;
 }
void ListarEixos(Controller f) {
    cout << f.buttons << endl;
    cout << f.axis << endl;

}

void Enumerate(void(*f)(Controller))
{
    Controller vet[] =
    {
    {"Joy", 8, 4},
    {"Xbox", 10, 3},
    {"Play", 8, 6}
    };
    for (auto i : vet)
        f(i);
}
int main()
{
    Enumerate(ListarNomes);
    Enumerate(ListarEixos);
}