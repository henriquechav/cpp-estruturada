#include <iostream>
using namespace std;

int main()
{
    double x1, x2;
    cout << "Digite o valor de x1: ";
    cin >> x1;
    cout << "Digite o valor de x2: ";
    cin >> x2;

    int result = (int) x1 + (int) x2;
    cout << "A adição inteira dos valores é " << result << ".\n";

    return 0;
}
