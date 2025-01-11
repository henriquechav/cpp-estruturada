#include <iostream>
using namespace std;

void alert(void);
int readPassword(void);

int main()
{
    alert();
    cout << "Iniciando com um som...\n";

    int password = readPassword();

    cout << "Obrigado!\n";

    return 0;
}

void alert()
{
    cout << "\a";
}

int readPassword()
{
    int password;
    cout << "Digite sua senha: ________\b\b\b\b\b\b\b\b";
    cin >> password;
    return password;
}
