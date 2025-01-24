#include <iostream>
using namespace std;

union regkey
{
    int key;
    char code[8];
};

int main()
{
    cout << "Qual seu tipo de senha?\n[1] chave\n[2] código\n\nOpção: ";
    int type;
    cin >> type;

    regkey password;
    if (type == 1) {
        cout << "Digite sua chave: "; cin >> password.key;
    } else {
        cout << "Digite seu código: "; cin >> password.code;
    }

    return 0;
}
