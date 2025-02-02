#include <iostream>
using namespace std;

struct car
{
    char model[20];
    unsigned year;
    float price;
};

void showTotalPrice(car[]);

int main()
{
    car *cars = new car [10];

    cout << "Entre com os dados de dois carros:\n";
    cin >> cars[0].model >> cars[0].year >> cars[0].price;
    cin >> cars[1].model >> cars[1].year >> cars[1].price;

    showTotalPrice(cars);

    delete cars;

    return 0;
}

void showTotalPrice(car cars[])
{
    float total = cars[0].price + cars[1].price;
    cout << fixed;
    cout.precision(2);
    cout << "O valor total é R$" << total << ".\n";
}
