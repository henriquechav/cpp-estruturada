#include <iostream>
using namespace std;

char encode(char);
char decode(char);

int main()
{
    char ch;
    cout << "Digite um caractere: ";
    cin >> ch;

    bool answer;
    cout << "Digite 1 para codificar ou 0 para decodificar: ";
    cin >> answer;

    if (answer == true)
        ch = encode(ch);
    else 
        ch = decode(ch);

    cout << "O resultado é: " << ch << endl;

    return 0;
}

char encode(char ch)
{
    return ch + 3;
}

char decode (char ch)
{
    return ch - 3;
}

