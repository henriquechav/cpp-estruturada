#include <iostream>
using namespace std;

int main()
{
    cout << "Você quer que eu conte de 1 até que número? ";
    int num;
    cin >> num;

    // ordem crescente
    for (int i = 1; i <= 10; i++)
        cout << i << " ";
    cout << endl;

    // ordem decrescente
    for (int i = 10; i >= 1; i--)
        cout << i << " ";
    cout << endl;

    // só ímpares
    for (int i = 1; i <= 9; i+=2)
        cout << i << " ";
    cout << endl;

    // só ímpares invertidos
    for (int i = 9; i >= 1; i-=2)
        cout << i << " ";
    cout << endl;

    // só pares
    for (int i = 2; i <= 10; i+=2)
        cout << i << " ";
    cout << endl;

    // só pares invertidos
    for (int i = 10; i >= 2; i-=2)
        cout << i << " ";
    cout << endl;

    return 0;
}
