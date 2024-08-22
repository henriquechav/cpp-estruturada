#include <iostream>
using namespace std;

int main(void) // usando uma variável
{
    int medida;

    cout << "Digite uma medida.\n";
    cout << "Medida: ";
    cin >> medida;

    medida = 2 * medida;
    cout << "2x medida: " << medida << endl;

    medida = medida / 2;
    medida = medida * medida;
    cout << "Medida ao quadrado: " << medida << endl;

    return 0;
}
