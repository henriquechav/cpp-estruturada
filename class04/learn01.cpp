// learning exercise 01 - calculating distance between two dots
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int qx, qy, px, py;
    float distance;

    cout << "Ponto P:\n";
    cin >> px >> py;
    cout << "Ponto Q:\n";
    cin >> qx >> qy;

    distance = sqrt( pow(qx-px, 2) + pow(qy-py, 2) );

    cout << "\nA distância entre P e Q é: " << distance << endl;

    return 0;
}
