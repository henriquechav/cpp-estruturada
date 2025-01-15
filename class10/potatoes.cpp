#include <iostream>
using namespace std;

int main()
{
    int potatoes[3];
    potatoes[0] = 7;
    potatoes[1] = 8;
    potatoes[2] = 6;

    int cost[3] = {20, 30, 5};

    cout << "Quantidade de batatas = ";
    cout << potatoes[0] + potatoes[1] + potatoes[2] << endl;

    cout << "O pacote com " << potatoes[1] << " batatas custa ";
    cout << cost[1] << " centavos por batata.\n";

    int total = potatoes[1] * cost[1];
    cout << "O segundo pacote custa " << total << " centavos.\n";

    return 0;
}
