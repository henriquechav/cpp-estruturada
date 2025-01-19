#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 20;

    char name[SIZE], surname[SIZE];
    cout << "Primeiro nome? ";
    cin >> name;
    cout << "Segundo nome? ";
    cin >> surname;

    cout << "Bom dia, " << name << " " << surname << ".\n";
    cout << "Seja bem vindo " << name[0] << surname[0] << "!\n";

    return 0;
}
