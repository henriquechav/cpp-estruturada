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
    chocolate snack = {"Charge", 2.3, 350};
    cout << "Marca: " << snack.brand << endl;
    cout << "Peso: " << snack.weight << endl;
    cout << "Calorias: " << snack.calories << endl;

    return 0;
}
