#include <iostream>
using namespace std;

int main()
{
    float a = 3.78575f * 8.129338f;
    float b = 3e30f + 2e15f;
    float c = 20518.56f * 2.0f;
    float d = 3.14159f + 1.45f;
    float e = 2.0f * 1e30f;

    cout.setf(ios_base::fixed, ios_base::floatfield);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;

    return 0;
}
