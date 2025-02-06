#include <iostream>
#include <cstring>
using namespace std;

struct login
{
    char name[20];
    char password[20];
};

int main()
{
    login admin = {"admin", "admin"};

    char name[20], password[20];
    cout << "Nome: ";
    cin >> name;
    cout << "Senha: ";
    cin >> password;

    // validez será alterada para false caso os testes falhem
    bool isValid = true;

    // verificando char por char com base na string mais longa
    int length = strlen(name);
    for (int i = 0; i < length || i < 5; i++)
        if (name[i] != admin.name[i])
            isValid = false;
    
    length = strlen(password);
    for (int i = 0; i < length || i < 5; i++)
        if (password[i] != admin.password[i])
            isValid = false;

    if (isValid)
        cout << "\nLogin e senha corretos.\n";
    else
        cout << "\nLogin e senha incorretos.\n";

    return 0;
}
