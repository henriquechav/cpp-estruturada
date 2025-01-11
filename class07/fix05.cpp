#include <iostream>
#include <bitset>
using namespace std;

bool testBit(unsigned char, int);
unsigned char turnOnBit(unsigned char, int);
unsigned char turnOffBit(unsigned char, int);

int main()
{
    unsigned char state = 0b00100101;

    cout << testBit(state, 2) << endl;
    state = turnOnBit(state, 7);
    cout << bitset<8>(state) << endl;
    state = turnOffBit(state, 5);
    cout << bitset<8>(state) << endl;

    return 0;
}

bool testBit(unsigned char state, int pos)
{
    unsigned char mask = 1 << pos;
    return state & mask;
}

unsigned char turnOnBit(unsigned char state, int pos)
{
    unsigned char mask = 1 << pos;
    state = state | mask;
    return state;
}

unsigned char turnOffBit(unsigned char state, int pos)
{
    unsigned char mask = ~(1 << pos);
    state = state & mask;
    return state;
}
