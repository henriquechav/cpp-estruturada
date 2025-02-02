#include <iostream>
using namespace std;

int main()
{
    cout << "Quantos valores deseja guardar? ";
    unsigned amount;
    cin >> amount;

    int *vec = new int [amount];

    cout << "Quais os valores? ";
    for (int i = 0; i < amount; i++) {
        cin >> vec[i];
    }

    cout << "Os valores " << vec[0];
    for (int i = 1; i < amount - 1; i++) {
        cout << ", " << vec[i];
    }
    cout << " e " << vec[amount-1] << " foram armazenados.\n";

    delete vec;

    return 0;
}
