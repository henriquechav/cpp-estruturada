#include <iostream>
using namespace std;

struct chocolate
{
    char brand[20];
    float weight;
    int calories;
};

int main()
{
    chocolate snacks[3] = {
        {"Milka", 2.5, 400},
        {"Pollo", 3.0, 250},
        {"Bis", 1.2, 175}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "O snack " << i+1 << " da marca " << snacks[i].brand
             << " pesa " << snacks[i].weight << " e contém "
             << snacks[i].calories << " calorias.\n";
    }

    return 0;
}
