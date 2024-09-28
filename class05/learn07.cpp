#include <iostream>
using namespace std;

float square(float);
float cube(float);

int main()
{
    float num;
    cout << "Digite um valor: ";
    cin >> num;

    cout << "\nQuadrado = " << square(num) << endl;
    cout << "Cubo = " << cube(num) << endl;
    cout << "Cubo do quadrado = " << cube(square(num)) << endl;

    return 0;
}

float square(float n)
{
    return n * n;
}

float cube(float n)
{
    return n * n * n;
}
