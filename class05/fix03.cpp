#include <iostream>
using namespace std;

float calcHarmonicMean(float, float);

int main()
{
    float num1, num2;
    cout << "Entre com um número: ";
    cin >> num1;
    cout << "Entre com outro número: ";
    cin >> num2;

    float harmonic_mean = calcHarmonicMean(num1, num2);
    cout << "A média harmônica dos números é " << harmonic_mean << endl;

    return 0;
}

float calcHarmonicMean(float n1, float n2)
{
    float result = 2.0 * n1 * n2 / (n1 + n2);
    return result;
}
