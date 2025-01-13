#include <iostream>
using namespace std;

int main()
{
    // n1 = 6.1
    // n2 = 1.6
    // n3 = 2.35
    // n4 = 1.43
    // n5 = 6.7

    float num;
    cout << "Digite um número de ponto flutuante: ";
    cin >> num;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(8);

    cout << "Com 8 casas decimais: " << num << endl;

    return 0;
}
