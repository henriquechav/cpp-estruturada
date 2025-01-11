#include <iostream>
using namespace std;

char encode(char);
char decode(char);

int main()
{
    char ch;
    cout << "Digite um caractere: ";
    cin >> ch;

    ch = encode(ch);
    cout << "Codificado: " << ch << endl;
    ch = decode(ch);
    cout << "Decodificado: " << ch << endl; 

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
