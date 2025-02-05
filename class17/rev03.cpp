#include <iostream>
using namespace std;

int main()
{
    char str[] = "Olá, Mundo!";

    // versão com comparação
    for (int i = 0; str[i] != '\0'; i++)
        cout << str[i];
    cout << endl;

    // versão sem comparação
    for (int i = 0; str[i]; i++)
        cout << str[i];
    cout << endl;

    return 0;
}
