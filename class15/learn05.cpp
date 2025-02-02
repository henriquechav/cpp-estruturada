#include <iostream>
using namespace std;

struct ASCII
{
    int integer;
    char character;
};

ASCII* turnIntoASCII(int, char);

int main()
{
    cout << "Digite um inteiro e um caractere: ";
    int num; char ch;
    cin >> num >> ch;

    ASCII *p = turnIntoASCII(num, ch);

    cout << "O int e o char são, respectivamente, " << p->integer
         << " e " << p->character << ".\n";

    delete p;

    return 0;
}

ASCII* turnIntoASCII(int num, char ch)
{
    ASCII *p = new ASCII;
    p->integer = num;
    p->character = ch;
    return p;
}
