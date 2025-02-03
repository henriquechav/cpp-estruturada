#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Digite um número positivo: ";
    for (cin >> num; num <= 0; cin >> num)
        cout << "Digite um número positivo: ";
    cout << "O número " << num << " é positivo.\n";

    return 0;
}
