#include <iostream>
using namespace std;

int sumVector(int []);

int main()
{
    int vec[5];
    cout << "Digite 5 valores: ";
    cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];

    cout << "A soma do vetor é " << sumVector(vec) << ".\n";

    return 0;
}

int sumVector(int vt[])
{
    return vt[0] + vt[1] + vt[2] + vt[3] + vt[4];
}
