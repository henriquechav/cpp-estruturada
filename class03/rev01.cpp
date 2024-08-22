#include <iostream>
using namespace std;

int main(void)
{
    float altura, largura, comprimento, volume;

    cout << "Entre com a altura, largura e comprimento:\n";
    cin >> altura >> largura >> comprimento;

    volume = altura * largura * comprimento;

    cout << "O volume é " << volume << "cm cúbicos.\n";

    return 0;
}
