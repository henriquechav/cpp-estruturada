#include <iostream>
using namespace std;

int main()
{
    int distance, liters;
    cout << "Distância percorrida (km): ";
    cin >> distance;
    cout << "Litros de combustível: ";
    cin >> liters;

    int distancePerLiters = distance / liters;
    cout << "O consumo do seu carro foi de " << distancePerLiters << " km/litro.\n";
    // doesn't calculate numbers with a fractional part, because its type is int

    return 0;
}
