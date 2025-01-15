#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Digite dois números inteiros: ";
    cin >> x >> y;

    cout << "O quociente " << x << "/" << y << " é " << x/y;
    cout << endl;
    cout << "O resto da divisão " << x << "%" << y << " é " << x%y;
    cout << endl;

    return 0;
}
