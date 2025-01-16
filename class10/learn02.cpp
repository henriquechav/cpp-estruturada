#include <iostream>
using namespace std;

int main()
{
    float weights[3] = {2.0, 3.0, 4.0};
    
    float grades[3];
    cout << "Digite suas três notas: ";
    cin >> grades[0] >> grades[1] >> grades[2];

    cout << "Sua nota no sistema antigo: ";
    cout << (grades[0]*weights[0] + grades[1]*weights[1] + grades[2]*weights[2]) / 9 << endl;

    cout << "Sua nota no sistema atual: ";
    cout << (grades[0] + grades[1] + grades[2]) / 3 << endl;

    return 0;
}
