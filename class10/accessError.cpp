// Teste com acesso indevido da memória na plataforma Linux
#include <iostream>
using namespace std;

int main()
{
    int vet[5] = {1, 2, 3, 4, 5};
    
    // não gera erro do compilador g++
    vet[5] = 60;
    cout << vet[5] << endl;

    // exibe: segmentation fault (core dumped)
    vet[5000] = 60;
    cout << vet[5000] << endl;

    return 0;
}
