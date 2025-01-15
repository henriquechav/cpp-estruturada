#include <iostream>
using namespace std;

int main()
{
    double dbl = 245.795;
    int integer = (int) dbl;

    cout << dbl * 100 << endl;
    cout << integer * 100 << endl;

    // Ao multiplicar por 100, deslocamos a vírgula para direita duas vezes.
    // Mas ao converter o double para inteiro, perdemos a parte fracionária.
    // Isso demonstra que devemos tomar cuidado para não perder informações 
    // importantes durante as conversões de tipos.

    return 0;
}
