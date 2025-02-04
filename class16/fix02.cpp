#include <iostream>
using namespace std;

struct car 
{
    char brand[20];
    unsigned year;
};

int main()
{
    cout << "Quantos carros para catalogar? ";
    unsigned amount;
    cin >> amount;

    car *collection = new car[amount];

    for (int i = 0; i < amount; i++) {
        cout << "Carro #" << (i+1) << endl;
        cout << "Marca: ";
        cin >> collection[i].brand;
        cout << "Ano: ";
        cin >> collection[i].year;
    }

    cout << "\nAqui está sua coleção:\n";
    for (int i = 0; i < amount; i++)
        cout << collection[i].year << "  " << collection[i].brand << endl;

    delete[] collection;

    return 0;
}
