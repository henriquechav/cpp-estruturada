#include <iostream>
using namespace std;

int main()
{
    double liters = 3.4;
    double * p = &liters;

    cout << "O valor de litros é " << *p << endl;

    return 0;
}
