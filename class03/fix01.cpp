#include <iostream>
using namespace std;

int main(void)
{
    int segundos, minutos;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    segundos = 60 * minutos;

    cout << "Existem " << segundos;
    cout << " segundos em " << minutos << " minutos.\n";

    return 0;
}
