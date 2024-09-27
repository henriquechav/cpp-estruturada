// review exercise 01 - task oriented and block oriented functions 

// task oriented
#include <iostream>
using namespace std;

void alarm();
int readPassword();

int main()
{
    cout << "Iniciando...\n";
    alarm();

    int password;
    cout << "Senha: ";
    password = readPassword();

    cout << "Finalizando...\n";
    alarm();

    return 0;
}

void alarm()
{
    cout << '\a';
}

int readPassword()
{
    int n;
    cin >> n;

    return n;
}
