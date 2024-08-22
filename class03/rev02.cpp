#include <iostream>
using namespace std;

int main(void)
{
    int horas, minutos;
    char separador;

    cout << "Que horas são? ";
    cin >> horas >> separador >> minutos;

    cout << horas << " horas\n";
    cout << minutos << " minutos\n";

    return 0;
}
