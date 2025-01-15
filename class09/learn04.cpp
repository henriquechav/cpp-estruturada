#include <iostream>
using namespace std;

int main()
{
    const int METERS_PER_KILOMETER = 1000;

    cout << "Entre com a distância em metros: ";
    int totalMeters;
    cin >> totalMeters;

    int kilometers = totalMeters / METERS_PER_KILOMETER;
    int meters = totalMeters % METERS_PER_KILOMETER;

    cout << totalMeters << " metros equivalem a " << kilometers << " quilômetros e ";
    cout << meters << " metros.\n";

    return 0;
}
