#include <iostream>
#include <random>
using namespace std;

enum Sexo {Masculino, Feminino};

int main()
{
    cout << "Sorteando o sexo do bebê...\n";

    random_device rand;
    int sorteio = rand() % 2;

    if (sorteio == Masculino)
        cout << "Parabéns, um menino!\n";
    else
        cout << "Parabéns, uma menina!\n";

    return 0;
}
