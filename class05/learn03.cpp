// calculate Body Mass Index (BMI) through a fuction
#include <iostream>
using namespace std;

float calcBMI(float, float);

int main()
{
    cout << "Índice de Massa Corporal (IMC)\n";
    cout << "------------------------------\n";
    
    float height, mass;
    cout << "Altura: ";
    cin >> height;
    cout << "Massa: ";
    cin >> mass;

    float bmi = calcBMI(height, mass);
    cout << "IMC: " << bmi << endl;

    return 0;
}

float calcBMI(float height, float mass)
{
    return mass / (height * height);
}
