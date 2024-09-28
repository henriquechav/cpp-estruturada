#include <cmath>

float calcMagnitude(int x, int y)
{
    float magnitude = sqrt( pow(x, 2) + pow(y, 2) );
    return magnitude;
}

float calcAngle(int x, int y)
{
    float angle_rad, angle_deg;
    angle_rad = atan2(y, x);
    angle_deg = angle_rad * 180 / 3.14159;

    return angle_deg;
}
