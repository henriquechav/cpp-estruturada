#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    const int SIZE = 15;
    char name[SIZE];
    char nick[SIZE] = "C++owboy";

    cout << "Olá! Eu sou " << nick << "! Qual é seu nome?\n";
    cin >> name;

    cout << "Bem, " << name << ", seu nome tem " << strlen(name) << " letras\n"
            "e está armazenado em um vetor de " << sizeof(name) << " bytes.\n"
            "Sua inicial é " << name[0] << ".\n";

    nick[3] = '\0';
    cout << "Meu apelido é " << nick << endl;

    return 0;
}
