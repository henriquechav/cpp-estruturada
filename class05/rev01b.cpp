// review exercise 01 - task oriented and block oriented functions 

// block oriented
#include <iostream>
using namespace std;

void initAlarm();
void readPassword();
void finishAlarm();

int main()
{
    initAlarm();
    readPassword();
    finishAlarm();

    return 0;
}

void initAlarm()
{
    cout << "Iniciando...\n";
    cout << '\a';
}

void readPassword()
{
    int password;
    cout << "Senha: ";
    cin >> password;
}

void finishAlarm()
{
    cout << "Finalizando...\n";
    cout << '\a';
}
