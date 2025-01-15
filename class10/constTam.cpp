#include <iostream>
using namespace std;

int main()
{
    const int Tam = 5 * sizeof(int);
    const int Max = rand();

    cout << "Tam: " << Tam << endl;
    cout << "Max: " << Max << endl;

    int val[Tam];
    int vet[Max]; // Segmentation fault (core dumped)

    return 0;
}
