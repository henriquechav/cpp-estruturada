// calculate polar coordinates of a vector using the functions
// of the previous exercises, and divide code into three files
#include <iostream>
#include "polar.h"
using namespace std;

int main()
{
    cout << "Digite as coordenadas do vetor:\n";

    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    float magnitude, angle;
    magnitude = calcMagnitude(x, y);
    angle = calcAngle(x, y);

    cout << "\nCoordenadas polares do vetor:\n";
    cout << "(" << magnitude << ", " << angle << ")\n";

    return 0;
}
