#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int angle;
    float sine;

    cout << "Digite um ângulo: ";
    cin >> angle;

    // sin() receives the angle in radians
    sine = sin(angle * 3.14159265 / 180);

    cout << "Seno = " << sine << endl;

    return 0;
}
