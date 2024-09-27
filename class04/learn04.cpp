#include <iostream>
using namespace std;

double CilinderVolume(int, int);

int main()
{
    cout << "Calcula o volume de um cilindro\n";
    cout << "-------------------------------\n";
    
    int radius;
    cout << "Entre com o raio da base: "; 
    cin >> radius;

    int height;
    cout << "Entre com a altura: ";
    cin >> height;

    double volume = CilinderVolume(radius, height);
    cout << "O volume do cilindro é " << volume << endl;

    return 0;
}

double CilinderVolume(int radius, int height)
{
    double result = 3.14159 * radius * radius * height;
    return result;
}
