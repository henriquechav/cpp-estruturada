#include <iostream>
using namespace std;

struct car
{
    char model[20];
    unsigned year;
    float price;
};

int main()
{
    car cars[10] = {
        {"Vectra", 2009, 58000.00f},
        {"Polo", 2008, 45000.00f}
    };

    car *pcar = &cars[1];

    cout << fixed;
    cout.precision(2);
    cout << "O segundo carro, do modelo " << pcar->model
         << " e do ano " << pcar->year << ", custa R$"
         << pcar->price << ".\n";

    return 0;
}
