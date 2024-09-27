#include <iostream>
#include <cmath>
using namespace std;

int Absolute(int);

int main()
{
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;

    int abs = Absolute(num);
    cout << "O valor absoluto é " << abs << ".\n";

    return 0;
}

int Absolute(int n)
{
    int result = sqrt( pow(n, 2) );
    return result;
}
