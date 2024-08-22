#include <iostream>
using namespace std;

int main(void) // incompleto
{
    cout << left; cout.width(15); cout << "Produto";
    cout << left; cout.width(15); cout << "Preço/Kg";
    cout << left; cout.width(15); cout << "Pedido (Kg)";
    cout.width(15); cout << "Total Parcial\n";

    cout << left; cout.width(15); cout << "------------";
    cout << left; cout.width(15); cout << "------------";
    cout << left; cout.width(15); cout << "------------";
    cout.width(15); cout << "--------------\n";

    return 0;
}
