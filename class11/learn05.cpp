#include <iostream>
using namespace std;

int main()
{
    char name[20], surname[20];
    cout << "Digite seu nome e sobrenome: ";
    cin >> name >> surname;

    cout << "Bom dia, senhor " << surname;
    cout << ". Ou devo chamá-lo de " << name << "?\n";

    return 0;
}
