#include <iostream>
using namespace std;

int main(void)
{
    int vec[5];
    cout << "Vetor: ";
    cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];
    cout << "---------------------\n";

    int pos, newValue;
    cout << "Alterar posição: ";
    cin >> pos;
    cout << "Novo valor: ";
    cin >> newValue;
    cout << "---------------------\n";

    vec[pos] = newValue;
    cout << "Vetor: ";
    cout << vec[0] << " ";
    cout << vec[1] << " ";
    cout << vec[2] << " ";
    cout << vec[3] << " ";
    cout << vec[4] << endl;

    return 0;
}
