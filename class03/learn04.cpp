// learning exercise 4
#include <iostream>
using namespace std;

int main()
{
    float cost, factorycost;

    cout << "Custo de fábrica: ";
    cin >> factorycost;

    // factory costs + distributor percentage + taxes
    cost = factorycost + (factorycost * 0.28) + (factorycost * 0.45);

    cout << "O custo ao consumidor é de R$" << cost << endl; 

    return 0;
}
