#include <iostream>
using namespace std;

int main()
{
    float torque[10] = {2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9};

    cout << "Torques: ";
    for (int i = 0; i <= 8; i++) {
        cout << torque[i] << ", ";
    }
    cout << torque[9] << endl << endl;

    float * p = torque;
    cout << "Primeiro: " << *p << endl;
    cout << "Último: " << *(p + 9) << endl;

    return 0;
}
