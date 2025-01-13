#include <iostream>
using namespace std;

int main()
{
    float a = 2.34e+8;
    float b = a + 1.0f;
    // o resultado da soma extrapola a quantidade de 
    // dígitos significativos comportados pelo tipo float

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;

    return 0;
}

