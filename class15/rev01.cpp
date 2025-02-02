#include <iostream>
using namespace std;

int main()
{
    cout << "Digite o tamanho do vetor: ";
    unsigned size;
    cin >> size;

    cout << "Criando um vetor para " << size << " inteiros...\n";
    int *vec = new int [size];

    delete [] vec;
    return 0;
}
