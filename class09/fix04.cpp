#include <iostream>
using namespace std;

int main()
{
    cout << "Aposta dos amigos\n";
    cout << "-----------------\n";

    float bet1, bet2;
    int prize;
    cout << "Digite a quantia apostada pelo jogador 1: ";
    cin >> bet1;
    cout << "Digite a quantia apostada pelo jogador 2: ";
    cin >> bet2;
    cout << "Entre com o valor do prêmio: ";
    cin >> prize;
    cout << endl;

    int prize1, prize2;
    prize1 = prize * (bet1 / (bet1 + bet2));
    prize2 = prize * (bet2 / (bet1 + bet2));

    cout << "O jogador 1 tem direito a R$" << prize1 << endl;
    cout << "O jogador 2 tem direito a R$" << prize2 << endl;

    return 0;
}
