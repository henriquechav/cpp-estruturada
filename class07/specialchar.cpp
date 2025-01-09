#include <iostream>
using namespace std;

int main()
{
    char alarm = '\a';
    int password;

    cout << "Digite a senha: ________\b\b\b\b\b\b\b\b";
    cin >> password;

    cout << alarm << "Sua senha foi roubada!\a\n";
    cout << "Joãozinho \"O Hacker\"\nesteve aqui!\n";

    return 0;
}
