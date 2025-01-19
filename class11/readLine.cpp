#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 20;

    char name[SIZE];
    char dessert[SIZE];

    cout << "Entre com seu nome:\n";
    cin.getline(name, SIZE);

    cout << "Entre com sua sobremesa favorita:\n";
    cin.getline(dessert, SIZE);

    cout << "Eu tenho um " << dessert;
    cout << " para você, " << name << ".\n";

    return 0;
}
