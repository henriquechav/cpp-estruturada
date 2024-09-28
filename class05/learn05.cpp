// calculate a vector angle in relation to x-axis
#include <iostream>
#include <cmath>
using namespace std;

float calcAngle(int, int);

int main()
{
    cout << "Digite as coordenadas do vetor:\n";

    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    float angle = calcAngle(x, y);
    cout << "\nO ângulo do vetor é " << angle << " graus.\n";

    return 0;
}

float calcAngle(int x, int y)
{
    float angle_rad, angle_deg;
    angle_rad = atan2(y, x);
    angle_deg = angle_rad * 180 / 3.14159;

    return angle_deg;
}
