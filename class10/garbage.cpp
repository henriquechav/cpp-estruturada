#include <iostream>
using namespace std;

int main()
{
    int vet[3];

    // exibindo o lixo da memória
    cout << "Conteúdo da posição 0: " << vet[0] << endl;
    cout << "Conteúdo da posição 1: " << vet[1] << endl;
    cout << "Conteúdo da posição 2: " << vet[2] << endl;
    cout << endl;

    vet[0] = 0; vet[1] = 0; vet[2] = 0;

    cout << "Conteúdo da posição 0: " << vet[0] << endl;
    cout << "Conteúdo da posição 1: " << vet[1] << endl;
    cout << "Conteúdo da posição 2: " << vet[2] << endl;
    cout << endl;

    cout << "O vetor tem " << sizeof vet << " bytes.\n";
    cout << "Um elemento tem " << sizeof vet[0] << " bytes.\n";

    return 0;
}
