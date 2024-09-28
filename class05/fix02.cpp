// converting Celsius to Fahrenheit through a function
#include <iostream>
using namespace std;

float celsiusToFahrenheit(float);

int main()
{
    float celsius;
    cout << "Digite uma temperatura em graus Celsius: ";
    cin >> celsius;

    float fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " graus Celsius equivalem a " << fahrenheit;
    cout << " graus Fahrenheit.\n";

    return 0;
}

float celsiusToFahrenheit(float celsius)
{
    float fahrenheit = 1.8 * celsius + 32.0;
    return fahrenheit;
}
