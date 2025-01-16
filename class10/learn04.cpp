#include <iostream>
using namespace std;

int main()
{
    int vec[5];

    for (int i = 0; i < 5000; i++)
    {
        cout << "Posição: " << i << endl;
        vec[i] = 60;
    }

    // A cada execução, varia a posição onde o erro é gerado ao tentar atribuir.
    // Esse experimento mostra que o endereço da memória concedido ao vetor
    // varia aleatoriamente a cada execução.

    return 0;
}
