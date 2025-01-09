#include <iostream>
using namespace std;

#define BREAD 0.30
#define PASTEL 0.25

int main()
{
    cout << "Pães&Cia\n\n";

    int breads, pastels;
    cout << "Quantos pães? ";
    cin >> breads;
    cout << "Quantos pastéis? ";
    cin >> pastels;

    float total = breads * BREAD + pastels * PASTEL;

    cout << "\nO total das compras é R$" << total << endl;
    
    return 0;
}

