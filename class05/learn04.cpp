// calculate a vector magnitude through a fuction
#include <iostream>
#include <cmath>
using namespace std;

float calcMagnitude(int, int);

int main()
{
    cout << "Digite as coordenadas do vetor:\n";
    
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    float magnitude = calcMagnitude(x, y);
    cout << "\nO tamanho do vetor é " << magnitude << endl;

    return 0;
}

float calcMagnitude(int x, int y)
{
    float magnitude = sqrt( pow(x, 2) + pow(y, 2) );
    return magnitude;
}
