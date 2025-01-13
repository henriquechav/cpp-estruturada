#include <iostream>
#include <cmath>
using namespace std;

void solveQuadraticEquation(int, int, int);

int main()
{
    int a, b, c;
    cout << "Resolvedor de equação quadrática\n";
    cout << "Digite A: ";
    cin >> a;
    cout << "Digite B: ";
    cin >> b;
    cout << "Digite C: ";
    cin >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}

void solveQuadraticEquation(int a, int b, int c)
{
    int discriminant = pow(b, 2) - 4*a*c;

    if (discriminant > 0)
    {
        cout << "\nHá duas raízes reais e distintas.\n";

        float x1, x2;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "\nHá só uma raiz real.\n";

        float x = (-b + sqrt(discriminant)) / (2*a);

        cout << "x = " << x << endl;
    }
    else
        cout << "\nNão há raiz real.\n";
}
