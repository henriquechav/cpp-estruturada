#include <iostream>
using namespace std;

bool testBit(unsigned char, int);
void showBits(unsigned char);

int main()
{
    unsigned state;
    cout << "Digite um valor entre 0 e 255: ";
    cin >> state;

    showBits(state);

    return 0;
}

bool testBit(unsigned char state, int pos)
{
    unsigned char mask = 1 << pos;
    return state & mask;
}

void showBits(unsigned char state)
{
    cout << "O número " << (int) state << " em binário é ";

    for (int i = 7; i > -1; i--)
    {
        if (testBit(state, i))
            cout << "1";
        else 
            cout << "0";
    }

    cout << ".\n";
}
