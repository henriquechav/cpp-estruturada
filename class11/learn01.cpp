#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char password[] = "admin";

    char guess[20];
    cout << "Digite a senha: ";
    cin >> guess;

    if (!strcmp(guess, password))
        cout << "Senha correta.\n";
    else
        cout << "Senha incorreta.\n";

    return 0;
}
